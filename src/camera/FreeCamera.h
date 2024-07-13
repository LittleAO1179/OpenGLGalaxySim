#pragma once

#include "Camera.h"
#include "../shader.h"

class FreeCamera : public Camera
{
private:
	float m_MouseLastX, m_MouseLastY;
	float m_Yaw;
	float m_Pitch;
	bool m_isMouseActived;
	bool m_isVKeyPressed;
	bool m_isFirstMouse;

public:

	FreeCamera() = default;
	FreeCamera(float fov, Screen* screen, float near, float far);
	~FreeCamera();

	void InputKey(GLFWwindow* window, float cameraSpeed);
	void InputMouse(GLFWwindow* window, float& UpdatedX, float& UpdatedY);
	void UpdateMouse(float &UpdatedX, float &UpdatedY);
	void update(Shader& shader);
	void update() override;
};
