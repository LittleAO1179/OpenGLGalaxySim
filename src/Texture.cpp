#include "Texture.h"

Texture::Texture(const char* path, GLint type)
{
	unsigned char* data;
	stbi_set_flip_vertically_on_load(true);
	data = stbi_load(path, &m_Width, &m_Height, &m_NrChannels, 0);
	if (!data)
	{
		std::cout << "Failed to load texture!" << std::endl;
		ASSERT(false);
	}
	GLCall(glGenTextures(1, &m_ID));
	GLCall(glBindTexture(GL_TEXTURE_2D, m_ID));
	GLCall(glTexImage2D(GL_TEXTURE_2D, 0, type, m_Width, m_Height, 0, type, GL_UNSIGNED_BYTE, data));
	GLCall(glGenerateMipmap(GL_TEXTURE_2D));
	stbi_image_free(data);
	stbi_set_flip_vertically_on_load(false);
}

Texture::~Texture()
{
	GLCall(glDeleteTextures(1, &m_ID));
}

void Texture::Bind() const
{
	GLCall(glBindTexture(GL_TEXTURE_2D, m_ID));
}

void Texture::Unbind() const
{
	GLCall(glBindTexture(GL_TEXTURE_2D, 0))
}


