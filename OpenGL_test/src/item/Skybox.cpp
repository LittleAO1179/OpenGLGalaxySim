#include "Skybox.h"


SkyBox::SkyBox(Shader* skyBoxShader, std::vector<std::string> paths)
{
	m_ShaderP = skyBoxShader;
	m_PathsP = std::unique_ptr<std::vector<std::string>>(new std::vector<std::string>);
	if (paths[0] == "default")
	{
		m_PathsP->push_back("res/texture/skybox/right.png");
		m_PathsP->push_back("res/texture/skybox/left.png");
		m_PathsP->push_back("res/texture/skybox/top.png");
		m_PathsP->push_back("res/texture/skybox/bottom.png");
		m_PathsP->push_back("res/texture/skybox/back.png");
		m_PathsP->push_back("res/texture/skybox/front.png");
	}
	else if (paths.size() == 6)
	{
		m_PathsP->assign(paths.begin(), paths.end());
	}
	else
	{
		std::cout << "贴图数不够，需要6张。" << std::endl;
		ASSERT(false);
	}
	glGenTextures(1, &m_TextureID);
	glBindTexture(GL_TEXTURE_CUBE_MAP, m_TextureID);
	int width, height, nrChannels;
	for (unsigned int i = 0; i < m_PathsP->size(); i++) {
		unsigned char* data = stbi_load((*m_PathsP)[i].c_str(), &width, &height, &nrChannels, 0);
		if (data) {
			glTexImage2D(GL_TEXTURE_CUBE_MAP_POSITIVE_X + i, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
			stbi_image_free(data);
		}
		else {
			std::cout << "Cubemap texture failed to load at path:" << (*m_PathsP)[i] << std::endl;
			stbi_image_free(data);
		}
	}
	glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_MIN_FILTER, GL_LINEAR);;
	glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_MAG_FILTER, GL_LINEAR);;
	glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);;
	glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);;
	glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_WRAP_R, GL_CLAMP_TO_EDGE);;
}

void SkyBox::Draw(Camera* mainCamera)
{
	m_ShaderP->use();
	m_ShaderP->setMat4fv("view", glm::mat4(glm::mat3(mainCamera->GetView())));
	m_ShaderP->setMat4fv("projection", mainCamera->GetProjection());
	GLCall(glDepthFunc(GL_LEQUAL));
	Update();
	m_ShaderP->setMat4fv("model", m_Model);
	m_VAOp->Bind();
	GLCall(glActiveTexture(GL_TEXTURE0));
	GLCall(glBindTexture(GL_TEXTURE_CUBE_MAP, m_TextureID));
	glDrawArrays(GL_TRIANGLES, 0, 36);
	m_VAOp->Unbind();
	GLCall(glDepthFunc(GL_LESS));
}
