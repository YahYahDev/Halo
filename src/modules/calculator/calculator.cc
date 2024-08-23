#include "calculator.hh"

#include "../../libs/headers/raylib/raylib.h"

// VVV This function is used to initalize values of a 'Calculator' object.
Calculator::Calculator(){

}

// VVV This function is used to run the gui.
void Calculator::RenderGui(){
    DrawCube((Vector3){0.0, 0.0, 0.0}, 5.0, 5.0, 5.0, (Color){55, 255, 55, 255});
}
