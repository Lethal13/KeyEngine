#pragma once

#ifdef KEY_PLATFORM_WINDOWS

extern Key::Application* Key::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Key::CreateApplication();
	app->Run();
	delete app;
}

#endif