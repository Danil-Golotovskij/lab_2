#include "Worker.h"
#include "Doctor.h"
#include "MedicalStaff.h"

int Worker::counter = 0; // объявление статической переменной

//--------------------------------------------------------------------

Worker::Worker() : PersonPolyclinic() {
    salary = 0;
    workExperience = 0;
    numberWorker = 0;
}

Worker::Worker(int salary) : PersonPolyclinic() {
    this->salary = salary;
    workExperience = 0;
    numberWorker = 0;
}

Worker::Worker(int salary, int workExperience, int numberWorker, string fio, int age, string pol) : PersonPolyclinic(fio, age, pol) {
    this->salary = salary;
    this->workExperience = workExperience;
    this->numberWorker = numberWorker;
}

Worker::~Worker() {
}

//--------------------------------------------------------------------

void Worker::Counter(bool proverk) {   // статический метод 
    if (proverk == true) {
        counter++;
    }
}

void Worker::CounterPrint() {          // статический метод
    cout << "Кол-во работников: " << counter << endl;
}

//--------------------------------------------------------------------

int Worker::WorkExpMonht1(int *workExp) {    // метод с указателем
    *workExp += 1;
    return *workExp;
}

int Worker::WorkExpMonht2(int &workExp) {    // метод с ссылкой
    workExp += 1;
    return workExp;
}

//--------------------------------------------------------------------

void Worker::Read() {
    SetFio();
    SetAge();
    SetPol();
    SetSalary();
    SetWorkExperience();
    SetNumberWorker();
}

void Worker::SetSalary() {
    cout << "Введите зарплату: ";
    cin >> salary;
    while (cin.get() != '\n');
}

void Worker::SetWorkExperience() {
    cout << "Введите трудовой стаж: ";
    cin >> workExperience;
    while (cin.get() != '\n');
}

void Worker::SetNumberWorker() {
    cout << "Введите номер работника: ";
    cin >> numberWorker;
    while (cin.get() != '\n');
}

//--------------------------------------------------------------------

void Worker::Display() {
    cout << "ФИО: " << GetFio() << endl;
    cout << "год рождения: " << GetAge() << endl;
    cout << "пол: " << GetPol() << endl;
    cout << "зарплата: " << GetSalary() << endl;
    cout << "трудовой стаж: " << GetWorkExperience() << endl;
    cout << "номер работника: " << GetNumberWorker() << endl;
}

int Worker::GetSalary() {
    return salary;
}

int Worker::GetWorkExperience() {
    return workExperience;
}

int Worker::GetNumberWorker() {
    return numberWorker;
}


