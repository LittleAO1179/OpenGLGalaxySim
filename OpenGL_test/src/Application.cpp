#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"

#include "shader.h"
#include "VertexBuffer.h"
#include "IndexBuffer.h"
#include "VertexArray.h"
#include "Texture.h"

#include "item/Skybox.h"
#include "gravity/planet.h"
#include "gravity/stellar.h"

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

        Shader sunShader("shader/shader.vert", "shader/shader.frag");
        Shader planetShader("shader/planet.vert", "shader/planet.frag");
        Shader skyboxShader("shader/skybox.vert", "shader/skybox.frag");
        Texture sunTexture("res/texture/2k_sun.jpg", GL_RGB);
        Texture earthDayTexture("res/texture/2k_earth_daymap.jpg", GL_RGB);
        // Texture earthDaySpecular("res/texture/2k_earth_specular_map.png", GL_RGB);
        Texture earthNightTexture("res/texture/2k_earth_nightmap.jpg", GL_RGB);
        Texture marsTexture("res/texture/2k_mars.jpg", GL_RGB);


        Stellar sun(500.0f, &planetShader);
        sun.SetLocation(glm::vec3(0.0f, 4* 1.0f, 0.0f));


        //Stellar sun2(300.0f, &planetShader);
        //sun2.SetLocation(glm::vec3(0.0f, 10 * 1.0f, 0.0f));
        //sun2.SetSpeed(glm::vec3(40.0f, 0.0f, 0.0f));
        //sun2.SetAngle(glm::vec3(45.0f, 30.0f, 20.0f));
        //Scale(sun2, glm::vec3(0.95f, 0.95f, 0.95f));

        //Stellar sun3(500.0f, &planetShader);
        //sun3.SetLocation(glm::vec3(0.0f, - 2.0f, 0.0f));
        //sun3.SetSpeed(glm::vec3(20.0f, 0.0f, 20.0f));
        //sun3.SetAngle(glm::vec3(45.0f, 00.0f, 20.0f));
        //Scale(sun3, glm::vec3(0.9f, 0.9f, 0.9f));

        Planet earth(glm::vec3(0.0f, 1.0f, 30.0f), 2.0);
        earth.SetLocation(glm::vec3(-4 * 1.0f, 4 * 1.0f, 0.0f));
        Scale(earth, glm::vec3(0.4f, 0.4f, 0.4f));

        Planet mars(glm::vec3(0.0f , 1.0f, -30.0f), 2.0);
        mars.SetLocation(glm::vec3(0.0f, 0.0f, 0.0f));
        Scale(mars, glm::vec3(0.4f, 0.4f, 0.4f));

        SkyBox skybox(&skyboxShader);

        planetShader.use();



        planetShader.setInt("material.diffuse", 0);
        planetShader.setInt("material.night", 1);
        planetShader.setInt("material.specular", 2);
        planetShader.setFloat("material.shininess", 64.0f);

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

            camera.update(sunShader);
            sunTexture.Bind();
            sun.Draw(sunShader);
           // sun2.Draw(sunShader);
           // sun3.Draw(sunShader);
            sunTexture.Unbind();


            glActiveTexture(GL_TEXTURE0);
            earthDayTexture.Bind();
            glActiveTexture(GL_TEXTURE1);
            earthNightTexture.Bind();
            earth.Draw(planetShader);
            earthDayTexture.Unbind();
            earthNightTexture.Unbind();

            glActiveTexture(GL_TEXTURE0);
            marsTexture.Bind();
            mars.Draw(planetShader);

            earth.Debug("Earth");
            mars.Debug("Mars");
            sun.Debug("Sun 1");
            //sun2.Debug("Sun 2");
           // sun3.Debug("Sun 3");

            Planet::Runing(0.0001f, time, window);

            planetShader.setFloat3("viewPos", camera.GetPos());
            
            skybox.Draw(&camera);
            camera.update(planetShader);
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
