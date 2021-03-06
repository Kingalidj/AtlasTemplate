#include <Atlas.h>
#include <Atlas/Core/EntryPoint.h>

#include "DrawLayer.h"

class App : public Atlas::Application
{
public:
	App()
		: Application("Atlas Engine", 1400, 1600, Atlas::EditorType::ATLAS2D)
	{
		PushLayer(new DrawLayer());
	}
};

Atlas::Application* Atlas::CreateApplication()
{
	return new App();
}
