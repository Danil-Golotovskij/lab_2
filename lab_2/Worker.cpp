#include "Worker.h"

Worker::Worker(int salary, int workExperience, int numberWorker, string Fio, int age, string pol) {
    this->salary = salary;
    this->workExperience = workExperience;
    this->numberWorker = numberWorker;
    PersonPolyclinic(Fio, age, pol);
}

//--------------------------------------------------------------------

void Worker::setSalary() {
    cout << "������� ��������: ";
    cin >> salary;
    while (cin.get() != '\n');
}

void Worker::setWorkExperience() {
    cout << "������� �������� ����: ";
    cin >> workExperience;
    while (cin.get() != '\n');
}

void Worker::setNumberWorker() {
    cout << "������� ����� ���������: ";
    cin >> numberWorker;
    while (cin.get() != '\n');
}

//--------------------------------------------------------------------

int Worker::getSalary() {
    return salary;
}

int Worker::getWorkExperience() {
    return workExperience;
}

int Worker::getNumberWorker() {
    return numberWorker;
}

