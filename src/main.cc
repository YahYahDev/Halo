#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


#include "libs/headers/raylib/raylib.h"
#include "libs/headers/raylib/rlgl.h"
#include "libs/headers/raylib/raymath.h"
#include "common.hh"




void StartLoop() {

    BeginDrawing();
    ClearBackground(GetColor(0x181818));
}


void EndLoop() {

    EndDrawing();
    
}


void Render() {

    rlBegin(RL_TRIANGLES);    
    
    rlEnd();
}




int main(){

    InitWindow(512, 512, "Halo");
    
    SetTargetFPS(60);
    
    while(!WindowShouldClose()) {
    
        StartLoop(); // Start the loop.
        
    
        Render();
    
    
        EndLoop(); // End the loop, deinitalize drawing calls ect.
    
    
    }
    
    CloseWindow();

    return 0;
}
