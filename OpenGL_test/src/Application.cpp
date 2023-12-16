#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "shader.h"
#include "VertexBuffer.h"
#include "IndexBuffer.h"
#include "VertexArray.h"
#include "Texture.h"
#include "item/Cube.h"
#include "camera/Camera.h"
#include "camera/FreeCamera.h"
#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"
#include "item/SpotLight.h"
#include "item/Shpere.h"

extern FreeCamera camera;

int main()
{
    // 初始化，生成窗口
    GLFWwindow* window = OpenglInit();
    // Setup Dear ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;     // Enable Keyboard Controls
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;      // Enable Gamepad Controls


    // Setup Platform/Renderer backends
    ImGui_ImplGlfw_InitForOpenGL(window, true);          // Second param install_callback=true will install GLFW callbacks and chain to existing ones.
    ImGui_ImplOpenGL3_Init();

    // 顶点数据
    {

        Shader ourShader("shader/shader.vert", "shader/shader.frag");
        Shader lightShader("shader/light.vert", "shader/light.frag");
        Texture texture("res/texture/earth.png", GL_RGB);
        // Texture texture_specular("res/texture/container2_specular.png", GL_RGBA);

        Sphere sphere1;
        SpotLight spotlight(&ourShader);
        spotlight.SetLocation(glm::vec3(1.0f,1.0f,1.0f));
        ourShader.use();

        ourShader.setInt("material.diffuse", 0);
        ourShader.setInt("material.specular", 1);
        ourShader.setFloat("material.shininess", 64.0f);

        ourShader.setFloat3("dirLight.direction", -0.2f, -1.0f, -0.3f);
        ourShader.setFloat3("dirLight.ambient", 0.05f, 0.05f, 0.05f);
        ourShader.setFloat3("dirLight.diffuse", 0.4f, 0.4f, 0.4f);
        ourShader.setFloat3("dirLight.specular", 0.5f, 0.5f, 0.5f);


        float rotate_angle[3] = {0.0f, 0.0f, 0.0f};
        float scale_cube[3] = {1.0f, 1.0f, 1.0f};
        glEnable(GL_DEPTH_TEST);

        while (!glfwWindowShouldClose(window))
        {

            // Start the Dear ImGui frame
            ImGui_ImplOpenGL3_NewFrame();
            ImGui_ImplGlfw_NewFrame();
            ImGui::NewFrame();
            ImGui::Text("Control Pannal");
            // (Your code calls glfwPollEvents())
            ImGui::SliderFloat3("cube 1 rotate", rotate_angle, 0, 360.0f);
            ImGui::SliderFloat3("cube 1 scale", scale_cube, 0, 2.0f);
            glfwPollEvents();


            glClearColor(0.3f, 0.3f, 0.3f, 1.0f);
            glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

            processInput(window);

            camera.update(ourShader);
            GLCall(glActiveTexture(GL_TEXTURE0));
            texture.Bind();
            //GLCall(glActiveTexture(GL_TEXTURE1));
            //texture_specular.Bind();

            ourShader.setFloat3("viewPos", camera.GetPos());

            sphere1.Draw(ourShader);

            camera.update(lightShader);

            spotlight.Draw(lightShader);
            ImGui::Render();
            ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
            // (Your code calls glfwSwapBuffers() etc.)
            GLCall(glfwSwapBuffers(window));
            glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        }
    }
    ImGui_ImplOpenGL3_Shutdown();
    ImGui_ImplGlfw_Shutdown();
    ImGui::DestroyContext();
    glfwTerminate();
    return 0;
}
