/*
* Phoenix 3D 游戏引擎 Version 2.0
*
* Copyright (C) 2009-2011 http://www.Phoenix3d.org/
*
* 文件名称	：	PX2OpenGLES2RendererInput.hpp
*
* 版本		:	1.0 (2011/02/01)
*
* 作者		：	more
*
*/

#ifndef PX2OPENGLES2RENDERERINPUT_HPP
#define PX2OPENGLES2RENDERERINPUT_HPP

#include "PX2OpenGLES2RendererPre.hpp"

namespace PX2
{

	class RendererInput
	{
	public:
		EGLNativeWindowType  mWindowHandle;
		EGLNativeDisplayType mRendererDC;
	};

}

#endif