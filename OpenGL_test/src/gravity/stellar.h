#pragma once

#include "gravity/planet.h"

class Stellar : public Planet
{
private:
	Shader* m_ItemShader;
	glm::vec3 m_Ambient;
	glm::vec3 m_Diffuse;
	glm::vec3 m_Specular;
	float m_Constant;
	float m_Linear;
	float m_Quadratic;

	std::unique_ptr<SpotLightNames> m_Names;

public:
	static std::vector<Stellar*> stellars;
	Stellar() = default;
	Stellar(float mass, Shader* earthShader);
	~Stellar() {}

	void Draw(Shader& stellarShader) override;
	void Update() override;
};