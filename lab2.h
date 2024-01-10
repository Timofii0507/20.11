#ifndef LAB2_H
#define LAB2_H

#include <string>

using namespace std;

struct Iron 
{
    string brand;
    string model;
    string color;
    int min_temperature;
    int max_temperature;
    bool steam_delivery;
    double power;
    void displayInfo();
};

#endif
