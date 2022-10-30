#pragma once
#include <iostream>
#include <string>
#include "PersonPolyclinic.h"
#include "Doctor.h"

using namespace std;

class Patient : public PersonPolyclinic {

private:
    int numberPatient;   // Номер пациента
    int numberDoctor;    // Номер доктора
    string diagnosis;    // Диагноз

public:
    Patient(){}
    Patient(int numberPatient, int numberDoctor, string diagnosis, string Fio, int age, string pol);
    ~Patient(){}

    void findPatient(int numberDoctor);

    void ReadPatient();
    void setNumberPatient();
    void setNumberDoctor();
    void setDiagnosis();

    void   DisplayPatient();
    int    getNumberPatient();
    int    getNumberDoctor();
    string getDiagnosis();
};

