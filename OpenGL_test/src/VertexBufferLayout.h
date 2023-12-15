#pragma once

#include <vector>
#include <glad/glad.h>

#include "Renderer.h"

/// <summary>
/// 顶点缓冲区元素，该结构体用于辅助VertexBufferLayout类，其定义在该类中。
/// </summary>
struct VertexBufferElement
{
	unsigned int type;
	unsigned int count;
	unsigned char normalized;

	/// <summary>
	/// 静态函数，读取相应的类型，返回大小。
	/// </summary>
	/// <param name="type"> 相应的类型。 </param>
	/// <returns> 相应类型的大小。 </returns>
	static unsigned int GetsizeOfType(unsigned int type)
	{
		switch (type)
		{
		case GL_FLOAT:			return 4;
		case GL_UNSIGNED_INT:	return 4;
		case GL_UNSIGNED_BYTE:	return 1;
		}
		ASSERT(false);
		return 0;
	}

};

/// <summary>
/// 顶点的布局，生成后使用Push&lt;&gt;方法对该类进行定义。
/// </summary>
class VertexBufferLayout
{
public:
	VertexBufferLayout() :m_Stride(0){}
	~VertexBufferLayout() {}

	/// <summary>
	/// 请使用Push&lt;&gt;方法。向该类的数组中添加元素组，元素的内容分别是：类型、单个顶点变量数目、GL_TRUE或GL_FALSE。
	/// </summary>
	/// <typeparam name="T"></typeparam>
	/// <param name="count"> 顶点属性 </param>
	template<typename T>
	void Push(unsigned int count)
	{
		// static_assert(false);
	}

	template<>
	void Push<float>(unsigned int count)
	{
		m_Element.push_back({ GL_FLOAT, count, GL_FALSE });
		m_Stride += count * VertexBufferElement::GetsizeOfType(GL_FLOAT);
	}

	template<>
	void Push<unsigned int>(unsigned int count)
	{
		m_Element.push_back({ GL_UNSIGNED_INT, count, GL_FALSE });
		m_Stride += count * VertexBufferElement::GetsizeOfType(GL_UNSIGNED_INT);
	}

	template<>
	void Push<unsigned char>(unsigned int count)
	{
		m_Element.push_back({ GL_UNSIGNED_BYTE, count, GL_TRUE });
		m_Stride += count * VertexBufferElement::GetsizeOfType(GL_UNSIGNED_BYTE);
	}

	inline unsigned int GetStride() const { return m_Stride;  }
	inline std::vector<VertexBufferElement> GetElements() const { return m_Element; }


private:
	unsigned int m_Stride;
	std::vector<VertexBufferElement> m_Element;

};