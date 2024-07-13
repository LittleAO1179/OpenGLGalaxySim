{
    files = {
        [[dep\imgui\imgui_draw.cpp]]
    },
    values = {
        [[D:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.40.33807\bin\HostX64\x64\cl.exe]],
        {
            "-nologo",
            "-Zi",
            "-FS",
            [[-Fdbuild\windows\x64\debug\compile.OpenGLGalaxySim.pdb]],
            "-Od",
            [[-Idep\imgui]],
            [[-Idep\stb_image]],
            "-Isrc",
            "-Iinclude",
            "/EHsc",
            "-external:W0",
            [[-external:ID:\msys64\vcpkg\installed\x64-windows-static\include]]
        }
    },
    depfiles_cl_json = "{\
    \"Version\": \"1.2\",\
    \"Data\": {\
        \"Source\": \"d:\\\\onedrive\\\\program\\\\cpp\\\\openglgalaxysim\\\\opengl_test\\\\dep\\\\imgui\\\\imgui_draw.cpp\",\
        \"ProvidedModule\": \"\",\
        \"Includes\": [\
            \"d:\\\\onedrive\\\\program\\\\cpp\\\\openglgalaxysim\\\\opengl_test\\\\dep\\\\imgui\\\\imgui.h\",\
            \"d:\\\\onedrive\\\\program\\\\cpp\\\\openglgalaxysim\\\\opengl_test\\\\dep\\\\imgui\\\\imconfig.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\float.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\corecrt.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\vcruntime.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\sal.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\concurrencysal.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\vadefs.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\stdarg.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\stddef.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\string.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\corecrt_memory.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\corecrt_memcpy_s.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\errno.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\vcruntime_string.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\corecrt_wstring.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\assert.h\",\
            \"d:\\\\onedrive\\\\program\\\\cpp\\\\openglgalaxysim\\\\opengl_test\\\\dep\\\\imgui\\\\imgui_internal.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\stdio.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\corecrt_wstdio.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\corecrt_stdio_config.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\stdlib.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\corecrt_malloc.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\corecrt_search.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\corecrt_wstdlib.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\limits.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\math.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\corecrt_math.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\immintrin.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\wmmintrin.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\nmmintrin.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\smmintrin.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\tmmintrin.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\pmmintrin.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\emmintrin.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\xmmintrin.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\mmintrin.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\malloc.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\zmmintrin.h\",\
            \"d:\\\\onedrive\\\\program\\\\cpp\\\\openglgalaxysim\\\\opengl_test\\\\dep\\\\imgui\\\\imstb_textedit.h\",\
            \"d:\\\\onedrive\\\\program\\\\cpp\\\\openglgalaxysim\\\\opengl_test\\\\dep\\\\imgui\\\\imstb_rectpack.h\",\
            \"d:\\\\onedrive\\\\program\\\\cpp\\\\openglgalaxysim\\\\opengl_test\\\\dep\\\\imgui\\\\imstb_truetype.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\math.h\"\
        ],\
        \"ImportedModules\": [],\
        \"ImportedHeaderUnits\": []\
    }\
}"
}