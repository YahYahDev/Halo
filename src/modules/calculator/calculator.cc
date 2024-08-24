#include "calculator.hh"

/*  TODO:

    1): Make buttons have a call back functions for when they are clicked.
    
    2): Make buttons color get darker when they are hovered over.
    
    3): Make buttons have a default texture to look better.


*/

class Button{

    private:
    
    int x;
    int y; 
    int width;
    int height;
    Color defaultcolor;
    Color buffercolor;
    const char* text;
    Color textcolor;
    public:
    
    Button(int x, int y, int width, int height, const char* text, Color defaultcolor, Color textcolor)
    : x(x), y(y), width(width), height(height), text(text), defaultcolor(defaultcolor), textcolor(textcolor){}
    
    
    bool Active(){
        /*  This function checks if your hovering over a button,
            if it is over the button then it returns true otherwise
            returns false.
        */
        DrawRectangle(x, y, width, height, buffercolor);
        Vector2 MousePos = GetMousePosition();
        if(MousePos.x <= x + width && MousePos.x >= x){
            if(MousePos.y <= y + height && MousePos.y >= y){
            return true;
            } else {
                return false;
            }
        } else {
            return false;
        }
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


void Calculator::Run(Camera2D cam){
    
    Button Num1(25, 25, 75, 75, "Test", (Color){255, 55, 55, 255}, RAYWHITE);
    
    while(!WindowShouldClose()) {
    
        BeginDrawing();
        ClearBackground(GetColor(0x181818));
        
        BeginMode2D(cam);
        
        // VVV sees if button is being hovered over and if left click is being held.
        if(Num1.Active() && IsMouseButtonDown(MOUSE_BUTTON_LEFT)){
            // Set the button color.
            Num1.SetColor((Color){55, 255, 55, 255});
        } else {
            // Reset the button color.
            Num1.ResetColor();
        }
    
        EndMode2D();
        
        DrawText("Hello", 10, 10, 14, RAYWHITE);
        EndDrawing();
        
    }

}
