#include <san/san-engine.h>

void FramebufferSizeCallback(
    GLFWwindow* window, int width, int height) {
    std::cout << "callback" << std::endl;
    glViewport(0, 0, width, height);
}