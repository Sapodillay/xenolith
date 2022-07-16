#pragma once

#ifdef XL_PLATFORM_WINDOWS

extern Xenolith::Application* Xenolith::CreateApplication();

int main(int argc, char** argv)
{ 
	auto app = Xenolith::CreateApplication();
	app->Run();
	delete app;
}


#endif

