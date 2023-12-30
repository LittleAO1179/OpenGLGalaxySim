#pragma once
#include "../Renderer.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include "../VertexArray.h"
#include "../VertexBuffer.h"
#include "../VertexBufferLayout.h"
#include "../Texture.h"
#include "../shader.h"
#include "Item.h"

class Cube : public Item
{
protected:
	glm::mat4 m_Model;

    std::vector<float> m_Vertices;
    std::unique_ptr<VertexArray> m_VAOp;
    std::unique_ptr<VertexBuffer> m_VBOp;
    std::unique_ptr<VertexBufferLayout> m_Layoutp;

public:
	/// <summary>
	/// Ĭ��λ�ã�0��0��0������С��1��1��1��
	/// </summary>
	Cube();
	~Cube();

    glm::mat4 GetModel() const;
    void Draw(Shader& shader);

    /// <summary>
    /// ����λ�ýǶ�������Ϣ����Model��
    /// </summary>
    void Update() override;
};