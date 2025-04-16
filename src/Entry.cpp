
#ifdef _WIN32
#include <windows.h>

extern Proto::Application * Proto::CreateApplication();


int main(int argc, char **argv)
{
    auto sandbox = Proto::CreateApplication();
    sandbox->run();
    delete sandbox ; 
}

#else
#include <unistd.h>

extern Proto::Application * Proto::CreateApplication();


int main(int argc, char ** argv)
{
    auto sandbox = Proto::CreateApplication();
    sandbox->run();
    delete sandbox;
}



#endif