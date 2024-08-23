#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


#include "libs/headers/raylib/raylib.h"
#include "libs/headers/raylib/rlgl.h"
#include "libs/headers/raylib/raymath.h"
#include "common.hh"
#include "modules/calculator/calculator.hh"


int main(){
    
    // VVV Initalize the window and max fps.
    InitWindow(512, 512, "Halo");
    SetTargetFPS(60);
    
    // VVV Make a camera and set its default values.
    Camera camera = {
        
        .position = (Vector3){0.0, 20.0, 20.0},
        .target = (Vector3){0.0, 0.0, 0.0},
        .up = (Vector3){ 0.0f, 1.0f, 0.0f },
        .fovy = 90.0f,
        .projection = CAMERA_PERSPECTIVE
    };
    
    // VVV Make a 'Calculator' object.
    Calculator Calc;
    
    // VVV Make a while loop run as long as the window should not close.
    while(!WindowShouldClose()) {
        // VVV Initalize start of drawing calls.
        BeginDrawing();
        BeginMode3D(camera);
        ClearBackground(RAYWHITE);
        
        // VVV Execute 'Calc.RenderGui()'.
        Calc.RenderGui();
        
        // VVV End drawing calls.
        EndMode3D();
        EndDrawing();
    
    }
    
    // VVV Close the window if we have escaped the loop.
    CloseWindow();

    return 0;
}
