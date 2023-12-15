#include "Screen.h"

Screen::Screen(int width, int height)
{
	m_Height = height;
	m_Width = width;
}

void Screen::SetScreen(int width, int height)
{
	m_Width = width;
	m_Height = height;
}

float Screen::Aspect_ratio() const
{
	return float(m_Width)/float(m_Height);
}

int Screen::GetWidth() const
{
	return m_Width;
}

int Screen::GetHeight() const
{
	return m_Height;
}
