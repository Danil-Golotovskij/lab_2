#include "Patient.h"

Patient::Patient() : PersonPolyclinic() {
    numberPatient = 0;
    numberDoctor = 0;
    diagnosis = "---";
}

Patient::Patient(int numberDoctor) : PersonPolyclinic() {
    numberPatient = 0;
    this->numberDoctor = numberDoctor;
    diagnosis = "---";
}

Patient::Patient(int numberPatient, int numberDoctor, string diagnosis, string fio, int age, string pol) : PersonPolyclinic(fio,age,pol) {
    this->numberPatient = numberPatient;
    this->numberDoctor = numberDoctor;
    this->diagnosis = diagnosis;
}

Patient::~Patient() {

}

//--------------------------------------------------------------------

void Patient::FindAll(int numberDoctor1) {
    if (GetNumberDoctor() == numberDoctor1) {
        cout << "��� ��������: ";
        cout << GetFio() << endl;
    }
}

//--------------------------------------------------------------------

void Patient::Read() {
    SetFio();
    SetAge();
    SetPol();
    SetNumberPatient();
    SetNumberDoctor();
    SetDiagnosis();
}

void Patient::SetNumberPatient() {
    cout << "������� ����� ��������: ";
    cin >> numberPatient;
    while (cin.get() != '\n');
}

void Patient::SetNumberDoctor() {
    cout << "������� ����� �������: ";
    cin >> numberDoctor;
    while (cin.get() != '\n');
}

void Patient::SetDiagnosis() {
    cout << "������� �������: ";
    cin >> diagnosis;
    while (cin.get() != '\n');
}

//--------------------------------------------------------------------

void Patient::Display() {
    cout << "���: " << GetFio() << endl;
    cout << "��� ��������: " << GetAge() << endl;
    cout << "���: " << GetPol() << endl;
    cout << "����� ��������: " << GetNumberPatient() << endl;
    cout << "����� �������� �����: " << GetNumberDoctor() << endl;
    cout << "������� ��������: " << GetDiagnosis() << endl;
}

int Patient::GetNumberPatient() {
    return numberPatient;
}

int Patient::GetNumberDoctor() {
    return numberDoctor;
}

string Patient::GetDiagnosis() {
    return diagnosis;
}