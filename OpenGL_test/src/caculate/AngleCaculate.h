#pragma once
#include "GLMSwitch.h"
#include "glm/glm.hpp"

namespace AngleCal
{
	void ResetAngle(glm::vec3 &angles)
	{
		float* nums = GLMSwitch::vec3ToFloat3(angles);
		for (int i = 0; i < 3; i++)
		{
			while (nums[i] > 360)	nums[i] -= 360;
		}
		angles = GLMSwitch::float3ToVec3(nums);
	}
}