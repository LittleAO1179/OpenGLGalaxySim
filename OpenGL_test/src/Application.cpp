#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"

#include "shader.h"
#include "VertexBuffer.h"
#include "IndexBuffer.h"
#include "VertexArray.h"
#include "Texture.h"

#include "item/Cube.h"
#include "item/SpotLight.h"
#include "item/Shpere.h"
#include "item/Skybox.h"
#include "gravity/planet.h"

#include "camera/Camera.h"
#include "camera/FreeCamera.h"

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
        Shader skyboxShader("shader/skybox.vert", "shader/skybox.frag");
        Texture texture("res/texture/earth2k.png", GL_RGB);
        // Texture texture_specular("res/texture/container2_specular.png", GL_RGBA);
        //Texture texture2("res/texture/container.jpg", GL_RGB);


        Planet planet1(glm::vec3(25.0f, 20.0f, 0.0f), 2.0);
        Scale(planet1, glm::vec3(0.4f, 0.4f, 0.4f));
        planet1.SetLocation(glm::vec3(0.0f, 4* 1.0f, 0.0f));
        Planet planet2(glm::vec3(20.0f, 1.0f, 0.0f), 500.0);
        planet2.SetLocation(glm::vec3(0.0f * -4 * 1.0f, 0.0f, 0.0f));

        Planet planet3(glm::vec3(0.0f, 25.0f, 0.0f), 2.0);
        Scale(planet3, glm::vec3(0.4f, 0.4f, 0.4f));
        planet3.SetLocation(glm::vec3(0.0f, 0.0f, 4.0f));

        Planet planet4(glm::vec3(0.0f, 0.0f, 0.0f), 50.0);
        planet4.SetLocation(glm::vec3(10.0f, 0.0f, 10.0f));


        SpotLight spotlight(&ourShader);
        spotlight.SetLocation(glm::vec3(1.0f,1.0f,1.0f));

        Cube cube1;
        cube1.SetLocation(glm::vec3(-1.0f, -1.0f, -1.0f));

        SkyBox skybox(&skyboxShader);

        ourShader.use();

        ourShader.setInt("material.diffuse", 0);
        ourShader.setInt("material.specular", 1);
        ourShader.setFloat("material.shininess", 64.0f);

        glEnable(GL_DEPTH_TEST);

        while (!glfwWindowShouldClose(window))
        {

            // Start the Dear ImGui frame
            ImGui_ImplOpenGL3_NewFrame();
            ImGui_ImplGlfw_NewFrame();
            ImGui::NewFrame();
            // (Your code calls glfwPollEvents())

            glfwPollEvents();

            glClearColor(0.3f, 0.3f, 0.3f, 1.0f);
            glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

            processInput(window);

            float time = glfwGetTimerValue() * 0.000005f;

            camera.update(ourShader);
            GLCall(glActiveTexture(GL_TEXTURE0));



            ourShader.setFloat3("viewPos", camera.GetPos());
            
            skybox.Draw(&camera);
            camera.update(lightShader);

            planet1.Draw(lightShader);
            planet1.Debug("planet1");
            planet2.Draw(lightShader);
            planet2.Debug("planet2");
            planet4.Draw(lightShader);
            planet4.Debug("planet4");
            planet3.Draw(lightShader);
            planet3.Debug("planet3");


            Planet::Runing(0.00005f);

            // spotlight.Draw(lightShader);
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
