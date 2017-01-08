#pragma once

#pragma once

#include <string>

#include "GL/glew.h"
#include "GLFW/glfw3.h"

namespace SM
{
	class Application
	{
	public:
		Application(const std::string& appName, int width, int height);
		virtual ~Application();

		std::string GetAppName()const { return mAppName_; }
		GLsizei GetAppWidth()const { return mWidth_; }
		GLsizei GetAppHeight()const { return mHeight_; }

		virtual bool OnInit() = 0;
		virtual void OnTerminate() = 0;
		virtual void Run() = 0;

	private:
		std::string mAppName_;
		int mWidth_;
		int mHeight_;
		GLFWwindow *mWindow_;
	};
}