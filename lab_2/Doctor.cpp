#include "Doctor.h"
#include "Patient.h"

Doctor::Doctor(string Fio, int age, string pol, int numberWorker,
    int salary, int workExperience, string specialization,string category) {
    this->specialization = specialization;
    this->category = category;
    Worker(salary, workExperience, numberWorker, Fio, age, pol);
}

//--------------------------------------------------------------------

void Doctor::ReadDoctor() {
    setFio();
    setAge();
    setPol();
    setSalary();
    setWorkExperience();
    setNumberWorker();
    setSpecialization();
    setCategory();
}

void Doctor::setSpecialization() {
    cout << "������� �������������: ";
    cin >> specialization;
    while (cin.get() != '\n');
}

void Doctor::setCategory() {
    cout << "������� ���������: ";
    cin >> category;
    while (cin.get() != '\n');
}

//--------------------------------------------------------------------

void Doctor::DisplayDoctor() {
    cout << "��� �������: " << getFio() << endl;
    cout << "��� �������� �������: " << getAge() << endl;
    cout << "��� �������: " << getPol() << endl;
    cout << "�������� �������: " << getSalary() << endl;
    cout << "�������� ���� �������: " << getWorkExperience() << endl;
    cout << "����� �������: " << getNumberWorker() << endl;
    cout << "������������� �������: " << getSpecialization() << endl;
    cout << "��������� �������: " << getCategory() << endl;
}

string Doctor::getSpecialization() {
    return specialization;
}

string Doctor::getCategory() {
    return category;
}

