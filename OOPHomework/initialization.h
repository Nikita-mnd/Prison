#pragma once
#include "main.h"
class Initialization 
{
public:
    string RandomName() {
        const string names[] = { "Sergey", "Maksim", "Kolya", 
            "Ivan", "Petr", "Misha", "Nikita" , "Kirill", "Matvey", "Andrey",
        "Dmitry", "German"};
        return names[rand() % 12];
    }

    int RandomID() {
        return rand() % 10000000;
    }

    string RandomCrime() {
        const string crime[] = { "murder", "theft", "burglary",
            "hijacking", "abduction", "blackmail", "attempt" , "fraud", 
            "undermining", "terrorist act" };
        return crime[rand() % 10];
    }
};










