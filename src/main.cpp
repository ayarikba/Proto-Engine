#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>


int main()
{
    glfwInit();
    
    if (!glfwInit())
    {
        glfwTerminate();
        return -1;
    }

    GLFWwindow* window = glfwCreateWindow(800, 600, "OpenGL", nullptr, nullptr);



    while (1)
    {
    }
    

    //glfwDestroyWindow(window);
    //glfwTerminate();
}