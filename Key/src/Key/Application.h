#pragma once

#include "Core.h"


namespace Key 
{

	class KEY_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};


	//TO BE DEFINED IN CLIENT.
	Application* CreateApplication();
}

