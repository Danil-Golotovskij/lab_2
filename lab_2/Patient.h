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
    string weak[20];     // болезни
    string analisi[3][2];// анализы: 0-вич, 1-гепатит В, 2-гепатит С
                         // в 2 элементе прописывается "пол" - положительный тест или "отр" - отрицательный или "-" - нет результата

public:
    Patient();
    Patient(int numberDoctor);
    Patient(int numberPatient, int numberDoctor, string diagnosis, string fio, int age, string pol);
    ~Patient();

    void FindAll(int numberDoctor);

    friend void Rename(Patient& p); // дружественная функция для изменения номера пациента

    // номер пациента увеличиваем на 1
    Patient& operator ++();          // перегрузка префиксная
    Patient& operator ++(int value); // перегрузка постфиксная

    void Read();
    void SetNumberPatient();
    void SetNumberDoctor();
    void SetDiagnosis();
    void SetWeak();
    void SetAnalisi();

    void   Display();
    int    GetNumberPatient();
    int    GetNumberDoctor();
    string GetDiagnosis();
    string GetWeak();
    string GetAnalisi();
};

void Rename(Patient &p);

