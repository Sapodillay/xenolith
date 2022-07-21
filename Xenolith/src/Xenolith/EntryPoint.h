#pragma once

#ifdef XL_PLATFORM_WINDOWS

extern Xenolith::Application* Xenolith::CreateApplication();

int main(int argc, char** argv)
{ 
	Xenolith::Log::Init();

	XL_CORE_TRACE("Initalized Log!");
	XL_INFO("Testing client logger");

	auto app = Xenolith::CreateApplication();
	app->Run();
	delete app;
}


#endif

