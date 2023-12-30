#pragma once

#include "../Texture.h"
#include "Cube.h"
#include "Renderer.h"
#include "camera/Camera.h"

class SkyBox : public Cube
{
private:
	
	Shader* m_ShaderP;
	unsigned int m_TextureID;

public:
	/// <summary>
	/// ��ʼ����պ�
	/// </summary>
	/// <param name="paths"> �������º�ǰ��paths </param>
	SkyBox(Shader* skyBoxShader, std::vector<std::string> paths = { "default" });
	~SkyBox()
	{
		m_ShaderP = nullptr;
	}

	// ��պ�ֻ����һ�������ܿ���
	SkyBox(const SkyBox&) = delete;
	void operator=(const SkyBox&) = delete;

	void Draw(Shader& shader) = delete;
	void Draw(Camera* mainCamera);
};