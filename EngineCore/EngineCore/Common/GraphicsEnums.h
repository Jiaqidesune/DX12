#pragma once

namespace RHI
{
	static constexpr UINT32 MAX_SHADERS_IN_PIPELINE = 5;

	enum PIPELINE_TYPE
	{
		PIPELINE_TYPE_GRAPHIC,
		PIPELINE_TYPE_COMPUTE,
		PIPELINE_TYPE_MESH
	};
}