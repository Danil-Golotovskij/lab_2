#include "Doctor.h"
#include "Patient.h"

Doctor::Doctor() : Worker() {
    specialization = "---";
    category = "---";
}

Doctor::Doctor(string category) : Worker() {
    specialization = "---";
    this->category = category;
}

Doctor::Doctor(string fio, int age, string pol, int numberWorker,
    int salary, int workExperience, string specialization, string category) : Worker(salary, workExperience, numberWorker, fio, age, pol) {
    this->specialization = specialization;
    this->category = category;
}

Doctor::~Doctor() {
    cout << "Деструтор завершил работу";
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
}

void Doctor::SetSpecialization() {
    cout << "Введите специализацию: ";
    cin >> specialization;
    while (cin.get() != '\n');
}

void Doctor::SetCategory() {
    cout << "Введите категорию: ";
    cin >> category;
    while (cin.get() != '\n');
}

//--------------------------------------------------------------------

void Doctor::Display() {
    cout << "ФИО доктора: " << GetFio() << endl;
    cout << "год рождения доктора: " << GetAge() << endl;
    cout << "пол доктора: " << GetPol() << endl;
    cout << "зарплата доктора: " << GetSalary() << endl;
    cout << "трудовой стаж доктора: " << GetWorkExperience() << endl;
    cout << "номер доктора: " << GetNumberWorker() << endl;
    cout << "специализация доктора: " << GetSpecialization() << endl;
    cout << "категория доктора: " << GetCategory() << endl;
}

string Doctor::GetSpecialization() {
    return specialization;
}

string Doctor::GetCategory() {
    return category;
}

