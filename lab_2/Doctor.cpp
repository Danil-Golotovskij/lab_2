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
    cout << "Введите специализацию: ";
    cin >> specialization;
    while (cin.get() != '\n');
}

void Doctor::setCategory() {
    cout << "Введите категорию: ";
    cin >> category;
    while (cin.get() != '\n');
}

//--------------------------------------------------------------------

void Doctor::DisplayDoctor() {
    cout << "ФИО доктора: " << getFio() << endl;
    cout << "год рождения доктора: " << getAge() << endl;
    cout << "пол доктора: " << getPol() << endl;
    cout << "зарплата доктора: " << getSalary() << endl;
    cout << "трудовой стаж доктора: " << getWorkExperience() << endl;
    cout << "номер доктора: " << getNumberWorker() << endl;
    cout << "специализация доктора: " << getSpecialization() << endl;
    cout << "категория доктора: " << getCategory() << endl;
}

string Doctor::getSpecialization() {
    return specialization;
}

string Doctor::getCategory() {
    return category;
}

