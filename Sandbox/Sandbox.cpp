#include <Key.h>


class Sandbox : public Key::Application
{
public:

	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};


Key::Application* Key::CreateApplication()
{
	return new Sandbox();
}