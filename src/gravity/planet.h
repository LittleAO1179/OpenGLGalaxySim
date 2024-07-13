#pragma once

#include <vector>


#include "item/Shpere.h"
#include "Renderer.h"

typedef double massType;

class Planet : public Sphere
{
private:
	massType m_Mass;
	glm::vec3 m_Speed;
	glm::vec3 m_Acceleration;
	int m_ID;
	float m_RotationFactor;



public:
	static std::vector<Planet*> planets;
	static bool m_isPaused;
	static bool m_isPKeyPressed;

	static void Runing(float deltaTime, float realTime, GLFWwindow* window);
	/// <summary>
	/// 初始化星球
	/// </summary>
	/// <param name="speed">初速度</param>
	/// <param name="mass">质量，数量级x10^11</param>
	Planet(glm::vec3 speed, massType mass, float rotationFactor = 1.0f);
	~Planet();

	massType GetMass() const;
	int GetID() const;
	glm::vec3 GetAcceleration() const;
	glm::vec3 GetSpeed() const;
	float getRotateFactor() const;
	void SetSpeed(glm::vec3 speed);

	void UpdateAcceleration();
	void Debug(std::string name) override;
};