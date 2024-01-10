#ifndef LAB_H
#define LAB_H

#include <string>

using namespace std;

struct WashingMachine 
{
    string brand;
    string color;
    double width;
    double length;
    double height;
    double power;
    int spin_speed;
    int heating_temperature;
    void displayInfo();
};

#endif
