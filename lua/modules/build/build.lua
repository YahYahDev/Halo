--[[
[NOTES]:

    1): This is made to be used on linux/unix systems.

    2): All paths for functions like 'SetExportPath' assume that your going from 'Build.path' directroy as root.
    
    
[TODO]:
    
]]


-- VVV this is the module to be exported to be exported.
local Build = {

    name = "",

    -- VVV Used to set base compiler command.
    compiler = "",

    -- VVV Used to set where the current path of the project is.
    path = "",
    
    
    export = "",
    
    
    librarys = "",
    
    
    sources = "",
    
    
    misc = "",
    
    SetName = function (self, name)
        self.name = name
    end,
    
    
    SetCompiler = function (self, compiler)
        self.compiler = compiler
    end,
    
    SetMisc = function (self, flags)
        self.misc = flags
    end,
    
    -- VVV Used to set where the binary/executable will be placed.
    SetExportPath = function (self, path)
        self.export = path
    end,
    
    -- VVV Used to set where librarys will be linked from.
    AddLibrarys = function (self, path)
        self.librarys = path
    end,

    -- VVV Used to set where source files will be sourced from.
    AddSourcesList = function (self, path)
        self.sources = path
    end,
    
    -- VVV Used to build the binary.
    Make = function (self, main)
        os.execute(self.compiler .. " -o " .. self.export .. self.name .. " " .. main .. " " .. self.sources .. " -L" .. self.librarys .. self.misc) 
    end,
}

return Build
