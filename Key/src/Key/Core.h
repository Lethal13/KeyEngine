#pragma once

#ifdef KEY_PLATFORM_WINDOWS
	#ifdef KEY_BUILD_DLL
		#define KEY_API __declspec(dllexport)
	#else
		#define KEY_API __declspec(dllimport)
	#endif
#else
	#error Key Supports only Windows!
#endif //KEY PLATFORM WINDOWS