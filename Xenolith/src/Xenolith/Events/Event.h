#pragma once


#include "Xenolith/Core.h"

#include <string>
#include <functional>

namespace Xenolith {



	enum class EventType
	{
		None = 0,
		WindowCLose, WindowResize, WindowFocus, WindowLostFocus, WindowMoved,
		AppTick, AppUpdate, AppRender,
		KeyPressed, KeyReleased,
		MouseButtonPressed, MouseButtonReleased, MouseMoved, MouseScrolled
	};

	enum Event Category
	{
		None = 0,

	};






}