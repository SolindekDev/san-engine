#ifndef __SAN_ENGINE_H
#define __SAN_ENGINE_H

#include <iostream>
#include <GLFW/glfw3.h>
// #include <GL/glew.h>

#define SAN_DEFAULT_OPTIONS NULL

class SanWindowOptions {
public:
    int width; 
    int height; 
    std::string title;

    SanWindowOptions(int width, int height, std::string title);
};

class SanWindow {
public:
    // SanRender render;

    int width; 
    int height; 
    std::string title;

    GLFWwindow* window;

    SanWindow(SanWindowOptions* options);
    
    void windowInit();

    void windowLoop();

    void windowInitFailed();

    void windowCreateFailed();

    void startLoop();

    void setCallbacks();

    void initGL();
    
};

void FramebufferSizeCallback(GLFWwindow* window, int width, int height);

void ErrorCallback(int error_code, const char* description);

void KeyboardCallback(GLFWwindow* window, int key, int scancode, int action, int mods);

void MouseClickCallback(GLFWwindow* window, int button, int action, int mods);

void MouseMoveCallback(GLFWwindow* window, double x, double y);

#endif /* __SAN_ENGINE_H */