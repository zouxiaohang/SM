#include "Application.h"

SM::Application::Application(const std::string & appName, int width, int height)
	:mAppName_(appName),
	mWidth_(width),
	mHeight_(height)
{
}

SM::Application::~Application()
{
}
