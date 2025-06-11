#pragma once
#include "main.h"
class People
{
    private:
        string name;
    public:
        People(){}
        People(const string& name) : name(name) {}
        virtual string showInfo() const {
            string s = "name: " + name + "\n";
        }
        virtual int DangerLevel(string crime) {
            return 0;
        }
        ~People() {}

};

