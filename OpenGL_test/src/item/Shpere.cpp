#include "Shpere.h"

void Sphere::init(int prec)
{
	unsigned int numVertices = (prec + 1) * (prec + 1);
	unsigned int numIndices = prec * prec * 6;

	for (int i = 0; i < numVertices; i++) { m_Vertex.push_back(glm::vec3()); } // std::vector::push_back()
	for (int i = 0; i < numVertices; i++) { m_TexCoords.push_back(glm::vec2()); } // inserts new element at
	for (int i = 0; i < numVertices; i++) { m_Normals.push_back(glm::vec3()); } // the end of a vector and
	// calculate triangle vertices
	for (int i = 0; i <= prec; i++) {
		for (int j = 0; j <= prec; j++) {
			float y = (float)cos(glm::radians(180.0f - i * 180.0f / prec));
			float x = -(float)cos(glm::radians(j * 360.0f / prec)) * (float)abs(cos(asin(y)));
			float z = (float)sin(glm::radians(j * 360.0f / prec)) * (float)abs(cos(asin(y)));
			m_Vertex[i * (prec + 1) + j] = glm::vec3(x, y, z);
			m_TexCoords[i * (prec + 1) + j] = glm::vec2(((float)j / prec), ((float)i / prec));
			m_Normals[i * (prec + 1) + j] = glm::vec3(x, y, z);
		}
	}
	// calculate triangle indices
	for (int i = 0; i < prec; i++) {
		for (int j = 0; j < prec; j++) {
			m_Index.push_back(i * (prec + 1) + j);
			m_Index.push_back((i + 1) * (prec + 1) + j);
			m_Index.push_back((i + 1) * (prec + 1) + j + 1);
			m_Index.push_back(i * (prec + 1) + j);
			m_Index.push_back((i + 1) * (prec + 1) + j + 1);
			m_Index.push_back(i * (prec + 1) + j + 1);
		}
	}
}

Sphere::Sphere(int prec)
{
	m_Prec = prec;
	init(prec);
	for (int i = 0; i < m_Vertex.size(); i++)
	{
		m_Vertices.push_back(m_Vertex[i].x);
		m_Vertices.push_back(m_Vertex[i].y);
		m_Vertices.push_back(m_Vertex[i].z);
		m_Vertices.push_back(m_Normals[i].x);
		m_Vertices.push_back(m_Normals[i].y);
		m_Vertices.push_back(m_Normals[i].z);
		m_Vertices.push_back(m_TexCoords[i].x);
		m_Vertices.push_back(m_TexCoords[i].y);
	}
	m_VAOp = std::unique_ptr<VertexArray>(new VertexArray);
	m_VBOp = std::unique_ptr<VertexBuffer>(new VertexBuffer(&m_Vertices[0], sizeof(float) * 8 * m_Vertex.size()));
	m_Layoutp = std::unique_ptr<VertexBufferLayout>(new VertexBufferLayout);
	m_Layoutp->Push<float>(3);
	m_Layoutp->Push<float>(3);
	m_Layoutp->Push<float>(2);
	m_EBOp = std::unique_ptr<IndexBuffer>(new IndexBuffer(&m_Index[0], m_Index.size()));
	m_VAOp->AddBuffer(*m_VBOp, *m_Layoutp);

	Update();
}

Sphere::~Sphere()
{
}

void Sphere::Draw(Shader& shader)
{
	Update();
	shader.setMat4fv("model", m_Model);
	m_VAOp->Bind();
	m_EBOp->Bind();
	GLCall(glDrawElements(GL_TRIANGLES, m_EBOp->GetCount(), GL_UNSIGNED_INT, 0));
	m_EBOp->Unbind();
	m_VAOp->Unbind();
}

void Sphere::Update()
{

	m_Model = glm::mat4(1.0f);
	m_Model = glm::translate(m_Model, m_Location);
	m_Model = glm::scale(m_Model, m_Scale);
	m_Model = glm::rotate(m_Model, glm::radians(m_Angle.x), glm::vec3(1.0f, 0.0f, 0.0f));
	m_Model = glm::rotate(m_Model, glm::radians(m_Angle.y), glm::vec3(0.0f, 1.0f, 0.0f));
	m_Model = glm::rotate(m_Model, glm::radians(m_Angle.z), glm::vec3(0.0f, 0.0f, 1.0f));
}
