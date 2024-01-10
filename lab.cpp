#include <iostream>
#include "lab.h"
#include <Windows.h>
using namespace std;

void WashingMachine::displayInfo()
{
    cout << "Бренд: " << brand << endl;
    cout << "Колір: " << color << endl;
    cout << "Розміри: " << width << " x " << length << " x " << height << " см" << endl;
    cout << "Потужність: " << power << " Вт" << endl;
    cout << "Швидкість віджимання: " << spin_speed << " об/хв" << endl;
    cout << "Температура нагрівання: " << heating_temperature << " °C" << endl;
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    WashingMachine myWashingMachine;
    cout << "Введіть бренд пральної машини: ";
    getline(cin, myWashingMachine.brand);
    cout << "Введіть колір пральної машини: ";
    getline(cin, myWashingMachine.color);
    cout << "Введіть ширину пральної машини (в см): ";
    cin >> myWashingMachine.width;
    cout << "Введіть довжину пральної машини (в см): ";
    cin >> myWashingMachine.length;
    cout << "Введіть висоту пральної машини (в см): ";
    cin >> myWashingMachine.height;
    cout << "Введіть потужність пральної машини (в Вт): ";
    cin >> myWashingMachine.power;
    cout << "Введіть швидкість віджимання пральної машини (в об/хв): ";
    cin >> myWashingMachine.spin_speed;
    cout << "Введіть температуру нагрівання пральної машини (в °C): ";
    cin >> myWashingMachine.heating_temperature;
    cout << "\nІнформація про пральну машину:\n";
    myWashingMachine.displayInfo();
    return 0;
}
