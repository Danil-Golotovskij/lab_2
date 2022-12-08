#include "Doctor.h"
#include "Patient.h"
#include "Worker.h"
#include "MedicalStaff.h"


Doctor::Doctor() : Worker() {
    specialization = "---";
    category = "---";
    Counter(proverk);
    proverk = false;
}

Doctor::Doctor(string category) : Worker() {
    specialization = "---";
    this->category = category;
    Counter(proverk);
    proverk = false;
}

Doctor::Doctor(string fio, int age, string pol, int numberWorker,
    int salary, int workExperience, string specialization, string category) : Worker(salary, workExperience, numberWorker, fio, age, pol) {
    this->specialization = specialization;
    this->category = category;
    Counter(proverk);
    proverk = false;
}

Doctor::~Doctor() {
}

//--------------------------------------------------------------------

void Doctor::Read() {
    SetFio();
    SetAge();
    SetPol();
    SetSalary();
    SetWorkExperience();
    SetNumberWorker();
    SetSpecialization();
    SetCategory();
    Counter(proverk);
    proverk = false;
}

void Doctor::SetSpecialization() {
    cout << "������� �������������: ";
    cin >> specialization;
    while (cin.get() != '\n');
}

void Doctor::SetCategory() {
    cout << "������� ���������: ";
    cin >> category;
    while (cin.get() != '\n');
}

//--------------------------------------------------------------------

void Doctor::Display() {
    cout << "��� �������: " << GetFio() << endl;
    cout << "��� �������� �������: " << GetAge() << endl;
    cout << "��� �������: " << GetPol() << endl;
    cout << "�������� �������: " << GetSalary() << endl;
    cout << "�������� ���� �������: " << GetWorkExperience() << endl;
    cout << "����� �������: " << GetNumberWorker() << endl;
    cout << "������������� �������: " << GetSpecialization() << endl;
    cout << "��������� �������: " << GetCategory() << endl;
}

string Doctor::GetSpecialization() {
    return specialization;
}

string Doctor::GetCategory() {
    return category;
}

