#include "FreeCamera.h"

FreeCamera::FreeCamera(float fov, Screen* screen, float near, float far) : Camera(fov, screen, near, far),m_isMouseActived(true), m_isVKeyPressed(false),m_isFirstMouse(true)
{
    m_Yaw = -90.0f;
    m_Pitch = 0.0f;
	m_MouseLastX = 0;
	m_MouseLastY = 0;
}

FreeCamera::~FreeCamera()
{
}

void FreeCamera::InputKey(GLFWwindow* window, float cameraSpeed)
{
	if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS)
		m_CameraPos += cameraSpeed * m_CameraFront;
	if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS)
		m_CameraPos -= cameraSpeed * m_CameraFront;
	if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS)
		m_CameraPos -= glm::normalize(glm::cross(m_CameraFront, m_CameraUp)) * cameraSpeed;
	if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS)
		m_CameraPos += glm::normalize(glm::cross(m_CameraFront, m_CameraUp)) * cameraSpeed;
    if (glfwGetKey(window, GLFW_KEY_SPACE) == GLFW_PRESS)
        m_CameraPos.y += cameraSpeed * 0.5f;
    if (glfwGetKey(window, GLFW_KEY_LEFT_CONTROL) == GLFW_PRESS)
        m_CameraPos.y -= cameraSpeed * 0.5f;
    bool isVKeyPressedNow = glfwGetKey(window, GLFW_KEY_V) == GLFW_PRESS;

    // 检查V键是否被按下，并且之前没有被按下
    if (isVKeyPressedNow && !m_isVKeyPressed)
    {
        // 切换鼠标状态
        m_isMouseActived = !m_isMouseActived;
        if (!m_isMouseActived) m_isFirstMouse = true;
        glfwSetInputMode(window, GLFW_CURSOR, m_isMouseActived ? GLFW_CURSOR_DISABLED : GLFW_CURSOR_NORMAL);
    }

    // 更新V键的状态
    m_isVKeyPressed = isVKeyPressedNow;
}

void FreeCamera::InputMouse(GLFWwindow* window, float &UpdatedX, float &UpdatedY)
{
    if (m_isMouseActived)
    {
        if (m_isFirstMouse)
        {
            UpdateMouse(UpdatedX, UpdatedY);
            m_isFirstMouse = false;
        }
        float xoffset = UpdatedX - m_MouseLastX;
        float yoffset = m_MouseLastY - UpdatedY;
        UpdateMouse(UpdatedX, UpdatedY);

        float sensitivity = 0.05;
        xoffset *= sensitivity;
        yoffset *= sensitivity;

        m_Yaw += xoffset;
        m_Pitch += yoffset;

        if (m_Pitch > 89.0f)
            m_Pitch = 89.0f;
        if (m_Pitch < -89.0f)
            m_Pitch = -89.0f;
        update();
    }
}

void FreeCamera::UpdateMouse(float &UpdatedX, float &UpdatedY)
{
    m_MouseLastX = UpdatedX;
    m_MouseLastY = UpdatedY;
}

void FreeCamera::update()
{
    m_Projection = glm::perspective(glm::radians(m_Fov), m_Screen->Aspect_ratio(), m_Near, m_Far);
    m_View = glm::lookAt(m_CameraPos, m_CameraPos + m_CameraFront, m_CameraUp);
    glm::vec3 front = glm::vec3(1.0f);
    front.x = cos(glm::radians(m_Yaw)) * cos(glm::radians(m_Pitch));
    front.y = sin(glm::radians(m_Pitch));
    front.z = sin(glm::radians(m_Yaw)) * cos(glm::radians(m_Pitch));
    m_CameraFront = front;
}

void FreeCamera::update(Shader& shader)
{
    shader.use();
    shader.setMat4fv("view", m_View);
    shader.setMat4fv("projection", m_Projection);
    update();
}
