#pragma once

#include "Renderer.h"
#include "VertexBuffer.h"
#include "VertexBufferLayout.h"

class Item
{
protected:
	glm::vec3 m_Location;
	glm::vec3 m_Angle;
	glm::vec3 m_Scale;
	bool m_isEnabled;

public:
	friend void Scale(Item &item, glm::vec3 size);

	Item() :m_Location(glm::vec3(0.0f, 0.0f, 0.0f)), m_Angle(glm::vec3(1.0f, 1.0f, 1.0f)), m_Scale(glm::vec3(1.0f, 1.0f, 1.0f)), m_isEnabled(true) {}
	~Item() {}

	void SetEnable(bool flag);
	void SetLocation(glm::vec3 location);
	void SetAngle(glm::vec3 angle);

	virtual void Update();
};