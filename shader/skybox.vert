#version 330 core
layout (location = 0) in vec3 aPos;

// ����������3ά��
out vec3 TexCoords;
// ����modelת�����������
uniform mat4 projection;
uniform mat4 view;
void main()
{
    // �����������λ������/
    TexCoords = aPos;
    vec4 pos = projection * view * vec4(aPos, 1.0);
    // zΪw��͸�ӳ�������z=(z=w/w)=1�����Ϊ��Զ///
    gl_Position = pos.xyww;
}
