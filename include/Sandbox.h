#pragma once

#include "Application.h"

class Sandbox: public Proto::Application
{

    public:
    Sandbox(){};
    ~Sandbox(){};

    void Run()
    {
        while(1){}
    }
    private:
};

Proto::Application * Proto::CreateApplication()
{
    return new Sandbox();
}