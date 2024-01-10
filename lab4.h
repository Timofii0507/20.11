#ifndef LAB4_H
#define LAB4_H

#include <string>

using namespace std;

struct Boiler 
{
    string brand;
    string color;
    double power;
    double capacity;
    int heating_temperature;
    void displayInfo();
};

#endif
