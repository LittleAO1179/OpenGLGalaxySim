#pragma once
/// <summary>
/// ���㻺�����࣬��ʼ����Ҫ��������������������Ϣ�����飬�Լ�����Ĵ�С��
/// </summary>
class VertexBuffer
{
public:
	VertexBuffer() = default;
	/// <summary>
	/// ���㻺�����๹�캯����
	/// </summary>
	/// <param name="data">������Ϣ������</param>
	/// <param name="size">����Ĵ�С</param>
	VertexBuffer(const void* data, unsigned int size);
	~VertexBuffer();

	/// <summary>
	/// ���ö��㻺�������а󶨡�
	/// </summary>
	void Bind() const;
	/// <summary>
	/// ���Ķ��㻺������
	/// </summary>
	void Unbind() const;
private:
	unsigned int m_id;
};