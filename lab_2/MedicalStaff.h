#pragma once
#include <iostream>
#include <string>
#include "Worker.h"
#include "PersonPolyclinic.h"

using namespace std;

class MedicalStaff : public Worker {

private:
    string education;   // �����������
    bool   student;     // �������� �� �������� ���������?

public:
    MedicalStaff();
    MedicalStaff(string education);
    MedicalStaff(string fio, int age, string pol, int numberWorker,
                 int salary, int workExperience, string education, bool student);
    ~MedicalStaff();

    bool proverk = true; // �������� ������� �� ������� � �������

    void Find(int a, int b);

    void Read();
    void SetEducation();
    void SetStudent();

    void   Display();
    string GetEducation();
    bool   GetStudent();
};

