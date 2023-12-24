#include "planet.h"
#include "cmath"

std::vector<Planet*> Planet::planets = std::vector<Planet*>();
bool Planet::m_isPaused = false;
bool Planet::m_isPKeyPressed= false;

void Planet::Runing(float deltaTime, float realTime, GLFWwindow* window)
{
	bool isPKeyPressedNow = glfwGetKey(window, GLFW_KEY_P) == GLFW_PRESS;

	// 检查P键是否被按下，并且之前没有被按下
	if (isPKeyPressedNow && !m_isPKeyPressed)
		m_isPaused = !m_isPaused;

	m_isPKeyPressed = isPKeyPressedNow;
	if (!m_isPaused)
		for (const auto& i : planets)
		{
			i->SetAngle(glm::vec3(0.0f, (i->getRotateFactor()) * realTime, 0.0f));
			// 更新加速度
			i->UpdateAcceleration();
			// 更新速度
			glm::vec3 acc = i->GetAcceleration();
			glm::vec3 speed = i->GetSpeed();
			speed.x += acc.x * deltaTime;
			speed.y += acc.y * deltaTime;
			speed.z += acc.z * deltaTime;
			i->SetSpeed(speed);
			// 更新位置
			glm::vec3 los = i->GetPos();
			los.x += speed.x * deltaTime;
			los.y += speed.y * deltaTime;
			los.z += speed.z * deltaTime;
			i->SetLocation(los);
		}
	else
		ImGui::Text("Paused!");
}

Planet::Planet(glm::vec3 speed, massType mass, float rotationFactor) :m_Speed(speed),m_Mass(mass),Sphere(48)
{
	m_ID = planets.size();
	planets.push_back(this);
	m_Acceleration = glm::vec3(0.0f, 0.0f, 0.0f);
	m_RotationFactor = rotationFactor;
}

Planet::~Planet()
{
}

massType Planet::GetMass() const
{
	return m_Mass;
}

int Planet::GetID() const
{
	return m_ID;
}

glm::vec3 Planet::GetAcceleration() const
{
	return m_Acceleration;
}

glm::vec3 Planet::GetSpeed() const
{
	return m_Speed;
}

float Planet::getRotateFactor() const
{
	return m_RotationFactor;
}

void Planet::SetSpeed(glm::vec3 speed)
{
	m_Speed = speed;
}

void Planet::UpdateAcceleration()
{
	m_Acceleration = glm::vec3(0.0f, 0.0f, 0.0f);
	if (planets.size() < 2)	return;
	glm::vec3 distance;
	for (const auto& i : planets)
	{
		distance = i->GetPos() - GetPos();
		float tmp = (6.67 * i->GetMass());

		// 标准化再试试

		float dis = glm::length(distance);
		if (dis < 0.000005f) continue;
		glm::vec3 dir = glm::normalize(distance);
		float acc = tmp / (dis * dis);
		m_Acceleration += acc * dir;
	}
}

void Planet::Debug(std::string name)
{
	float location[3] = { m_Location.x, m_Location.y, m_Location.z };
	float angle[3] = { m_Angle.x, m_Angle.y, m_Angle.z };
	float scale[3] = { m_Scale.x, m_Scale.y, m_Scale.z };
	float acc[3] = { m_Acceleration.x, m_Acceleration.y, m_Acceleration.z };
	float speed[3] = { m_Speed.x, m_Speed.y, m_Speed.z };
	ImGui::SliderFloat3((name + " location").c_str(), location, 0, 20.0f);
	ImGui::SliderFloat3((name + " acc").c_str(), acc, 0, 2.0f);
	ImGui::SliderFloat3((name + " speed").c_str(), speed, 0, 2.0f);
}
