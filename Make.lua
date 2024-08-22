local Linux = require("lua.modules.build.build")
local Windows = require("lua.modules.build.build")

--[[
TODO:

    1): Automate the inclusion of libs in compilation.

]]




-- Define the compilers to use.
MINGW = "x86_64-w64-mingw32-gcc"
CC = "gcc"

Windows:SetName("Halo")
Windows:SetCompiler(MINGW)
Windows:SetExportPath("bin/windows/")
Windows:AddLibrarys("src/libs/windows") 
Windows:AddSourcesList("src/modules/*/*.c")
Windows:SetMisc("-lraylib -lopengl32 -lgdi32 -lwinmm")
Windows:Make("src/main.c")


Linux:SetName("Halo")
Linux:SetCompiler(CC)
Linux:SetExportPath("bin/linux/")
Linux:AddLibrarys("src/libs/linux") 
Linux:AddSourcesList("src/modules/*/*.c")
Linux:Make("src/main.c")


os.execute("wine ./bin/windows/halo.exe") 
