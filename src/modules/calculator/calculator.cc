#include "calculator.hh"

class Button{

    private:
    
    int x;
    int y; 
    int width;
    int height;
    const char* title;
    Color color;
    
    public:
    
    Button(int x, int y, int width, int height, const char* title, Color color);

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

    
    while(!WindowShouldClose()) {
    
        BeginDrawing();
        ClearBackground(GetColor(0x181818)); 
        
        BeginMode2D(cam);
        
        
        DrawRectangle(100, 100, 100, 100, RAYWHITE);
    
        EndMode2D();
        
        DrawText("Hello", 10, 10, 14, RAYWHITE);
        EndDrawing();
        
    }

}
