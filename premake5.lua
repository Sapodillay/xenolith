workspace "Xenolith"
	architecture "x64"

	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}


outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "Xenolith"
	location "Xenolith"
	kind "SharedLib"
	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	pchheader "xlpch.h"
	pchsource "Xenolith/src/xlpch.cpp"

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs
	{
		"%{prj.name}/src",
		"%{prj.name}/vendor/spdlog/include"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

		defines
		{
			"XL_PLATFORM_WINDOWS",
			"XL_BUILD_DLL"
		}
		
		postbuildcommands
		{
			("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/Sandbox")
		}

	filter "configurations:Debug"
		defines "XL_DEBUG"
		symbols "On"

	filter "configurations:Release"
		defines "XL_RELEASE"
		optimize "On"

	filter "configurations:Dist"
		defines "XL_DIST"
		optimize "On"

project "Sandbox"
	location "Sandbox"
	kind "ConsoleApp"

	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs
	{
		"Xenolith/vendor/spdlog/include",
		"Xenolith/src"
	}

	links
	{
		"Xenolith"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

		defines
		{
			"XL_PLATFORM_WINDOWS"
		}

	filter "configurations:Debug"
		defines "XL_DEBUG"
		symbols "On"

	filter "configurations:Release"
		defines "XL_RELEASE"
		optimize "On"

	filter "configurations:Dist"
		defines "XL_DIST"
		optimize "On"