#include "PersonPolyclinic.h"

PersonPolyclinic::PersonPolyclinic() {
    this->fio = "---";
    this->age = 0;
    this->pol = "---";
}

PersonPolyclinic::PersonPolyclinic(int age) {
    this->fio = "---";
    this->age = age;
    this->pol = "---";
}

PersonPolyclinic::PersonPolyclinic(string fio, int age, string pol) {
    this->fio = fio;
    this->age = age;
    this->pol = pol;
}

PersonPolyclinic::~PersonPolyclinic() {
}

//--------------------------------------------------------------------

void PersonPolyclinic::Read() {
    SetFio();
    SetAge();
    SetPol();
}

void PersonPolyclinic::SetFio() {
    cout << "������� ���: ";
    cin >> fio;
    while (cin.get() != '\n');
}

void PersonPolyclinic::SetAge() {
    cout << "������� �������: ";
    cin >> age;
    while (cin.get() != '\n');
}

void PersonPolyclinic::SetPol() {
    cout << "������� ���: ";
    cin >> pol;
    while (cin.get() != '\n');
}

//--------------------------------------------------------------------

void PersonPolyclinic::Display() {
    cout << "���: " << GetFio() << endl;
    cout << "��� ��������: " << GetAge() << endl;
    cout << "���: " << GetPol() << endl;
}

string PersonPolyclinic::GetFio() {
    return fio;
}

int PersonPolyclinic::GetAge() {
    return age;
}

string PersonPolyclinic::GetPol() {
    return pol;
}

