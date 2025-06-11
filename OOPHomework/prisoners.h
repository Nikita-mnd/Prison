
#include "People.h"
#include "initialization.h"

class Prisoner:public People{
private:
    Initialization init;
    int prisonerID = init.RandomID();
    string name = init.RandomName();
    int age;
    bool alive;
    string crime = init.RandomCrime();
     
public:

    Prisoner(){}
    Prisoner(const string& name, int id) : People(name), prisonerID(id) {}
    string showInfo() const override {
      string s = "Prisoner: " + name + ", ID: " + to_string(prisonerID)
            + ", crime: " + crime;
        return s;
    }
    int DangerLevel(string crime) {



    }
    ~Prisoner() {}

};

