#include "Item.h"

#include <iostream>
#include "caculate/GLMSwitch.h"
#include "caculate/AngleCaculate.h"

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
	m_Angle = GLMSwitch::float3ToVec3(angles);
	AngleCal::ResetAngle(m_Angle);
}

void Item::Rotate(glm::vec3 angle)
{
	m_Angle += angle;
	AngleCal::ResetAngle(m_Angle);
}

glm::vec3 Item::GetPos() const
{
	return m_Location;
}

void Item::Update()
{
	std::cout << "请检查，该物体没有实体可以显示。" << std::endl;
	ASSERT(false);
}

void Item::Debug(std::string name)
{
	float location[3] = {m_Location.x, m_Location.y, m_Location.z};
	float angle[3] = { m_Angle.x, m_Angle.y, m_Angle.z };
	float scale[3] = { m_Scale.x, m_Scale.y, m_Scale.z };
	ImGui::SliderFloat3((name + " location").c_str(),location, 0, 20.0f);
	ImGui::SliderFloat3((name + " rotate").c_str(), angle, 0, 360.0f);
	ImGui::SliderFloat3((name + " scale").c_str(), scale, 0, 2.0f);
}

