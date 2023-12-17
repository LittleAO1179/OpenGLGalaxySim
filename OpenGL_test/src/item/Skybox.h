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
	/// 初始化天空盒
	/// </summary>
	/// <param name="paths"> 右左上下后前的paths </param>
	SkyBox(Shader* skyBoxShader, std::vector<std::string> paths = { "default" });
	~SkyBox()
	{
		m_ShaderP = nullptr;
	}

	// 天空盒只能有一个，不能拷贝
	SkyBox(const SkyBox&) = delete;
	void operator=(const SkyBox&) = delete;

	void Draw(Shader& shader) = delete;
	void Draw(Camera* mainCamera);
};