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
        cout << "��� ��������: ";
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
    cout << "������� ����� ��������: ";
    cin >> numberPatient;
    while (cin.get() != '\n');
}

void Patient::setNumberDoctor() {
    cout << "������� ����� �������: ";
    cin >> numberDoctor;
    while (cin.get() != '\n');
}

void Patient::setDiagnosis() {
    cout << "������� �������: ";
    cin >> diagnosis;
    while (cin.get() != '\n');
}

//--------------------------------------------------------------------

void Patient::DisplayPatient() {
    cout << "��� ��������: " << getFio() << endl;
    cout << "��� �������� ��������: " << getAge() << endl;
    cout << "��� ��������: " << getPol() << endl;
    cout << "����� ��������: " << getNumberPatient() << endl;
    cout << "����� �������� �����: " << getNumberDoctor() << endl;
    cout << "������� ��������: " << getDiagnosis() << endl;
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