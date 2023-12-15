#pragma once

/// <summary>
/// ���������࣬���ڴ洢���������������
/// </summary>
class IndexBuffer
{
public:
	/// <summary>
	/// ���������࣬���ڴ洢���������������
	/// </summary>
	/// <param name="data"> ����������Ϣ�����顣 </param>
	/// <param name="count"> ������Ԫ�صĸ����� </param>
	IndexBuffer(const unsigned int* data, unsigned int count);
	~IndexBuffer();

	/// <summary>
	/// ���������塣
	/// </summary>
	void Bind() const;

	/// <summary>
	/// ����������塣
	/// </summary>
	void Unbind() const;

	inline unsigned int GetCount() const { return m_Count; }

private:
	unsigned int m_ID;
	unsigned int m_Count;

};