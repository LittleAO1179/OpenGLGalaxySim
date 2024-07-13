{
    files = {
        [[src\Renderer.cpp]]
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
        \"Source\": \"d:\\\\onedrive\\\\program\\\\cpp\\\\openglgalaxysim\\\\opengl_test\\\\src\\\\renderer.cpp\",\
        \"ProvidedModule\": \"\",\
        \"Includes\": [\
            \"d:\\\\onedrive\\\\program\\\\cpp\\\\openglgalaxysim\\\\opengl_test\\\\src\\\\renderer.h\",\
            \"d:\\\\onedrive\\\\program\\\\cpp\\\\openglgalaxysim\\\\opengl_test\\\\include\\\\glad\\\\glad.h\",\
            \"d:\\\\onedrive\\\\program\\\\cpp\\\\openglgalaxysim\\\\opengl_test\\\\include\\\\khr\\\\khrplatform.h\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glfw\\\\glfw3.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\stddef.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\corecrt.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\vcruntime.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\sal.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\concurrencysal.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\vadefs.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\stdint.h\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\glm.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\_fixes.hpp\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\cmath\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\yvals.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\yvals_core.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\xkeycheck.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\crtdbg.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\vcruntime_new_debug.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\vcruntime_new.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\crtdefs.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\use_ansi.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\cstdlib\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\math.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\corecrt_math.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\stdlib.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\corecrt_malloc.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\corecrt_search.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\corecrt_wstdlib.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\limits.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\xtr1common\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\intrin0.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\intrin0.inl.h\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\setup.hpp\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\cassert\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\assert.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\cstddef\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\simd\\\\platform.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\cstdint\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\type_traits\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\climits\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\cfloat\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\float.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\limits\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\cwchar\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\cstdio\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\stdio.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\corecrt_wstdio.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\corecrt_stdio_config.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\wchar.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\corecrt_memcpy_s.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\errno.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\vcruntime_string.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\corecrt_wconio.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\corecrt_wctype.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\corecrt_wdirect.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\corecrt_wio.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\corecrt_share.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\corecrt_wprocess.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\corecrt_wstring.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\corecrt_wtime.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\sys\\\\stat.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\sys\\\\types.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\cassert\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\assert.h\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\fwd.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\qualifier.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\setup.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\vec2.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_bool2.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\type_vec2.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\type_vec2.inl\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\compute_vector_relational.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\setup.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_bool2_precision.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_float2.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_float2_precision.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_double2.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_double2_precision.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_int2.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_int2_sized.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\scalar_int_sized.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\setup.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_uint2.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_uint2_sized.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\scalar_uint_sized.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\setup.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\vec3.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_bool3.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\type_vec3.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\type_vec3.inl\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_bool3_precision.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_float3.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_float3_precision.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_double3.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_double3_precision.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_int3.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_int3_sized.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_uint3.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_uint3_sized.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\vec4.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_bool4.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\type_vec4.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\type_vec4.inl\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_bool4_precision.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_float4.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_float4_precision.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_double4.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_double4_precision.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\setup.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_int4.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_int4_sized.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_uint4.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_uint4_sized.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\mat2x2.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_double2x2.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\type_mat2x2.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\type_mat2x2.inl\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\matrix.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\setup.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\mat2x3.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_double2x3.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\type_mat2x3.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\type_mat2x3.inl\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_double2x3_precision.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_float2x3.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_float2x3_precision.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\mat2x4.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_double2x4.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\type_mat2x4.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\type_mat2x4.inl\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_double2x4_precision.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_float2x4.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_float2x4_precision.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\mat3x2.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_double3x2.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\type_mat3x2.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\type_mat3x2.inl\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_double3x2_precision.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_float3x2.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_float3x2_precision.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\mat3x3.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_double3x3.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\type_mat3x3.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\type_mat3x3.inl\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_double3x3_precision.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_float3x3.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_float3x3_precision.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\mat3x4.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_double3x4.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\type_mat3x4.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\type_mat3x4.inl\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_double3x4_precision.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_float3x4.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_float3x4_precision.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\mat4x2.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_double4x2.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\type_mat4x2.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\type_mat4x2.inl\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_double4x2_precision.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_float4x2.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_float4x2_precision.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\mat4x3.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_double4x3.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\type_mat4x3.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\type_mat4x3.inl\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_double4x3_precision.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_float4x3.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_float4x3_precision.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\mat4x4.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_double4x4.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\type_mat4x4.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\type_mat4x4.inl\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_double4x4_precision.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_float4x4.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_float4x4_precision.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\func_matrix.inl\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\geometric.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\func_geometric.inl\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\exponential.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\type_vec1.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\type_vec1.inl\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\func_exponential.inl\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\vector_relational.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\setup.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\func_vector_relational.inl\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\_vectorize.hpp\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\cassert\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\assert.h\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\common.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\_fixes.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\func_common.inl\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\compute_common.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\setup.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_double2x2_precision.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_float2x2.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_float2x2_precision.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\trigonometric.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\setup.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\func_trigonometric.inl\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\packing.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\func_packing.inl\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\type_half.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\setup.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\type_half.inl\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\integer.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\func_integer.inl\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\intrin.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\setjmp.h\",\
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
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\ammintrin.h\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\gtc\\\\matrix_transform.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_projection.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\gtc\\\\constants.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\scalar_constants.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\setup.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\scalar_constants.inl\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\gtc\\\\constants.inl\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_projection.inl\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_clip_space.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_clip_space.inl\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_transform.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\matrix_transform.inl\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\gtc\\\\matrix_transform.inl\",\
            \"d:\\\\onedrive\\\\program\\\\cpp\\\\openglgalaxysim\\\\opengl_test\\\\src\\\\camera\\\\screen.h\",\
            \"d:\\\\onedrive\\\\program\\\\cpp\\\\openglgalaxysim\\\\opengl_test\\\\dep\\\\imgui\\\\imgui.h\",\
            \"d:\\\\onedrive\\\\program\\\\cpp\\\\openglgalaxysim\\\\opengl_test\\\\dep\\\\imgui\\\\imconfig.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\stdarg.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\string.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\corecrt_memory.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\assert.h\",\
            \"d:\\\\onedrive\\\\program\\\\cpp\\\\openglgalaxysim\\\\opengl_test\\\\src\\\\camera\\\\camera.h\",\
            \"d:\\\\onedrive\\\\program\\\\cpp\\\\openglgalaxysim\\\\opengl_test\\\\src\\\\renderer.h\",\
            \"d:\\\\onedrive\\\\program\\\\cpp\\\\openglgalaxysim\\\\opengl_test\\\\src\\\\camera\\\\freecamera.h\",\
            \"d:\\\\onedrive\\\\program\\\\cpp\\\\openglgalaxysim\\\\opengl_test\\\\src\\\\shader.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\string\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\xstring\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\__msvc_sanitizer_annotate_container.hpp\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\iosfwd\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\cstring\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\xmemory\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\new\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\exception\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\vcruntime_exception.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\eh.h\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\corecrt_terminate.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\xatomic.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\xutility\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\__msvc_iter_core.hpp\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\utility\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\initializer_list\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\cctype\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\ctype.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\fstream\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\__msvc_filebuf.hpp\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\streambuf\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\xiosbase\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\share.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\system_error\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\__msvc_system_error_abi.hpp\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\cerrno\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\stdexcept\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\xcall_once.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\xerrc.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\atomic\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\xthreads.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\xtimec.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\ctime\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\time.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\xlocale\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\memory\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\typeinfo\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\vcruntime_typeinfo.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\xfacet\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\xlocinfo\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\__msvc_xlocinfo_types.hpp\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\clocale\",\
            \"c:\\\\program files (x86)\\\\windows kits\\\\10\\\\include\\\\10.0.22621.0\\\\ucrt\\\\locale.h\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\istream\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\ostream\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\ios\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\xlocnum\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\iterator\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\sstream\",\
            \"d:\\\\program files\\\\microsoft visual studio\\\\2022\\\\community\\\\vc\\\\tools\\\\msvc\\\\14.40.33807\\\\include\\\\iostream\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\gtc\\\\type_ptr.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\gtc\\\\quaternion.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_relational.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_relational.inl\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\type_float.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\setup.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\quaternion_common.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\quaternion_geometric.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\quaternion_geometric.inl\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\quaternion_common.inl\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\quaternion_float.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\type_quat.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\quaternion_relational.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\quaternion_relational.inl\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\type_quat.inl\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\quaternion_float_precision.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\quaternion_double.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\quaternion_double_precision.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\quaternion_trigonometric.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\quaternion_trigonometric.inl\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\quaternion_transform.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\quaternion_transform.inl\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\gtc\\\\quaternion.inl\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\gtc\\\\epsilon.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\detail\\\\setup.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\gtc\\\\epsilon.inl\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\gtc\\\\vec1.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_bool1.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_bool1_precision.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_float1.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_float1_precision.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_double1.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_double1_precision.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_int1.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_int1_sized.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_uint1.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\ext\\\\vector_uint1_sized.hpp\",\
            \"d:\\\\msys64\\\\vcpkg\\\\installed\\\\x64-windows-static\\\\include\\\\glm\\\\gtc\\\\type_ptr.inl\"\
        ],\
        \"ImportedModules\": [],\
        \"ImportedHeaderUnits\": []\
    }\
}"
}