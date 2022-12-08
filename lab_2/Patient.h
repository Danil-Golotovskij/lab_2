#pragma once
#include <iostream>
#include <string>
#include "PersonPolyclinic.h"
#include "Doctor.h"

using namespace std;

class Patient : public PersonPolyclinic {

private:
    int numberPatient;   // ����� ��������
    int numberDoctor;    // ����� �������
    string diagnosis;    // �������

public:
    Patient();
    Patient(int numberDoctor);
    Patient(int numberPatient, int numberDoctor, string diagnosis, string fio, int age, string pol);
    ~Patient();

    void FindAll(int numberDoctor);

    friend void Rename(Patient& p); // ������������� ������� ��� ��������� ������ ��������

    // ����� �������� ����������� �� 1
    Patient& operator ++();         // ���������� ����������
    Patient& operator ++(int value);// ���������� �����������

    void Read();
    void SetNumberPatient();
    void SetNumberDoctor();
    void SetDiagnosis();

    void   Display();
    int    GetNumberPatient();
    int    GetNumberDoctor();
    string GetDiagnosis();
};

void Rename(Patient &p);

