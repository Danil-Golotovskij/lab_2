#pragma once
#include <iostream>
#include <string>
#include "Worker.h"
#include "Patient.h"

using namespace std;

class Doctor : public Worker {

protected:
    string specialization;    // �������������
    string category;          // ���������

public:
    Doctor();
    Doctor(string category);
    Doctor(string fio,int age,string pol,int numberWorker,int salary,
           int workExperience,string specialization,string category);
    ~Doctor();

    void ChangeWorker(string category);   // ����� ��� ����������, ��������� ���������
    void ChangeWorker(int age);           // ����� ��� ����������, ��������� ��������

    Doctor &operator =(Worker& w); // ���������� ������������ ������ ������������ ������ �� ��������

    friend ostream& operator << (ostream&, Doctor x); // ���������� <<

    void PrintNumber();  // ����������� ������� ������ ������ �������

    void Read();
    void SetSpecialization();
    void SetCategory();

    void   Display();
    string GetSpecialization();
    string GetCategory();
};


