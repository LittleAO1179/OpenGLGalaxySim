#pragma once
#include <glm/glm.hpp>

namespace GLMSwitch
{
	float* vec3ToFloat3(const glm::vec3& vec)
	{
		float res[3] = { vec.x, vec.y, vec.z };
		return res;
	}

	glm::vec3 float3ToVec3(const float* nums)
	{
		glm::vec3 res(nums[0], nums[1], nums[2]);
		return res;
	}
}