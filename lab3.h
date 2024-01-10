#ifndef LAB3_H
#define LAB3_H

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
