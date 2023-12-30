#version 330 core
out vec4 FragColor;

in vec2 TexCoords;
in vec3 Normal;  
in vec3 FragPos;  

struct Material {
    sampler2D diffuse;
    sampler2D night;
    sampler2D specular;
    float     shininess;
};

struct PointLight {
    vec3 position;

    float constant;
    float linear;
    float quadratic;

    vec3 ambient;
    vec3 diffuse;
    vec3 specular;
};  
#define NR_POINT_LIGHTS 10
uniform int PointLightCount;
uniform PointLight pointLights[NR_POINT_LIGHTS];

uniform Material material;
uniform vec3 viewPos;

vec3 CalcPointLight(PointLight light, vec3 normal, vec3 fragPos, vec3 viewDir)
{
    vec3 lightDir = normalize(light.position - fragPos);
    // 漫反射着色
    float diff = max(dot(normal, lightDir), 0.0);
    // 镜面光着色
    vec3 reflectDir = reflect(-lightDir, normal);
    float spec = pow(max(dot(viewDir, reflectDir), 0.0), material.shininess) * 0.3;
    // 衰减
    float distance    = length(light.position - fragPos);
    float attenuation = 1.0 / (light.constant + light.linear * distance + 
                 light.quadratic * (distance * distance));    

    // 选择昼夜贴图
    vec3 warmYellow = vec3(1.0, 0.6, 0.2);
    vec3 dayColor = vec3(texture(material.diffuse, TexCoords));
    vec3 nightColor = vec3(texture(material.night, TexCoords));
    // 使用太阳位置和法线的点积来决定是使用白天图还是夜晚图
    float sunFactor = max(dot(lightDir, normal), 0.0); // 计算太阳光线与法线的点积
    vec3 color = mix(nightColor, dayColor, sunFactor);

    // 如果是夜晚，直接使用夜晚贴图的颜色，不受光照影响
    if (sunFactor <= -0.2) {
        color = nightColor;
        vec3 ambient  = color;
        ambient  *= attenuation;
        return (ambient);
    }
    else if (sunFactor <= 0.2)
    {
        float factor = smoothstep(-0.2, 0.2, sunFactor);
        vec3 ambient = mix(nightColor, light.ambient * dayColor, factor);
        vec3 diffuse = light.diffuse  * diff * dayColor;
        vec3 specular= light.specular * spec * vec3(texture(material.specular, TexCoords)).r * warmYellow;
        ambient  *= attenuation;
        diffuse  *= attenuation;
        specular *= attenuation;
        return (ambient + diffuse + specular);
    }
    else
    {
        color = dayColor;
        vec3 ambient  = light.ambient  * color;
        vec3 diffuse  = light.diffuse  * diff * color;
        vec3 specular = light.specular * spec * vec3(texture(material.specular, TexCoords)).r * warmYellow;
        ambient  *= attenuation;
        diffuse  *= attenuation;
        specular *= attenuation;
        return (ambient + diffuse + specular);
    }


}

void main()
{    
    // 属性
    vec3 norm = normalize(Normal);
    vec3 viewDir = normalize(viewPos - FragPos);

    // 第一阶段：定向光照
     vec3 result;
    // 第二阶段：点光源
    for(int i = 0; i < PointLightCount; i++)
        result += CalcPointLight(pointLights[i], norm, FragPos, viewDir);    
    // 第三阶段：聚光
    //result += CalcSpotLight(spotLight, norm, FragPos, viewDir);    

    FragColor = vec4(result, 1.0);
} 