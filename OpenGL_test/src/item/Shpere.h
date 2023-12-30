#pragma once

#include "Item.h"
#include "IndexBuffer.h"
#include "VertexArray.h"
#include <memory>
#include "../shader.h"

#include <vector>

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

class Sphere : public Item
{
protected:
	std::vector<float> m_Vertices; 
	std::vector<glm::vec3> m_Vertex;
	std::vector<glm::vec2> m_TexCoords;
	std::vector<glm::vec3> m_Normals;
	std::vector<unsigned int> m_Index;
	unsigned int m_Size;

	unsigned int m_Prec;

	glm::mat4 m_Model;
	
	std::unique_ptr<VertexBuffer> m_VBOp;
	std::unique_ptr<VertexArray> m_VAOp;
	std::unique_ptr<IndexBuffer> m_EBOp;
	std::unique_ptr<VertexBufferLayout> m_Layoutp;

	void init(int prec);

public:
	Sphere(int prec = 48);
	~Sphere();

	virtual void Draw(Shader& shader);
	void Update() override;
};