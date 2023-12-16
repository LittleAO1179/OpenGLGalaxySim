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

Sphere::Sphere(VertexArray& VAO, int prec)
{
	m_Prec = prec;
	init(prec);
	std::allocator<float> floatAlloc;
	m_Vertices = floatAlloc.allocate(8 * m_Vertex.size());
	auto q = m_Vertices;
	for (int i = 0; i < m_Vertex.size(); i++)
	{
		floatAlloc.construct(q++, m_Vertex[i].x);
		floatAlloc.construct(q++, m_Vertex[i].y);
		floatAlloc.construct(q++, m_Vertex[i].z);
		floatAlloc.construct(q++, m_Normals[i].x);
		floatAlloc.construct(q++, m_Normals[i].y);
		floatAlloc.construct(q++, m_Normals[i].z);
		floatAlloc.construct(q++, m_TexCoords[i].x);
		floatAlloc.construct(q++, m_TexCoords[i].y);
	}
	m_VBOp = std::unique_ptr<VertexBuffer>(new VertexBuffer(m_Vertices, sizeof(float) * 8 * m_Vertex.size()));
	m_Layout.Push<float>(3);
	m_Layout.Push<float>(3);
	m_Layout.Push<float>(2);
	VAO.AddBuffer(*m_VBOp, m_Layout);
	m_EBO = IndexBuffer(&m_Index[0], m_Vertex.size());
	Update();
}

Sphere::~Sphere()
{
}

void Sphere::Draw(VertexArray& VAO, Shader& shader)
{
	Update();
	shader.setMat4fv("model", m_Model);
	VAO.Bind();
	m_EBO.Bind();
	GLCall(glDepthFunc(GL_LEQUAL));
	GLCall(glFrontFace(GL_CCW));// 锥体的三角形是逆时针的面认为是正方向
	GLCall(glDrawArrays(GL_TRIANGLES, 0, m_Index.size()));
	m_EBO.Unbind();
	VAO.Unbind();
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
