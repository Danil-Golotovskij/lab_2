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
        cout << "ФИО пациента: ";
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
    cout << "Введите номер пациента: ";
    cin >> numberPatient;
    while (cin.get() != '\n');
}

void Patient::SetNumberDoctor() {
    cout << "Введите номер доктора: ";
    cin >> numberDoctor;
    while (cin.get() != '\n');
}

void Patient::SetDiagnosis() {
    cout << "Введите диагноз: ";
    cin >> diagnosis;
    while (cin.get() != '\n');
}

//--------------------------------------------------------------------

void Patient::Display() {
    cout << "ФИО: " << GetFio() << endl;
    cout << "год рождения: " << GetAge() << endl;
    cout << "пол: " << GetPol() << endl;
    cout << "номер пациента: " << GetNumberPatient() << endl;
    cout << "номер лечащего врача: " << GetNumberDoctor() << endl;
    cout << "диагноз пациента: " << GetDiagnosis() << endl;
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