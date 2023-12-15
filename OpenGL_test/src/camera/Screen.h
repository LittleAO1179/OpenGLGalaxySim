#pragma once

class Screen
{
public:
	Screen():m_Width(800),m_Height(600) {}
	Screen(int width, int height);
	~Screen() {}

	void SetScreen(int width, int height);
	float Aspect_ratio() const;
	int GetWidth() const;
	int GetHeight() const;

private:
	int m_Width, m_Height;
};
