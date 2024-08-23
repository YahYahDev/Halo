#ifndef CALCULATOR_MODULE
#define CALCULATOR_MODULE

#include "../../libs/headers/raylib/raylib.h"

/*  TODO:
    
    [BACK END]:
    
    1): Make a parser for expressions for ther calculator.
    
    2): Make a function to calculate the mathmatical output for a expression.

    
    [FRONT END]:
    
    1): Make a gui with buttons for each number and basic arithmatic.
    
    2): Make a window to express graphing calculator outputs.
    
    
*/

class Calculator{

    // Put internal state in private.
    private:

    Camera2D camera;
    
    
    
    // Put what you want exposed in public.
    public:
    
    // Define the constructor for class.
    Calculator();

    // Define run functions.
    void Run(Camera2D cam);
    
    
};


#endif
