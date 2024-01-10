#include <iostream>
#include <Windows.h>
#include "lab2.h"
using namespace std;

void Iron::displayInfo() 
{
    cout << "Бренд: " << brand << endl;
    cout << "Модель: " << model << endl;
    cout << "Колір: " << color << endl;
    cout << "Мінімальна температура: " << min_temperature << " °C" << endl;
    cout << "Максимальна температура: " << max_temperature << " °C" << endl;
    cout << "Подача пари: " << (steam_delivery ? "Так" : "Ні") << endl;
    cout << "Потужність: " << power << " Вт" << endl;
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Iron myIron;
    cout << "Введіть бренд праски: ";
    getline(cin, myIron.brand);
    cout << "Введіть модель праски: ";
    getline(cin, myIron.model);
    cout << "Введіть колір праски: ";
    getline(cin, myIron.color);
    cout << "Введіть мінімальну температуру праски (в °C): ";
    cin >> myIron.min_temperature;
    cout << "Введіть максимальну температуру праски (в °C): ";
    cin >> myIron.max_temperature;
    cout << "Чи є подача пари (1 - Так, 0 - Ні): ";
    cin >> myIron.steam_delivery;
    cout << "Введіть потужність праски (в Вт): ";
    cin >> myIron.power;
    cout << "\nІнформація про праску:\n";
    myIron.displayInfo();
    return 0;
}
