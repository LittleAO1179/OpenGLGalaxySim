#include "SpotLight.h"

int SpotLight::count = 0;

SpotLight::SpotLight(Shader* itemShader)
{
    count++;
    m_Ambient = glm::vec3(0.05f);
    m_Diffuse = glm::vec3(0.8f);
    m_Specular = glm::vec3(1.0f);
    m_Constant = 1.0f;
    m_Linear = 0.09f;
    m_Quadratic = 0.032f;
    m_Model = glm::mat4(1.0f);

    m_Verticesp = std::unique_ptr<float>(new float[8 * 36] {
        // positions          // normals           // texture coords
        -0.5f, -0.5f, -0.5f, 0.0f, 0.0f, -1.0f, 0.0f, 0.0f,
            0.5f, -0.5f, -0.5f, 0.0f, 0.0f, -1.0f, 1.0f, 0.0f,
            0.5f, 0.5f, -0.5f, 0.0f, 0.0f, -1.0f, 1.0f, 1.0f,
            0.5f, 0.5f, -0.5f, 0.0f, 0.0f, -1.0f, 1.0f, 1.0f,
            -0.5f, 0.5f, -0.5f, 0.0f, 0.0f, -1.0f, 0.0f, 1.0f,
            -0.5f, -0.5f, -0.5f, 0.0f, 0.0f, -1.0f, 0.0f, 0.0f,

            -0.5f, -0.5f, 0.5f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f,
            0.5f, -0.5f, 0.5f, 0.0f, 0.0f, 1.0f, 1.0f, 0.0f,
            0.5f, 0.5f, 0.5f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f,
            0.5f, 0.5f, 0.5f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f,
            -0.5f, 0.5f, 0.5f, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f,
            -0.5f, -0.5f, 0.5f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f,

            -0.5f, 0.5f, 0.5f, -1.0f, 0.0f, 0.0f, 1.0f, 0.0f,
            -0.5f, 0.5f, -0.5f, -1.0f, 0.0f, 0.0f, 1.0f, 1.0f,
            -0.5f, -0.5f, -0.5f, -1.0f, 0.0f, 0.0f, 0.0f, 1.0f,
            -0.5f, -0.5f, -0.5f, -1.0f, 0.0f, 0.0f, 0.0f, 1.0f,
            -0.5f, -0.5f, 0.5f, -1.0f, 0.0f, 0.0f, 0.0f, 0.0f,
            -0.5f, 0.5f, 0.5f, -1.0f, 0.0f, 0.0f, 1.0f, 0.0f,

            0.5f, 0.5f, 0.5f, 1.0f, 0.0f, 0.0f, 1.0f, 0.0f,
            0.5f, 0.5f, -0.5f, 1.0f, 0.0f, 0.0f, 1.0f, 1.0f,
            0.5f, -0.5f, -0.5f, 1.0f, 0.0f, 0.0f, 0.0f, 1.0f,
            0.5f, -0.5f, -0.5f, 1.0f, 0.0f, 0.0f, 0.0f, 1.0f,
            0.5f, -0.5f, 0.5f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f,
            0.5f, 0.5f, 0.5f, 1.0f, 0.0f, 0.0f, 1.0f, 0.0f,

            -0.5f, -0.5f, -0.5f, 0.0f, -1.0f, 0.0f, 0.0f, 1.0f,
            0.5f, -0.5f, -0.5f, 0.0f, -1.0f, 0.0f, 1.0f, 1.0f,
            0.5f, -0.5f, 0.5f, 0.0f, -1.0f, 0.0f, 1.0f, 0.0f,
            0.5f, -0.5f, 0.5f, 0.0f, -1.0f, 0.0f, 1.0f, 0.0f,
            -0.5f, -0.5f, 0.5f, 0.0f, -1.0f, 0.0f, 0.0f, 0.0f,
            -0.5f, -0.5f, -0.5f, 0.0f, -1.0f, 0.0f, 0.0f, 1.0f,

            -0.5f, 0.5f, -0.5f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f,
            0.5f, 0.5f, -0.5f, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f,
            0.5f, 0.5f, 0.5f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0f,
            0.5f, 0.5f, 0.5f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0f,
            -0.5f, 0.5f, 0.5f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f,
            -0.5f, 0.5f, -0.5f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f
        });
    m_VAOp = std::unique_ptr<VertexArray>(new VertexArray);
    m_VBOp = std::unique_ptr<VertexBuffer>(new VertexBuffer(m_Verticesp.get(), sizeof(float) * 8 * 36));
    m_Layoutp = std::unique_ptr<VertexBufferLayout>(new VertexBufferLayout);
    m_Layoutp->Push<float>(3);
    m_Layoutp->Push<float>(3);
    m_Layoutp->Push<float>(2);
    m_VAOp->AddBuffer(*m_VBOp, *m_Layoutp);
    m_VBOp->Unbind();
    m_Scale = glm::vec3(0.2f);
    m_LightShaderP = std::unique_ptr<Shader>(std::move(itemShader));


    m_Names = std::unique_ptr<SpotLightNames>(new SpotLightNames);
    m_Names->position = "pointLights[" + std::to_string(count - 1) + "].position";
    m_Names->ambient = "pointLights[" + std::to_string(count - 1) + "].ambient";
    m_Names->diffuse = "pointLights[" + std::to_string(count - 1) + "].diffuse";
    m_Names->specular = "pointLights[" + std::to_string(count - 1) + "].specular";
    m_Names->constant = "pointLights[" + std::to_string(count - 1) + "].constant";
    m_Names->linear = "pointLights[" + std::to_string(count - 1) + "].linear";
    m_Names->quadratic = "pointLights[" + std::to_string(count - 1) + "].quadratic";
    Update();

}

SpotLight::~SpotLight()
{
    count--;
}

unsigned int SpotLight::GetCount()
{
    return count;
}

void SpotLight::Draw(Shader& lightSpotShader)
{
    Update();
    lightSpotShader.use();
    lightSpotShader.setMat4fv("model", m_Model);
    m_VAOp->Bind();
    GLCall(glDrawArrays(GL_TRIANGLES, 0, 36));
    m_VAOp->Unbind();
}

void SpotLight::Update()
{
    m_Model = glm::mat4(1.0f);
    m_Model = glm::translate(m_Model, m_Location);
    m_Model = glm::scale(m_Model, m_Scale);
    m_Model = glm::rotate(m_Model, glm::radians(m_Angle.x), glm::vec3(1.0f, 0.0f, 0.0f));
    m_Model = glm::rotate(m_Model, glm::radians(m_Angle.y), glm::vec3(0.0f, 1.0f, 0.0f));
    m_Model = glm::rotate(m_Model, glm::radians(m_Angle.z), glm::vec3(0.0f, 0.0f, 1.0f));
    
    m_LightShaderP->use();
    m_LightShaderP->setInt("PointLightCount", count);
    m_LightShaderP->setFloat3((*m_Names).position, m_Location);
    m_LightShaderP->setFloat3((*m_Names).ambient, m_Ambient);
    m_LightShaderP->setFloat3((*m_Names).diffuse, m_Diffuse);
    m_LightShaderP->setFloat3((*m_Names).specular, m_Specular);
    m_LightShaderP->setFloat((*m_Names).constant, m_Constant);
    m_LightShaderP->setFloat((*m_Names).linear, m_Linear);
    m_LightShaderP->setFloat((*m_Names).quadratic, m_Quadratic);
}
