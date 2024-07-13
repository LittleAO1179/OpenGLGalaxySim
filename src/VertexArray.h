#pragma once

#include "VertexBuffer.h"
#include "VertexBufferLayout.h"

/// <summary>
/// 顶点数组类，请在定义缓冲区之后定义该类，并使用AddBuffer成员函数来绑定VertexBuffer类和VertexBufferLayout类。
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