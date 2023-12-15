#include "Renderer.h"
#include "camera/Camera.h"
#include "camera/FreeCamera.h"

#include <iostream>

Screen screen(1920, 1080);
FreeCamera camera(45.0f, &screen, 0.1f, 100.0f);
bool firstMouse = true;

void GLClearError()
{
    while (glGetError() != GL_NO_ERROR);
}

bool GLLogCall(const char* function, const char* file, int line)
{
    while (const GLenum error = glGetError())
    {
        std::cout << "[OPENGL ERROR] (" << error << "):" <<
            function << " " << file << ": " << line << std::endl;
        return false;
    }

    return true;
}

GLFWwindow* OpenglInit()
{
    // glfw: initialize and configure
    // ------------------------------
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

#ifdef __APPLE__
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif

    // glfw window creation
    // --------------------
    GLFWwindow* window = glfwCreateWindow(screen.GetWidth(), screen.GetHeight(), "LearnOpenGL", NULL, NULL);
    if (window == NULL)
    {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
    }

    glfwMakeContextCurrent(window);
    glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
    glfwSetCursorPosCallback(window, mouse_callback);
    glfwSetScrollCallback(window, scroll_callback);

    // glad: load all OpenGL function pointers
    // ---------------------------------------
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
    }
    
    std::cout << glGetString(GL_VERSION) << std::endl;
    return window;
}

void mouse_callback(GLFWwindow* window, double xpos, double ypos)
{
    float xposf = (float)xpos;
    float yposf = (float)ypos;
    camera.InputMouse(window, xposf, yposf);
}

void scroll_callback(GLFWwindow* window, double xoffset, double yoffset)
{
    camera.SetFov(camera.GetFov() - (float)yoffset);
    if (camera.GetFov() < 1.0f)
        camera.SetFov(1.0f);
    if (camera.GetFov() > 45.0f)
        camera.SetFov(45.0f);
}

void processInput(GLFWwindow* window)
{
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
    camera.InputKey(window, 0.05f);
}


void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
    glViewport(0, 0, width, height);
    screen.SetScreen(width, height);
}