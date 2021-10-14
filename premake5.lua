include "Dependencies.lua"

workspace "AtlasTemplate"
	architecture "x86_64"
	startproject "AtlasTemplate"

	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}

	flags
	{
		"MultiProcessorCompile"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

group "Dependencies"
	include "AtlasTemplate/vendor/Atlas/Atlas/vendor/GLFW"
	include "AtlasTemplate/vendor/Atlas/Atlas/vendor/Glad"
	include "AtlasTemplate/vendor/Atlas/Atlas/vendor/imgui"
group ""

include "AtlasTemplate/vendor/Atlas/Atlas"
include "AtlasTemplate"
