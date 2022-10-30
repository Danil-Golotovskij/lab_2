#include "Patient.h"

Patient::Patient(int numberPatient, int numberDoctor, string diagnosis, string Fio, int age, string pol) {
    this->numberPatient = numberPatient;
    this->numberDoctor = numberDoctor;
    this->diagnosis = diagnosis;
    PersonPolyclinic(Fio, age, pol);
}

//--------------------------------------------------------------------

void Patient::findPatient(int numberDoctor1) {
    if (getNumberDoctor() == numberDoctor1) {
        cout << "ФИО пациента: ";
        cout << getFio() << endl;
    }
}

//--------------------------------------------------------------------

void Patient::ReadPatient() {
    setFio();
    setAge();
    setPol();
    setNumberPatient();
    setNumberDoctor();
    setDiagnosis();
}

void Patient::setNumberPatient() {
    cout << "Введите номер пациента: ";
    cin >> numberPatient;
    while (cin.get() != '\n');
}

void Patient::setNumberDoctor() {
    cout << "Введите номер доктора: ";
    cin >> numberDoctor;
    while (cin.get() != '\n');
}

void Patient::setDiagnosis() {
    cout << "Введите диагноз: ";
    cin >> diagnosis;
    while (cin.get() != '\n');
}

//--------------------------------------------------------------------

void Patient::DisplayPatient() {
    cout << "ФИО пациента: " << getFio() << endl;
    cout << "год рождения пациента: " << getAge() << endl;
    cout << "пол пациента: " << getPol() << endl;
    cout << "номер пациента: " << getNumberPatient() << endl;
    cout << "номер лечащего врача: " << getNumberDoctor() << endl;
    cout << "диагноз пациента: " << getDiagnosis() << endl;
}

int Patient::getNumberPatient() {
    return numberPatient;
}

int Patient::getNumberDoctor() {
    return numberDoctor;
}

string Patient::getDiagnosis() {
    return diagnosis;
}