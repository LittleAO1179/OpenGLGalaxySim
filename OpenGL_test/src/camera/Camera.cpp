#include "Camera.h"

Camera::Camera(float fov, Screen* screen, float near, float far)
{
	m_CameraFront = glm::vec3(0.0f, 0.0f, -1.0f);
	m_CameraPos = glm::vec3(0.0f, 0.0f, 3.0f);
	m_CameraUp = glm::vec3(0.0f, 1.0f, 0.0f);
	m_Fov = fov;
	m_Screen = screen;
	m_Near = near;
	m_Far = far;
	m_Projection = glm::perspective(glm::radians(m_Fov), m_Screen->Aspect_ratio(), m_Near, m_Far);
	m_View = glm::lookAt(m_CameraPos, m_CameraPos + m_CameraFront, m_CameraUp);
}


Camera::~Camera()
{
}

glm::mat4 Camera::GetView() const
{
	return m_View;
}

glm::mat4 Camera::GetProjection() const
{
	return m_Projection;
}

glm::vec3 Camera::GetPos() const
{
	return m_CameraPos;
}

glm::vec3 Camera::GetFront() const
{
	return m_CameraFront;
}

float Camera::GetFov() const
{
	return m_Fov;
}

void Camera::SetCameraFront(glm::vec3 front)
{
	m_CameraFront = glm::normalize(front);
	update();
}

void Camera::SetFov(float fov)
{
	m_Fov = fov;
	update();
}

void Camera::SetCameraPos(glm::vec3 pos)
{
	m_CameraPos = pos;
	update();
}

void Camera::update()
{
	m_Projection = glm::perspective(glm::radians(m_Fov), m_Screen->Aspect_ratio(), m_Near, m_Far);
	m_View = glm::lookAt(m_CameraPos, m_CameraPos + m_CameraFront, m_CameraUp);
}
