#include "ServerLayer.h"
#include "Walnut/Application.h"
#include "Walnut/EntryPoint.h"

#include "Walnut/Core/Log.h"

#include "ServerLayer.h"

class ExampleLayer : public Walnut::Layer
{
public:
	virtual void OnAttach() override {}

	virtual void OnUpdate(float ts) override
	{
		// WL_INFO("Server Time steps: {}", ts);
	}
private:
	bool m_AboutModalOpen = false;
};

Walnut::Application* Walnut::CreateApplication(int argc, char** argv)
{
	Walnut::ApplicationSpecification spec;
	spec.Name = "CubedGame Server";

	Walnut::Application* app = new Walnut::Application(spec);
	app->PushLayer<CubedGame::ServerLayer>();
	
	return app;
}