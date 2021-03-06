/*
* Phoenix 3D 游戏引擎 Version 2.0
*
* Copyright (C) 2009-2011 http://www.Phoenix3d.org/
*
* 文件名称	：	PX2GraphicsRoot.hpp
*
* 版本		:	1.0 (2012/04/15)
*
* 作者		：	more
*
*/

#ifndef PX2GRAPHICSROOT_HPP
#define PX2GRAPHICSROOT_HPP

#include "PX2GraphicsPre.hpp"
#include "PX2Size.hpp"
#include "PX2Camera.hpp"
#include "PX2Light.hpp"
#include "PX2Singleton.hpp"

namespace PX2
{

	class GraphicsRoot : public Singleton<GraphicsRoot>
	{
	public:
		GraphicsRoot ();
		~GraphicsRoot ();

		bool Initlize ();
		bool Terminate ();

		void SetSize (const Sizef &size);
		const Sizef &GetSize () const;

		void SetCamera (Camera *camera);
		PX2::Camera *GetCamera();

		void AddLight (Light *light);
		void RemoveLight (Light *light);
		void ClearAllLights ();
		int GetNumLights ();
		Light *GetLight (int index);

	private:
		Sizef mSize;
		PX2::CameraPtr mCamera;
		std::vector<LightPtr> mAllLights; // 保存放在场景中的所有灯光
		static std::string PX2Path;
	};

#include "PX2GraphicsRoot.inl"

#define PX2_GR GraphicsRoot::GetSingleton()

}

#endif