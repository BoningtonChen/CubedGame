workspace "CubedGame-Client"
   architecture "x64"
   configurations { "Debug", "Release", "Dist" }
   startproject "CubedGame-Client"

   -- Workspace-wide build options for MSVC
   filter "system:windows"
      buildoptions { "/EHsc", "/Zc:preprocessor", "/Zc:__cplusplus" }

-- Directories
outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"
WalnutNetworkingBinDir = "Walnut/Walnut-Modules/Walnut-Networking/vendor/GameNetworkingSockets/bin/%{cfg.system}/%{cfg.buildcfg}/"

include "Walnut/Build-Walnut-External.lua"

group "App"
    include "CubedGame-Common/Build-CubedGame-Common.lua"
    include "CubedGame-Client/Build-CubedGame-Client.lua"
group ""