x86_64-w64-mingw32-g++ -o bin/windows/halo src/main.cc -static -Lsrc/libs/windows/raylib -lraylib -lopengl32 -lgdi32 -lwinmm

wine bin/windows/halo.exe
