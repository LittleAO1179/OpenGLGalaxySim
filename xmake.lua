add_rules("mode.debug", "mode.release")

-- 添加对 GLFW3 的依赖
add_requires("vcpkg::glfw3")
add_requires("vcpkg::glm")
add_requires("vcpkg::ImGui")
add_requires("vcpkg::glad")

rule("copy_resources")
    on_build(function (target)
        local resourcedir = path.join(os.projectdir(), "res")
        local targetdir = path.join(target:targetdir(), "res")
        os.cp(resourcedir, targetdir)
    end)

rule("copy_shaders")
    on_build(function (target) 
        local shaderdir = path.join(os.projectdir(), "shader")
        local targetdir = path.join(target:targetdir(), "shader")
        os.cp(shaderdir, targetdir)
    end)

target("OpenGLGalaxySim")
    add_rules("copy_resources")
    add_rules("copy_shaders")

    set_kind("binary")
    add_files("src/*.cpp", "src/*.c", "src/camera/*.cpp" , "src/gravity/*.cpp", "src/item/*.cpp", "dep/imgui/*.cpp", "dep/stb_image/*.cpp")
    add_includedirs("dep/imgui", "dep/stb_image", "src", "include")
    add_packages("vcpkg::glfw3")
    add_packages("vcpkg::glm")

    -- 链接到 GLFW3 库P
    add_links("glfw3")
    add_links("shell32")