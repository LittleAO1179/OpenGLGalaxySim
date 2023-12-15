#pragma once

/// <summary>
/// 索引缓冲类，用于存储各个顶点的索引。
/// </summary>
class IndexBuffer
{
public:
	/// <summary>
	/// 索引缓冲类，用于存储各个顶点的索引。
	/// </summary>
	/// <param name="data"> 包含索引信息的数组。 </param>
	/// <param name="count"> 数组中元素的个数。 </param>
	IndexBuffer(const unsigned int* data, unsigned int count);
	~IndexBuffer();

	/// <summary>
	/// 绑定索引缓冲。
	/// </summary>
	void Bind() const;

	/// <summary>
	/// 解绑索引缓冲。
	/// </summary>
	void Unbind() const;

	inline unsigned int GetCount() const { return m_Count; }

private:
	unsigned int m_ID;
	unsigned int m_Count;

};