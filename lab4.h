#ifndef LAB4_H
#define LAB4_H

#include <string>
using namespace std;

struct Animal 
{
    string name;
    string animalClass;
    string nickname;
};

void fillAnimal(Animal& animal);
void displayAnimal(const Animal& animal);
void makeSound(const Animal& animal);

#endif 