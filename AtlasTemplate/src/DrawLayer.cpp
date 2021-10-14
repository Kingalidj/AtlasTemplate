#include "DrawLayer.h"

using namespace Atlas;

DrawLayer::DrawLayer()
{
}

void DrawLayer::OnAttach()
{

}

void DrawLayer::OnDetach()
{
}

void DrawLayer::OnUpdate(Timestep ts)
{
	Renderer2D::BeginScene(OrthographicCamera(-1, 1, -1, 1));

	RenderCommand::SetClearColor({ 0.1f, 0.1f, 0.1f, 1.0f });
	RenderCommand::Clear();

	Renderer2D::EndScene();
}


void DrawLayer::OnImGuiRender()
{
}

void DrawLayer::OnEvent(Event& e)
{
}
