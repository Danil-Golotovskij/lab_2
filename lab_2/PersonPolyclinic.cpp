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
    cout << "Введите ФИО: ";
    cin >> fio;
    while (cin.get() != '\n');
}

void PersonPolyclinic::SetAge() {
    cout << "Введите возраст: ";
    cin >> age;
    while (cin.get() != '\n');
}

void PersonPolyclinic::SetPol() {
    cout << "Введите пол: ";
    cin >> pol;
    while (cin.get() != '\n');
}

//--------------------------------------------------------------------

void PersonPolyclinic::Display() {
    cout << "ФИО: " << GetFio() << endl;
    cout << "год рождения: " << GetAge() << endl;
    cout << "пол: " << GetPol() << endl;
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

