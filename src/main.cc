#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


#include "libs/headers/raylib/raylib.h"
#include "libs/headers/raylib/rlgl.h"
#include "libs/headers/raylib/raymath.h"
#include "common.hh"


void Render() {



}




int main(){

    InitWindow(512, 512, "Halo");
    
    SetTargetFPS(60);
    
    while(!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(GetColor(0x181818));
        
        Render();
        
        EndDrawing();
    
    
    }
    
    CloseWindow();

    return 0;
}
