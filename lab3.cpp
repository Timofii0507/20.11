#include <iostream>
#include <Windows.h>
#include "lab3.h"
using namespace std;

void Boiler::displayInfo() 
{
    cout << "Бренд: " << brand << endl;
    cout << "Колір: " << color << endl;
    cout << "Потужність: " << power << " Вт" << endl;
    cout << "Об'єм: " << capacity << " л" << endl;
    cout << "Температура нагріву: " << heating_temperature << " °C" << endl;
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Boiler myBoiler;
    cout << "Введіть бренд бойлера: ";
    getline(cin, myBoiler.brand);
    cout << "Введіть колір бойлера: ";
    getline(cin, myBoiler.color);
    cout << "Введіть потужність бойлера (в Вт): ";
    cin >> myBoiler.power;
    cout << "Введіть об'єм бойлера (в л): ";
    cin >> myBoiler.capacity;
    cout << "Введіть температуру нагріву бойлера (в °C): ";
    cin >> myBoiler.heating_temperature;
    cout << "\nІнформація про бойлер:\n";
    myBoiler.displayInfo();
    return 0;
}
