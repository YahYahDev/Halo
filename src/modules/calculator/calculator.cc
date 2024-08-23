#include "calculator.hh"

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
            buffercolor = RAYWHITE;
            return true;
            } else {
                buffercolor = defaultcolor;
                return false;
            }
        } else {
            buffercolor = defaultcolor;
            return false;
        }
        return false;
    }

};


// VVV This function is used to initalize values of a 'Calculator' object.
Calculator::Calculator(){

    Camera2D camera = {0};
    camera.target = (Vector2){256.0f ,256.0f};
    camera.offset = (Vector2){256.0f ,256.0f};
    camera.zoom = 1.0f;
    camera.rotation = 0.0f;
    
}


void Calculator::Run(Camera2D cam){

    Button test(10, 10, 10, 10, "Test", GetColor(0x1f1f1f), RAYWHITE);
    
    while(!WindowShouldClose()) {
    
        BeginDrawing();
        ClearBackground(GetColor(0x181818));
        
        BeginMode2D(cam);
        
        if(test.Active()){
            
            
        }
    
        EndMode2D();
        
        DrawText("Hello", 10, 10, 14, RAYWHITE);
        EndDrawing();
        
    }

}
