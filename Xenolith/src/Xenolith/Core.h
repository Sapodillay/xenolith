#pragma once

#ifdef XL_PLATFORM_WINDOWS
	#ifdef XL_BUILD_DLL
		#define XENOLITH_API __declspec(dllexport)
	#else	
		#define XENOLITH_API __declspec(dllimport)
	#endif

#else
	#error Xenolith currently only supports Windows

#endif

#define BIT(x) (1 << x)