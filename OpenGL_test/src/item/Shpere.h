#pragma once

#include "Item.h"
#include "IndexBuffer.h"
#include "VertexArray.h"
#include <memory>
#include "../shader.h"

#include <vector>

class Sphere : public Item
{
private:
	float* m_Vertices;
	std::vector<glm::vec3> m_Vertex;
	std::vector<glm::vec2> m_TexCoords;
	std::vector<glm::vec3> m_Normals;
	std::vector<unsigned int> m_Index;
	unsigned int m_Size;

	unsigned int m_Prec;

	glm::mat4 m_Model;
	
	VertexBufferLayout m_Layout;
	IndexBuffer m_EBO;
	std::unique_ptr<VertexBuffer> m_VBOp;

	void init(int prec);

public:
	Sphere(VertexArray& VAO, int prec = 48);
	~Sphere();

	void Draw(VertexArray& VAO, Shader& shader);
	void Update() override;
};