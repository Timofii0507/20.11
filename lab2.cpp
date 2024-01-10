#include <iostream>
#include <Windows.h>
#include "lab2.h"
using namespace std;

void Iron::displayInfo() 
{
    cout << "�����: " << brand << endl;
    cout << "������: " << model << endl;
    cout << "����: " << color << endl;
    cout << "̳������� �����������: " << min_temperature << " �C" << endl;
    cout << "����������� �����������: " << max_temperature << " �C" << endl;
    cout << "������ ����: " << (steam_delivery ? "���" : "ͳ") << endl;
    cout << "���������: " << power << " ��" << endl;
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Iron myIron;
    cout << "������ ����� ������: ";
    getline(cin, myIron.brand);
    cout << "������ ������ ������: ";
    getline(cin, myIron.model);
    cout << "������ ���� ������: ";
    getline(cin, myIron.color);
    cout << "������ �������� ����������� ������ (� �C): ";
    cin >> myIron.min_temperature;
    cout << "������ ����������� ����������� ������ (� �C): ";
    cin >> myIron.max_temperature;
    cout << "�� � ������ ���� (1 - ���, 0 - ͳ): ";
    cin >> myIron.steam_delivery;
    cout << "������ ��������� ������ (� ��): ";
    cin >> myIron.power;
    cout << "\n���������� ��� ������:\n";
    myIron.displayInfo();
    return 0;
}
