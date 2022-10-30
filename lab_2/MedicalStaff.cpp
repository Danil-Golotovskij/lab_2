#include "MedicalStaff.h"

MedicalStaff:: MedicalStaff(string Fio, int age, string pol, int numberWorker,
    int salary, int workExperience, string education, bool student) {
    this->education = education;
    this->student = student;
    Worker(salary, workExperience, numberWorker, Fio, age, pol);
}

//--------------------------------------------------------------------

void MedicalStaff::findMedicalStaff(int a, int b) {
    if (getAge() >= a && getAge() <= b) {
        DisplayMedicalStaff();
    }
}

//--------------------------------------------------------------------

void MedicalStaff::ReadMedicalStaff() {
    setFio();
    setAge();
    setPol();
    setSalary();
    setWorkExperience();
    setNumberWorker();
    setStudent();
    setEducation();
}

void MedicalStaff::setStudent() {
    cout << "Введите является ли человек студентом (True или False): ";
    cin >> student;
    while (cin.get() != '\n');
}

void MedicalStaff::setEducation() {
    cout << "Введите образование: ";
    cin >> education;
    while (cin.get() != '\n');
}

//--------------------------------------------------------------------

void MedicalStaff::DisplayMedicalStaff() {
    cout << "\nФИО медицинского работника: " << getFio() << endl;
    cout << "год рождения мед работника: " << getAge() << endl;
    cout << "пол мед работника: " << getPol() << endl;
    cout << "зарплата мед работника: " << getSalary() << endl;
    cout << "трудовой стаж мед работника: " << getWorkExperience() << endl;
    cout << "номер мед работника: " << getNumberWorker() << endl;
    cout << "является ли мед работник студентом: " << getStudent() << endl;
    cout << "образование мед работника: " << getEducation() << endl << endl;
}

string MedicalStaff::getEducation() {
    return education;
}

bool MedicalStaff::getStudent() {
    return student;
}

