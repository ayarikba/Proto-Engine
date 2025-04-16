#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>
#include "Sandbox.h"

int main()
{
    Sandbox * sandbox = new Sandbox();
    sandbox->Run();

    glfwInit();
    
    if (!glfwInit())
    {
        glfwTerminate();
        return -1;
    }

    GLFWwindow* window = glfwCreateWindow(800, 600, "OpenGL", nullptr, nullptr); // Create window 



    while (1)
    {
    }
    

    //glfwDestroyWindow(window);
    //glfwTerminate();

    delete sandbox ;

    return 0 ;
}