#include "../libs/raylib/src/raylib.h"
#include "helper.hpp"

#define RAYGUI_IMPLEMENTATION
#include "../libs/raygui/src/raygui.h"

#include "main.hpp"

// Window setup
int screenWidth = 720;
const int screenHeight = 480;
bool windowShouldClose = false;

// Loading resources
std::string assetPathPrefix = "../assets/";

void init_app() {
    if (std::filesystem::exists("../assets") == false) {
        assetPathPrefix = "assets/";
    }
    
    // Load textures here
    
    
    // InitAudioDevice();
    // Load sounds/music here
}

bool app_loop() {
    float relDt = GetFrameTime() * 60.0f; // Calculate delta time in relation to 60 frames per second
    
    BeginDrawing();
        ClearBackground(BLACK);
    EndDrawing();
    
    return !windowShouldClose;
}

void deinit_app() {
    // Unload sounds/music here
    // CloseAudioDevice();
}