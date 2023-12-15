#pragma once

#ifndef CAMERA_H
#define CAMERA_H
#include "../Renderer.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include "Screen.h"

class Camera
{
protected:
	glm::mat4 m_View;
	glm::mat4 m_Projection;
	float m_Fov, m_Near, m_Far;
	Screen *m_Screen;
	glm::vec3 m_CameraPos, m_CameraFront, m_CameraUp;

public:
	Camera():m_View(glm::mat4(1.0f)), m_Projection(glm::mat4(1.0f)),
			 m_Fov(45.0f), m_Near(0.1f), m_Far(100.0f), m_Screen(nullptr),
			 m_CameraPos(glm::vec3(0.0f, 0.0f, 3.0f)),
		     m_CameraFront(glm::vec3(0.0f, 0.0f, -1.0f)),
			 m_CameraUp(glm::vec3(0.0f, 1.0f, 0.0f)) {}
	/// <summary>
	/// 初始化一个摄像机
	/// </summary>
	/// <param name="fov">FOV</param>
	/// <param name="screen">Screen类的地址</param>
	/// <param name="near">远平面</param>
	/// <param name="far">近平面</param>
	Camera(float fov, Screen *screen, float near, float far);
	~Camera();

	glm::mat4 GetView() const;
	glm::mat4 GetProjection() const;
	glm::vec3 GetPos() const;
	glm::vec3 GetFront() const;
	float GetFov() const;
	void SetCameraFront(glm::vec3 front);
	void SetFov(float fov);
	void SetCameraPos(glm::vec3 pos);
	virtual void update();
};


#endif // CAMERA_H
