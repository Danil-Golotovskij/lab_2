#include "Worker.h"
#include "Doctor.h"
#include "MedicalStaff.h"

int Worker::counter = 0; // ���������� ����������� ����������

void Worker::SetFio() {
    cout << "������� ���: ";
    cin >> fio;
    while (cin.get() != '\n');
}

void Worker::SetAge() {
    cout << "������� �������: ";
    cin >> age;
    while (cin.get() != '\n');
}

void Worker::SetPol() {
    cout << "������� ���: ";
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

void Worker::Counter(bool proverk) {   // ����������� ����� 
    if (proverk == true) {
        counter++;
    }
}

void Worker::CounterPrint() {          // ����������� �����
    cout << "���-�� ����������: " << counter << endl;
}

//--------------------------------------------------------------------

int Worker::WorkExpMonht1(int *workExp) {    // ����� � ����������
    *workExp += 1;
    return *workExp;
}

int Worker::WorkExpMonht2(int &workExp) {    // ����� � �������
    workExp += 1;
    return workExp;
}

//--------------------------------------------------------------------

void Worker::ChangeWorker() {       // ����� ��� ����������
    cout << "������� ����� ���������: ";
    cin >> numberWorker;
}

//--------------------------------------------------------------------

void Worker::PrintNumber() {
    cout << "����� ���������: " << numberWorker;
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

double Worker::GetSalary() {
    return salary;
}

int Worker::GetWorkExperience() {
    return workExperience;
}

int Worker::GetNumberWorker() {
    return numberWorker;
}


