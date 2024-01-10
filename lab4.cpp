#include <iostream>
#include <Windows.h>
#include "lab4.h"
using  namespace std;

void fillAnimal(Animal& animal) 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "������ ��'� �������: ";
    getline(cin, animal.name);
    cout << "������ ���� �������: ";
    getline(cin, animal.animalClass);
    cout << "������ ������ �������: ";
    getline(cin, animal.nickname);
}

void displayAnimal(const Animal& animal) 
{
    cout << "���������� ��� �������:\n";
    cout << "��'�: " << animal.name << "\n";
    cout << "����: " << animal.animalClass << "\n";
    cout << "������: " << animal.nickname << "\n";
}

void makeSound(const Animal& animal) 
{
    if (animal.name == "������") 
    {
        cout << "���!" << endl;
    }
    else if (animal.name == "��") 
    {
        cout << "���!" << endl;
    }
    else if (animal.name == "����") 
    {
        cout << "�����!" << endl;
    }
    else 
    {
        cout << "������� ���� ���� ���� �� �������" << endl;
    }
}
