#include "MedicalStaff.h"
#include "Worker.h"
#include "Doctor.h"

MedicalStaff::MedicalStaff() :Worker() {
    education = "---";
    student = 0;
    Counter(proverk);
    proverk = false;
}

MedicalStaff::MedicalStaff(string education) :Worker() {
    this->education = education;
    student = 0;
    Counter(proverk);
    proverk = false;
}

MedicalStaff:: MedicalStaff(string fio, int age, string pol, int numberWorker,
    int salary, int workExperience, string education, bool student) {
    this->education = education;
    this->student = student;
    Counter(proverk);
    proverk = false;
}

MedicalStaff::~MedicalStaff() {
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
    Counter(proverk);
    proverk = false;
}

void MedicalStaff::SetStudent() {
    cout << "������� �������� �� ������� ��������� (True ��� False): ";
    cin >> student;
    while (cin.get() != '\n');
}

void MedicalStaff::SetEducation() {
    cout << "������� �����������: ";
    cin >> education;
    while (cin.get() != '\n');
}

//--------------------------------------------------------------------

void MedicalStaff::Display() {
    cout << "\n��� ������������ ���������: " << GetFio() << endl;
    cout << "��� �������� ��� ���������: " << GetAge() << endl;
    cout << "��� ��� ���������: " << GetPol() << endl;
    cout << "�������� ��� ���������: " << GetSalary() << endl;
    cout << "�������� ���� ��� ���������: " << GetWorkExperience() << endl;
    cout << "����� ��� ���������: " << GetNumberWorker() << endl;
    cout << "�������� �� ��� �������� ���������: " << GetStudent() << endl;
    cout << "����������� ��� ���������: " << GetEducation() << endl << endl;
}

string MedicalStaff::GetEducation() {
    return education;
}

bool MedicalStaff::GetStudent() {
    return student;
}

