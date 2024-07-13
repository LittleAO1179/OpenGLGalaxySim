#pragma once

#include "VertexBuffer.h"
#include "VertexBufferLayout.h"

/// <summary>
/// ���������࣬���ڶ��建����֮������࣬��ʹ��AddBuffer��Ա��������VertexBuffer���VertexBufferLayout�ࡣ
/// </summary>
class VertexArray
{
private:
	unsigned int m_ID;

public:
	VertexArray();
	~VertexArray();

	void Bind() const;
	void Unbind() const;
	void AddBuffer(const VertexBuffer& vb, const VertexBufferLayout& layout) const;
};