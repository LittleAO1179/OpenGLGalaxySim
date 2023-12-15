#pragma once
/// <summary>
/// 顶点缓冲区类，初始化需要两个变量，包含顶点信息的数组，以及数组的大小。
/// </summary>
class VertexBuffer
{
public:
	VertexBuffer() = default;
	/// <summary>
	/// 顶点缓冲区类构造函数。
	/// </summary>
	/// <param name="data">顶点信息的数组</param>
	/// <param name="size">数组的大小</param>
	VertexBuffer(const void* data, unsigned int size);
	~VertexBuffer();

	/// <summary>
	/// 将该顶点缓冲区进行绑定。
	/// </summary>
	void Bind() const;
	/// <summary>
	/// 解绑改顶点缓冲区。
	/// </summary>
	void Unbind() const;
private:
	unsigned int m_id;
};