#include "Worker.h"

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
    cout << "���������� �������� ������" << endl;
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
    cout << "������� ��������: ";
    cin >> salary;
    while (cin.get() != '\n');
}

void Worker::SetWorkExperience() {
    cout << "������� �������� ����: ";
    cin >> workExperience;
    while (cin.get() != '\n');
}

void Worker::SetNumberWorker() {
    cout << "������� ����� ���������: ";
    cin >> numberWorker;
    while (cin.get() != '\n');
}

//--------------------------------------------------------------------

void Worker::Display() {
    cout << "���: " << GetFio() << endl;
    cout << "��� ��������: " << GetAge() << endl;
    cout << "���: " << GetPol() << endl;
    cout << "��������: " << GetSalary() << endl;
    cout << "�������� ����: " << GetWorkExperience() << endl;
    cout << "����� ���������: " << GetNumberWorker() << endl;
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

