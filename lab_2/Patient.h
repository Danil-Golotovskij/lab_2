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
    string weak[20];     // �������
    string analisi[3][2];// �������: 0-���, 1-������� �, 2-������� �
                         // � 2 �������� ������������� "���" - ������������� ���� ��� "���" - ������������� ��� "-" - ��� ����������

public:
    Patient();
    Patient(int numberDoctor);
    Patient(int numberPatient, int numberDoctor, string diagnosis, string fio, int age, string pol);
    ~Patient();

    void FindAll(int numberDoctor);

    friend void Rename(Patient& p); // ������������� ������� ��� ��������� ������ ��������

    // ����� �������� ����������� �� 1
    Patient& operator ++();          // ���������� ����������
    Patient& operator ++(int value); // ���������� �����������

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

