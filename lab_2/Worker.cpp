#include "Worker.h"
#include "Doctor.h"
#include "MedicalStaff.h"

int Worker::counter = 0; // объявление статической переменной

void Worker::SetFio() {
    cout << "Введите ФИО: ";
    cin >> fio;
    while (cin.get() != '\n');
}

void Worker::SetAge() {
    cout << "Введите возраст: ";
    cin >> age;
    while (cin.get() != '\n');
}

void Worker::SetPol() {
    cout << "Введите пол: ";
    cin >> pol;
    while (cin.get() != '\n');
}

//--------------------------------------------------------------------


string Worker::GetFio() {
    return fio;
}

int Worker::GetAge() {
    return age;
}

string Worker::GetPol() {
    return pol;
}

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

Worker::Worker(int salary, int workExperience, int numberWorker, string fio, int age, string pol) {
    this->fio = fio;
    this->age = age;
    this->pol = pol;
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

void Worker::ChangeWorker() {       // метод для перегрузки
    cout << "Введите номер работника: ";
    cin >> numberWorker;
}

//--------------------------------------------------------------------

void Worker::PrintNumber() {
    cout << "Номер работника: " << numberWorker;
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

double Worker::GetSalary() {
    return salary;
}

int Worker::GetWorkExperience() {
    return workExperience;
}

int Worker::GetNumberWorker() {
    return numberWorker;
}


