#pragma once

#include "Renderer.h"
#include "Item.h"
#include "../VertexArray.h"
#include "../VertexBuffer.h"
#include "../VertexBufferLayout.h"
#include "Texture.h"
#include "shader.h"
#include <memory>
#include <string>

struct SpotLightNames
{
    std::string name;
    std::string position;
    std::string ambient;
    std::string diffuse;
    std::string specular;
    std::string constant;
    std::string linear;
    std::string quadratic;
};


class SpotLight : public Item
{
private:
    glm::mat4 m_Model;
    glm::vec3 m_Ambient;
    glm::vec3 m_Diffuse;
    glm::vec3 m_Specular;
    float m_Constant;
    float m_Linear;
    float m_Quadratic;

    std::unique_ptr<float> m_Verticesp;
    std::unique_ptr<VertexBuffer> m_VBOp;
    std::unique_ptr<VertexArray> m_VAOp;
    std::unique_ptr<VertexBufferLayout> m_Layoutp;
    Shader* m_LightShaderP;
    std::unique_ptr<SpotLightNames> m_Names;
    
    static int count;

public:
	SpotLight(Shader* lightShader);
    // SpotLight(const SpotLight&) { count++; }
	~SpotLight();

    static unsigned int GetCount();
    void Draw(Shader& lightSpotShader);
    void Update() override;
};

