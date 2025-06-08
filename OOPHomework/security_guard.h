#include "prisoners.h"

class Guard : public People {
    string rank;
    string name;
public:
    Guard(const string& name, const string& rank) : People(name), rank(rank) {}
    void showInfo() const override {
        cout << "Security: " << name << ", rank: " << rank <<  endl;
    }
};
