#pragma once

#include <Atlas.h>

class DrawLayer : public Atlas::Layer
{
private:

public:

	DrawLayer();
	virtual void OnAttach() override;
	virtual void OnDetach() override;

	void OnUpdate(Atlas::Timestep ts) override;
	virtual void OnImGuiRender() override;
	void OnEvent(Atlas::Event& e) override;
};

