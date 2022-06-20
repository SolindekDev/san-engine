#include <san/san-engine.h>

void ErrorCallback(int error_code, const char* description) {
    std::cout << "ERROR: [" << error_code << "]: " << description << std::endl;
    glfwTerminate();
    exit(EXIT_FAILURE);
}