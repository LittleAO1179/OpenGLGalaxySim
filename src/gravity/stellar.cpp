#include "stellar.h"

std::vector<Stellar*> Stellar::stellars = std::vector<Stellar*>();

Stellar::Stellar(float mass, Shader* earthShader):Planet(glm::vec3(0.0f,0.0f,0.0f), mass, 0.01f), m_ItemShader(earthShader)
{
	stellars.push_back(this);
	m_Scale = glm::vec3(2.0f);
    m_Ambient = glm::vec3(0.1f);
    m_Diffuse = glm::vec3(0.9f);
    m_Specular = glm::vec3(1.0f);
    m_Constant = 1.0f;
    m_Linear = 0.09f;
    m_Quadratic = 0.032f;

    m_Names = std::unique_ptr<SpotLightNames>(new SpotLightNames);
    int count = stellars.size();
    m_Names->position = "pointLights[" + std::to_string(count - 1) + "].position";
    m_Names->ambient = "pointLights[" + std::to_string(count - 1) + "].ambient";
    m_Names->diffuse = "pointLights[" + std::to_string(count - 1) + "].diffuse";
    m_Names->specular = "pointLights[" + std::to_string(count - 1) + "].specular";
    m_Names->constant = "pointLights[" + std::to_string(count - 1) + "].constant";
    m_Names->linear = "pointLights[" + std::to_string(count - 1) + "].linear";
    m_Names->quadratic = "pointLights[" + std::to_string(count - 1) + "].quadratic";
    Update();
}

void Stellar::Draw(Shader& stellarShader)
{
	Update();
    stellarShader.use();
	stellarShader.setMat4fv("model", m_Model);
	m_VAOp->Bind();
	m_EBOp->Bind();
	GLCall(glDrawElements(GL_TRIANGLES, m_EBOp->GetCount(), GL_UNSIGNED_INT, 0));
	m_EBOp->Unbind();
	m_VAOp->Unbind();
}

void Stellar::Update()
{
    m_Model = glm::mat4(1.0f);
    m_Model = glm::translate(m_Model, m_Location);
    m_Model = glm::scale(m_Model, m_Scale);
    m_Model = glm::rotate(m_Model, glm::radians(m_Angle.x), glm::vec3(1.0f, 0.0f, 0.0f));
    m_Model = glm::rotate(m_Model, glm::radians(m_Angle.y), glm::vec3(0.0f, 1.0f, 0.0f));
    m_Model = glm::rotate(m_Model, glm::radians(m_Angle.z), glm::vec3(0.0f, 0.0f, 1.0f));

    int count = stellars.size();
    m_ItemShader->use();
    m_ItemShader->setInt("PointLightCount", count);
    m_ItemShader->setFloat3((*m_Names).position, m_Location);
    m_ItemShader->setFloat3((*m_Names).ambient, m_Ambient);
    m_ItemShader->setFloat3((*m_Names).diffuse, m_Diffuse);
    m_ItemShader->setFloat3((*m_Names).specular, m_Specular);
    m_ItemShader->setFloat((*m_Names).constant, m_Constant);
    m_ItemShader->setFloat((*m_Names).linear, m_Linear);
    m_ItemShader->setFloat((*m_Names).quadratic, m_Quadratic);
}
