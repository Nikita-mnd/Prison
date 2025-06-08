#pragma once
#include "main.h"
class People
{
    private:
        string name;
    public:
        People(const string& name) : name(name) {}
        virtual string showInfo() const {
            string s = "name: " + name + "\n";
        }
    
};

