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
    cout << "������� �������� �� ������� ��������� (True ��� False): ";
    cin >> student;
    while (cin.get() != '\n');
}

void MedicalStaff::setEducation() {
    cout << "������� �����������: ";
    cin >> education;
    while (cin.get() != '\n');
}

//--------------------------------------------------------------------

void MedicalStaff::DisplayMedicalStaff() {
    cout << "\n��� ������������ ���������: " << getFio() << endl;
    cout << "��� �������� ��� ���������: " << getAge() << endl;
    cout << "��� ��� ���������: " << getPol() << endl;
    cout << "�������� ��� ���������: " << getSalary() << endl;
    cout << "�������� ���� ��� ���������: " << getWorkExperience() << endl;
    cout << "����� ��� ���������: " << getNumberWorker() << endl;
    cout << "�������� �� ��� �������� ���������: " << getStudent() << endl;
    cout << "����������� ��� ���������: " << getEducation() << endl << endl;
}

string MedicalStaff::getEducation() {
    return education;
}

bool MedicalStaff::getStudent() {
    return student;
}

