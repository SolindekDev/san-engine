# Compile engine
c++ -c -g src/san/window/Window.cpp -o src/san/window/Window.o -lglfw -lGLU -lGL -lXrandr -lXxf86vm -lXi -lXinerama -lX11 -lrt -ldl -lGLEW -lglut -I./include/
c++ -c -g src/san/window/WindowOptions.cpp -o src/san/window/WindowOptions.o -lglfw -lGLU -lGL -lXrandr -lXxf86vm -lXi -lXinerama -lX11 -lrt -ldl -lGLEW -lglut -I./include/
c++ -c -g src/san/callbacks/FramebufferSizeCallback.cpp -o src/san/callbacks/FramebufferSizeCallback.o -lglfw -lGLU -lGL -lXrandr -lXxf86vm -lXi -lXinerama -lX11 -lrt -ldl -lGLEW -lglut -I./include/
c++ -c -g src/san/callbacks/ErrorCallback.cpp -o src/san/callbacks/ErrorCallback.o -lglfw -lGLU -lGL -lXrandr -lXxf86vm -lXi -lXinerama -lX11 -lrt -ldl -lGLEW -lglut -I./include/

# Compile and ~~link~~ src/main.cpp with lib/san.o
c++ src/main.cpp src/san/window/Window.o src/san/window/WindowOptions.o src/san/callbacks/ErrorCallback.o src/san/callbacks/FramebufferSizeCallback.o -o app -lglfw -lGLU -lGL -lXrandr -lXxf86vm -lXi -lXinerama -lX11 -lrt -ldl -lGLEW -lglut -I./include/

# Start application
./app 
