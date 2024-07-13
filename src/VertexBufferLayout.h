#pragma once

#include <vector>
#include <glad/glad.h>

#include "Renderer.h"

/// <summary>
/// ���㻺����Ԫ�أ��ýṹ�����ڸ���VertexBufferLayout�࣬�䶨���ڸ����С�
/// </summary>
struct VertexBufferElement
{
	unsigned int type;
	unsigned int count;
	unsigned char normalized;

	/// <summary>
	/// ��̬��������ȡ��Ӧ�����ͣ����ش�С��
	/// </summary>
	/// <param name="type"> ��Ӧ�����͡� </param>
	/// <returns> ��Ӧ���͵Ĵ�С�� </returns>
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
/// ����Ĳ��֣����ɺ�ʹ��Push&lt;&gt;�����Ը�����ж��塣
/// </summary>
class VertexBufferLayout
{
public:
	VertexBufferLayout() :m_Stride(0){}
	~VertexBufferLayout() {}

	/// <summary>
	/// ��ʹ��Push&lt;&gt;���������������������Ԫ���飬Ԫ�ص����ݷֱ��ǣ����͡��������������Ŀ��GL_TRUE��GL_FALSE��
	/// </summary>
	/// <typeparam name="T"></typeparam>
	/// <param name="count"> �������� </param>
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