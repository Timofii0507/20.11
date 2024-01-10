#include <iostream>
#include "lab.h"
#include <Windows.h>
using namespace std;

void WashingMachine::displayInfo()
{
    cout << "�����: " << brand << endl;
    cout << "����: " << color << endl;
    cout << "������: " << width << " x " << length << " x " << height << " ��" << endl;
    cout << "���������: " << power << " ��" << endl;
    cout << "�������� ���������: " << spin_speed << " ��/��" << endl;
    cout << "����������� ���������: " << heating_temperature << " �C" << endl;
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    WashingMachine myWashingMachine;
    cout << "������ ����� ������� ������: ";
    getline(cin, myWashingMachine.brand);
    cout << "������ ���� ������� ������: ";
    getline(cin, myWashingMachine.color);
    cout << "������ ������ ������� ������ (� ��): ";
    cin >> myWashingMachine.width;
    cout << "������ ������� ������� ������ (� ��): ";
    cin >> myWashingMachine.length;
    cout << "������ ������ ������� ������ (� ��): ";
    cin >> myWashingMachine.height;
    cout << "������ ��������� ������� ������ (� ��): ";
    cin >> myWashingMachine.power;
    cout << "������ �������� ��������� ������� ������ (� ��/��): ";
    cin >> myWashingMachine.spin_speed;
    cout << "������ ����������� ��������� ������� ������ (� �C): ";
    cin >> myWashingMachine.heating_temperature;
    cout << "\n���������� ��� ������� ������:\n";
    myWashingMachine.displayInfo();
    return 0;
}
