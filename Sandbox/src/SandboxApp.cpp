#include <Xenolith.h>
class Sandbox : public Xenolith::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}

};


Xenolith::Application* Xenolith::CreateApplication()
{
	return new Sandbox();
}