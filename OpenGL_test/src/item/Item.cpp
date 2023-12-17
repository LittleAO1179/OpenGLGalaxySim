#include "Item.h"

#include <iostream>

void Scale(Item &item, glm::vec3 size)
{
	item.m_Scale = size;
}

void Scale(Item& item, float size[3])
{
	item.m_Scale.x = size[0];
	item.m_Scale.y = size[1];
	item.m_Scale.z = size[2];
}

void Item::SetEnable(bool flag)
{
	if (flag)
		Scale(*this, glm::vec3(0.0f));
	else
		Scale(*this, glm::vec3(1.0f));
	Update();
}

void Item::SetLocation(glm::vec3 location)
{
	m_Location = location;
}

void Item::SetAngle(glm::vec3 angle)
{
	m_Angle = angle;
}

void Item::SetAngle(float angles[3])
{
	m_Angle.x = angles[0];
	m_Angle.y = angles[1];
	m_Angle.z = angles[2];
}

void Item::Update()
{
	std::cout << "请检查，该物体没有实体可以显示。" << std::endl;
	ASSERT(false);
}

