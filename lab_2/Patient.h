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
    Patient();
    Patient(int numberDoctor);
    Patient(int numberPatient, int numberDoctor, string diagnosis, string fio, int age, string pol);
    ~Patient();

    void FindAll(int numberDoctor);

    void Read();
    void SetNumberPatient();
    void SetNumberDoctor();
    void SetDiagnosis();

    void   Display();
    int    GetNumberPatient();
    int    GetNumberDoctor();
    string GetDiagnosis();
};

