#pragma once
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/fmt/ostr.h"

namespace Xenolith {


	class XENOLITH_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};

}

//Core log macros
#define XL_CORE_ERROR(...)  ::Xenolith::Log::GetCoreLogger()->error(__VA_ARGS__)
#define XL_CORE_INFO(...)   ::Xenolith::Log::GetCoreLogger()->info(__VA_ARGS__)
#define XL_CORE_WARN(...)   ::Xenolith::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define XL_CORE_TRACE(...)  ::Xenolith::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define XL_CORE_FATAL(...)  ::Xenolith::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client log macros
#define XL_ERROR(...)  ::Xenolith::Log::GetClientLogger()->error(__VA_ARGS__)
#define XL_INFO(...)   ::Xenolith::Log::GetClientLogger()->info(__VA_ARGS__)
#define XL_WARN(...)   ::Xenolith::Log::GetClientLogger()->warn(__VA_ARGS__)
#define XL_TRACE(...)  ::Xenolith::Log::GetClientLogger()->trace(__VA_ARGS__)
#define XL_FATAL(...)  ::Xenolith::Log::GetClientLogger()->fatal(__VA_ARGS__)