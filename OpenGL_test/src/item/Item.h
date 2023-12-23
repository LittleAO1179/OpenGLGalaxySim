#pragma once

#include "Renderer.h"
#include "string"
#include "VertexBuffer.h"
#include "VertexBufferLayout.h"

struct DebugItems
{
	float angle[3] = { 0.0f, 0.0f, 0.0f };
	float scale[3] = { 1.0f, 1.0f, 1.0f };
};

class Item
{
protected:
	glm::vec3 m_Location;
	glm::vec3 m_Angle;
	glm::vec3 m_Scale;
	bool m_isEnabled;
	DebugItems m_Debug;

public:
	friend void Scale(Item &item, glm::vec3 size);
	friend void Scale(Item& item, float size[3]);

	Item() :m_Location(glm::vec3(0.0f, 0.0f, 0.0f)), m_Angle(glm::vec3(1.0f, 1.0f, 1.0f)), m_Scale(glm::vec3(1.0f, 1.0f, 1.0f)), m_isEnabled(true) {}
	~Item() {}

	void SetEnable(bool flag);
	void SetLocation(glm::vec3 location);
	void SetAngle(glm::vec3 angle);
	void SetAngle(float angles[3]);
	void Rotate(glm::vec3 angle);
	glm::vec3 GetPos() const;

	virtual void Update();
	virtual void Debug(std::string name);
};