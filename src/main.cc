#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


#include "libs/headers/raylib/raylib.h"
#include "common.hh"
#include "modules/calculator/calculator.hh"


int main(){
    
    // VVV Initalize the window and max fps.
    InitWindow(512, 512, "Halo");
    SetTargetFPS(60);
    
    
    Camera2D camera = {0};
    
    camera.target = (Vector2){0.0, 0.0};
    camera.offset = (Vector2){256.0, 256.0};
    camera.zoom = 1.0;
    camera.rotation = 0.0;
    
    // VVV Make a 'Calculator' object.
    Calculator Calc;

    Calc.Run(camera);
    
    
    // VVV Close the window if we have escaped the loop.
    CloseWindow();

    return 0;
}
