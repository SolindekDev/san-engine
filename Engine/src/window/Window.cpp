#include <san/san-engine.h>

SanWindow::SanWindow(SanWindowOptions* options) {
    if (options == NULL) {
        this->width = 800;
        this->height = 800;
        this->title = "This is default window title";
    } else {
       this->width = options->width;
       this->height = options->height;
       this->title = options->title;
    }   

    this->windowInit();
}

void SanWindow::windowLoop() {
    // this->render->renderMain();
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.8, 0.8, 0.1, 1.0);

    glfwSetTime(0);
    glfwSwapBuffers(window);
    glfwPollEvents();
}

void SanWindow::setCallbacks() {
    glfwSetFramebufferSizeCallback(this->window, FramebufferSizeCallback); // Framebuffer size
    glfwSetKeyCallback(this->window, KeyboardCallback); // Keyboard
    glfwSetMouseButtonCallback(this->window, MouseClickCallback); // Mouse click
    glfwSetCursorPosCallback(this->window, MouseMoveCallback); // Mouse move

    glfwSetErrorCallback(ErrorCallback); // Error
}

void SanWindow::windowInitFailed() {
    std::cout << "ERROR: Failed while initializing GLFW" << std::endl;
    exit(EXIT_FAILURE);
}

void SanWindow::windowCreateFailed() {
    std::cout << "ERROR: Failed while creating window" << std::endl;
    glfwTerminate();
    exit(EXIT_FAILURE);
}

void SanWindow::startLoop() {
    while (!glfwWindowShouldClose(this->window)) 
        this->windowLoop();

    glfwDestroyWindow(this->window);
    glfwTerminate();
    exit(EXIT_SUCCESS);
}

void SanWindow::initGL() {
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void SanWindow::windowInit() {
    if (!glfwInit())
        this->windowInitFailed();

    this->window = glfwCreateWindow(
        this->width, this->height, this->title.c_str(), NULL, NULL);

    if (!this->window)
        this->windowCreateFailed();

    glfwMakeContextCurrent(window);
    
    this->initGL();
    this->setCallbacks();
}
