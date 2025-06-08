#pragma once
#include "People.h"
class Director : public People 
{
private:
    string name;
public:
    Director(const std::string& name) : People(name) {}
    void showInfo() const override {
        cout << "Director of prison: " << name << endl;
    }



};

