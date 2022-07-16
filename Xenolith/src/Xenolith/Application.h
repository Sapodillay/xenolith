#pragma once

#include "Core.h"

namespace Xenolith {
	class XENOLITH_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//defined in client
	Application* CreateApplication();

}

