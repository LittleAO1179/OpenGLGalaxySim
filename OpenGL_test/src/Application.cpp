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

extern FreeCamera camera;

int SpotLight::count = 0;
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
        Texture texture("res/texture/container2.png", GL_RGBA);
        Texture texture_specular("res/texture/container2_specular.png", GL_RGBA);

        glm::vec3 cubePositions[] = {
    glm::vec3(0.0f,  0.0f,  0.0f),
    glm::vec3(2.0f,  5.0f, -15.0f),
    glm::vec3(-1.5f, -2.2f, -2.5f),
    glm::vec3(-3.8f, -2.0f, -12.3f),
    glm::vec3(2.4f, -0.4f, -3.5f),
    glm::vec3(-1.7f,  3.0f, -7.5f),
    glm::vec3(1.3f, -2.0f, -2.5f),
    glm::vec3(1.5f,  2.0f, -2.5f),
    glm::vec3(1.5f,  0.2f, -1.5f),
    glm::vec3(-1.3f,  1.0f, -1.5f)
        };
        glm::vec3 pointLightPositions[] = {
    glm::vec3(0.7f,  0.2f,  2.0f),
    glm::vec3(2.3f, -3.3f, -4.0f),
    glm::vec3(-4.0f,  2.0f, -12.0f),
    glm::vec3(0.0f,  0.0f, -3.0f)
        };

        float pos[3] = { 0.0f,0.0f,0.0f };
        VertexArray VAO;
        Cube cube1(VAO);
        cube1.SetLocation(glm::vec3(0.4f, 0.4f, 0.4f));
        Cube cube3(VAO);
        cube3.SetLocation(glm::vec3(-0.8f, -0.8f, -0.8f));

        VertexArray lightVAO;
        std::allocator<SpotLight> spotLightAlloc;
        auto p = spotLightAlloc.allocate(4);
        auto q = p;
        spotLightAlloc.construct(q++, lightVAO, &ourShader);
        spotLightAlloc.construct(q++, lightVAO, &ourShader);
        spotLightAlloc.construct(q++, lightVAO, &ourShader);
        spotLightAlloc.construct(q++, lightVAO, &ourShader);

        for (int i = 0; i < 4; i++)
        {
            p[i].SetLocation(pointLightPositions[i]);
        }


        ourShader.use();

        ourShader.setInt("material.diffuse", 0);
        ourShader.setInt("material.specular", 1);
        ourShader.setFloat("material.shininess", 64.0f);

        // directional light
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
            ImGui::SliderFloat3("cube 1 location", pos, -1.0f, 1.0f);
            // (Your code calls glfwPollEvents())
            ImGui::SliderFloat3("cube 1 rotate", rotate_angle, 0, 360.0f);
            ImGui::SliderFloat3("cube 1 scale", scale_cube, 0, 2.0f);
            glfwPollEvents();


            glClearColor(0.1f, 0.1f, 0.1f, 1.0f);
            glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

            processInput(window);
            GLCall(glActiveTexture(GL_TEXTURE0));
            texture.Bind();
            GLCall(glActiveTexture(GL_TEXTURE1));
            texture_specular.Bind();

            camera.update(ourShader);
            // ourShader.setFloat3("light.position", lightPos);
            ourShader.setFloat3("viewPos", camera.GetPos());
            ourShader.setMat4fv("model", cube1.GetModel());
            cube1.SetLocation(glm::vec3(pos[0], pos[1], pos[2]));
            cube1.SetAngle(glm::vec3(rotate_angle[0], rotate_angle[1], rotate_angle[2]));
            Scale(cube1, glm::vec3(scale_cube[0], scale_cube[1], scale_cube[2]));
            cube1.Draw(VAO, ourShader);

            float time = 0.000005 * (float)glfwGetTimerValue();

            for (int i = 0; i < 10; i++)
            {
                cube3.SetLocation(cubePositions[i]);
                cube3.SetAngle(glm::vec3(1.0f * i * time, 0.3f * i * time, 0.5f * i * time));
                cube3.Draw(VAO, ourShader);
            }
            // cube3.Draw(VAO, ourShader);

            camera.update(lightShader);
            for (int i = 0; i < 4; i++)
            {
                p[i].Draw(lightVAO, lightShader);
            }

            // Rendering
            // (Your code clears your framebuffer, renders your other stuff etc.)
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


void GUI()
{

}