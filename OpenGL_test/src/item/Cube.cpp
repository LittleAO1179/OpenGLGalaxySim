#include "Cube.h"


Cube::Cube(VertexArray& VAO)
{
    // m_Texture = Texture("res/texture/container.jpg", GL_RGB);
    m_Model = glm::mat4(1.0f);
    m_layout.Push<float>(3);
    m_layout.Push<float>(3);
    m_layout.Push<float>(2);
    VAO.AddBuffer(m_VBO, m_layout);
    m_VBO.Unbind();
    Update();
}

Cube::~Cube()
{
}

glm::mat4 Cube::GetModel() const
{
    return m_Model;
}

void Cube::Draw(VertexArray& VAO, Shader& shader)
{
    Update();
    shader.setMat4fv("model", m_Model);
    VAO.Bind();
    GLCall(glDrawArrays(GL_TRIANGLES, 0, 36));
    VAO.Unbind();
}

void Cube::Update()
{
    m_Model = glm::mat4(1.0f);
    m_Model = glm::translate(m_Model, m_Location);
    m_Model = glm::scale(m_Model, m_Scale);
    m_Model = glm::rotate(m_Model, glm::radians(m_Angle.x), glm::vec3(1.0f, 0.0f, 0.0f));
    m_Model = glm::rotate(m_Model, glm::radians(m_Angle.y), glm::vec3(0.0f, 1.0f, 0.0f));
    m_Model = glm::rotate(m_Model, glm::radians(m_Angle.z), glm::vec3(0.0f, 0.0f, 1.0f));
}


