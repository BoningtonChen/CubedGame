#pragma once

#include "Walnut/Application.h"
#include "Walnut/Layer.h"

#include <glm/glm.hpp>

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

	private:
		glm::vec2 m_PlayerPosition{ 50, 50 };
		glm::vec2 m_PlayerVelocity{ 0, 0 };
	};
}
