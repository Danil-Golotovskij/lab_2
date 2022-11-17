#include "MedicalStaff.h"

MedicalStaff::MedicalStaff() :Worker() {
    education = "---";
    student = 0;
}

MedicalStaff::MedicalStaff(string education) :Worker() {
    this->education = education;
    student = 0;
}

MedicalStaff:: MedicalStaff(string fio, int age, string pol, int numberWorker,
    int salary, int workExperience, string education, bool student) {
    this->education = education;
    this->student = student;
}

MedicalStaff::~MedicalStaff() {
    cout << "Деструктор завершил работу";
}

//--------------------------------------------------------------------

void MedicalStaff::Find(int a, int b) {
    if (GetAge() >= a && GetAge() <= b) {
        Display();
    }
}

//--------------------------------------------------------------------

void MedicalStaff::Read() {
    SetFio();
    SetAge();
    SetPol();
    SetSalary();
    SetWorkExperience();
    SetNumberWorker();
    SetStudent();
    SetEducation();
}

void MedicalStaff::SetStudent() {
    cout << "Введите является ли человек студентом (True или False): ";
    cin >> student;
    while (cin.get() != '\n');
}

void MedicalStaff::SetEducation() {
    cout << "Введите образование: ";
    cin >> education;
    while (cin.get() != '\n');
}

//--------------------------------------------------------------------

void MedicalStaff::Display() {
    cout << "\nФИО медицинского работника: " << GetFio() << endl;
    cout << "год рождения мед работника: " << GetAge() << endl;
    cout << "пол мед работника: " << GetPol() << endl;
    cout << "зарплата мед работника: " << GetSalary() << endl;
    cout << "трудовой стаж мед работника: " << GetWorkExperience() << endl;
    cout << "номер мед работника: " << GetNumberWorker() << endl;
    cout << "является ли мед работник студентом: " << GetStudent() << endl;
    cout << "образование мед работника: " << GetEducation() << endl << endl;
}

string MedicalStaff::GetEducation() {
    return education;
}

bool MedicalStaff::GetStudent() {
    return student;
}

