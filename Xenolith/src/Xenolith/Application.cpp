#include "xlpch.h"
#include "Application.h"
#include <Xenolith\Events\ApplicationEvent.h>
#include <Xenolith\Log.h>


namespace Xenolith {
	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		XL_TRACE(e.GetHeight());

		while (true);
	}

}
