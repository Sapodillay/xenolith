#pragma once

#include "Core.h"
#include "Events/Event.h"
#include <Xenolith\Events\ApplicationEvent.h>


#include "Window.h"

namespace Xenolith {
	class XENOLITH_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

		void OnEvent(Event& e);

	private:
		bool OnWindowClosed(WindowCloseEvent& e);

		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
	};

	//defined in client
	Application* CreateApplication();

}

