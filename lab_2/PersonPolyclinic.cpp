#include "PersonPolyclinic.h"

PersonPolyclinic::PersonPolyclinic(int age) {
    this->Fio = "-";
    this->age = age;
    this->pol = "-";
}

PersonPolyclinic::PersonPolyclinic(string Fio, int age, string pol) {
    this->Fio = Fio;
    this->age = age;
    this->pol = pol;
}

//--------------------------------------------------------------------

void PersonPolyclinic::setFio() {
    cout << "������� ���: ";
    cin >> Fio;
    while (cin.get() != '\n');
}

void PersonPolyclinic::setAge() {
    cout << "������� �������: ";
    cin >> age;
    while (cin.get() != '\n');
}

void PersonPolyclinic::setPol() {
    cout << "������� ���: ";
    cin >> pol;
    while (cin.get() != '\n');
}

//--------------------------------------------------------------------

string PersonPolyclinic::getFio() {
    return Fio;
}

int PersonPolyclinic::getAge() {
    return age;
}

string PersonPolyclinic::getPol() {
    return pol;
}

