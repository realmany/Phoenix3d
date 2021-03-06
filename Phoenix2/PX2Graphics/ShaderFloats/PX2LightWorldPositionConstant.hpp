/*
* Phoenix 3D 游戏引擎 Version 2.0
*
* Copyright (C) 2009-2011 http://www.Phoenix3d.org/
*
* 文件名称	：	PX2CameraModelPositionConstant.hpp
*
* 版本		:	1.0 (2011/02/01)
*
* 作者		：	more
*
*/

#ifndef PX2LIGHTWORLDPOSITIONCONSTANT_HPP
#define PX2LIGHTWORLDPOSITIONCONSTANT_HPP

#include "PX2GraphicsPrerequisites.hpp"
#include "PX2ShaderFloat.hpp"
#include "PX2Light.hpp"

namespace PX2
{

	class LightWorldPositionConstant : public ShaderFloat
	{
		PX2_DECLARE_RTTI;
		PX2_DECLARE_NAMES;
		PX2_DECLARE_STREAM(LightWorldPositionConstant);

	public:
		LightWorldPositionConstant (Light* light);
		virtual ~LightWorldPositionConstant ();

		void SetLight (Light *light);
		Light* GetLight ();

		virtual void Update (const Renderable* renderable, const Camera* camera);

	protected:
		LightPtr mLight;
	};

	PX2_REGISTER_STREAM(LightWorldPositionConstant);
	typedef Pointer0<LightWorldPositionConstant> LightWorldPositionConstantPtr;

}

#endif
