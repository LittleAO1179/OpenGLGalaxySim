#pragma once

#include "stb_image.h"
#include "Renderer.h"
#include "iostream"

class Texture
{
public:
	Texture():m_Width(0), m_Height(0), m_NrChannels(0), m_ID(0){}
	Texture(const char* path, GLint type);
	~Texture();

	void Bind() const;
	void Unbind() const;

private:
	int m_Width, m_Height, m_NrChannels;
	unsigned int m_ID;
};