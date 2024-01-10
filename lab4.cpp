#include <iostream>
#include <Windows.h>
#include "lab4.h"
using  namespace std;

void fillAnimal(Animal& animal) 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "¬вед≥ть ≥м'€ тварини: ";
    getline(cin, animal.name);
    cout << "¬вед≥ть клас тварини: ";
    getline(cin, animal.animalClass);
    cout << "¬вед≥ть кличку тварини: ";
    getline(cin, animal.nickname);
}

void displayAnimal(const Animal& animal) 
{
    cout << "≤нформац≥€ про тварину:\n";
    cout << "≤м'€: " << animal.name << "\n";
    cout << " лас: " << animal.animalClass << "\n";
    cout << " личка: " << animal.nickname << "\n";
}

void makeSound(const Animal& animal) 
{
    if (animal.name == "собака") 
    {
        cout << "√ав!" << endl;
    }
    else if (animal.name == "к≥т") 
    {
        cout << "ћ€у!" << endl;
    }
    else if (animal.name == "птах") 
    {
        cout << "÷в≥р≥нь!" << endl;
    }
    else 
    {
        cout << "Ќев≥домо €кий звук видаЇ ц€ тварина" << endl;
    }
}
