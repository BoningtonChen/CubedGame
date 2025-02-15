#pragma once

#include "Walnut/Application.h"
#include "Walnut/Layer.h"

namespace CubedGame
{
	class ClientLayer : public Walnut::Layer
	{
	public:
		virtual void OnAttach() override;
		virtual void OnDetach() override;

		virtual void OnUpdate(float ts) override;
		virtual void OnRender() override;
		virtual void OnUIRender() override;
	};
}
