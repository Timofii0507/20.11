#include <iostream>
#include <Windows.h>
#include "lab3.h"
using namespace std;

void Boiler::displayInfo() 
{
    cout << "�����: " << brand << endl;
    cout << "����: " << color << endl;
    cout << "���������: " << power << " ��" << endl;
    cout << "��'��: " << capacity << " �" << endl;
    cout << "����������� ������: " << heating_temperature << " �C" << endl;
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Boiler myBoiler;
    cout << "������ ����� �������: ";
    getline(cin, myBoiler.brand);
    cout << "������ ���� �������: ";
    getline(cin, myBoiler.color);
    cout << "������ ��������� ������� (� ��): ";
    cin >> myBoiler.power;
    cout << "������ ��'�� ������� (� �): ";
    cin >> myBoiler.capacity;
    cout << "������ ����������� ������ ������� (� �C): ";
    cin >> myBoiler.heating_temperature;
    cout << "\n���������� ��� ������:\n";
    myBoiler.displayInfo();
    return 0;
}
