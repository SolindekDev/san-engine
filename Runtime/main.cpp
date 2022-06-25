// This file is created for testing

#include <san/san-engine.h>

int main(int argc, char**) {
    SanWindowOptions* options = new SanWindowOptions(640, 400, "San game engine test");
    SanWindow* window = new SanWindow(options);

    window->startLoop();
} 