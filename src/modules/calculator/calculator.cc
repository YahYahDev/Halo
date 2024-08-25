#include "calculator.hh"

/*  TODO:

    
    1): Make buttons have a default texture to look better.

    2): Make buttons have text drawn on them.
    
*/


class Button{

    private:
    
    // Used to set the color of the button when its being hovered over.
    void SetHoverColor(){
        
        buffercolor = (Color){defaultcolor.r - 25, defaultcolor.g - 25, defaultcolor.b - 25, defaultcolor.a};
        
    }
    
    // VVV Used to define the location/size of the button.
    int x;
    int y; 
    int width;
    int height;
    
    // VVV Used as default color for button.
    Color defaultcolor;
    
    // VVV Text configuration for display on the button.
    const char* text;
    Color textcolor;
    int textsize;
    
    // VVV These are used as the active color for the button.
    Color buffercolor;
    Color buffertextcolor;
    
    
    public:
    
    Button(int x, int y, int width, int height, const char* text, Color defaultcolor, Color textcolor, int textsize)
    : x(x), y(y), width(width), height(height), text(text), defaultcolor(defaultcolor), textcolor(textcolor), textsize(textsize){}
    
    
    bool Active(){
        /*  This function checks if your hovering over a button,
            if it is over the button then it returns true otherwise
            returns false.
        */
        DrawRectangle(x, y, width, height, buffercolor);
        
        // VVV Draw text to put on the button.
        DrawText(text, x + 10, y + 10, textsize, textcolor);
        Vector2 MousePos = GetMousePosition();
        if(MousePos.x <= x + width and MousePos.x >= x){
            if(MousePos.y <= y + height and MousePos.y >= y){
            
            SetHoverColor();
            
            return true;
            
            } else {
            
                ResetColor();
            
                return false;
            }
        } else {
        
            ResetColor();
            
            return false;
        }
        
        ResetColor();
        
        return false;
    }
    
    
    void SetColor(Color color) {buffercolor = color;}

    
    void ResetColor(void) {buffercolor = defaultcolor;}
};




/* TODO:
    
    1): Make a keypad of numbers for the calculator to use for input/output.
    
    2): ???

*/


// VVV This function is used to initalize values of a 'Calculator' object.
Calculator::Calculator(){}


// Takes button and assigns a function to call if it is pressed.
#define HandleButtonPress(button, action) \
        if(button.Active() and IsMouseButtonDown(MOUSE_BUTTON_LEFT)) { \
            action; \
        }\


void Calculator::Run(Camera2D cam){

    
    Button Num1(25, 25, 75, 75, "Test", (Color){55, 55, 150, 255}, RAYWHITE, 10);

    
    while(!WindowShouldClose()) {
    
        BeginDrawing();
        ClearBackground(GetColor(0x181818));
        
        BeginMode2D(cam);
        
        // VVV sees if button is being hovered over and if left click is being held.
        HandleButtonPress(Num1, Num1.SetColor((Color){255, 55, 255, 255}));
        
        
        // VVV End drawing calls.
        EndMode2D();
        EndDrawing();
        
    }

}
