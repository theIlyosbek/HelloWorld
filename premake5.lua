workspace "HelloWorld"
		architecture "x64"

		configurations
		{
			"Debug",
			"Release"
		}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "HelloWorld"
	location "HelloWorld"
	kind "ConsoleApp"
	language "C++"

	targetdir ("bin/" ..outputdir .. "/%{prj.name}")
	objdir ("bin-int/" ..outputdir .. "/%{prj.name}")

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	filter "system:windows"
		cppdialect "c++20"
		staticruntime "On"
		systemversion "latest"

	filter "configurations:Debug"
		symbols "On"
	
	filter "configurations:Release"
		optimize "On"