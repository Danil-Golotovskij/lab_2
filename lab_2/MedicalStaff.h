#pragma once
#include <iostream>
#include <string>
#include "Worker.h"
#include "PersonPolyclinic.h"

using namespace std;

class MedicalStaff : public Worker {

private:
    string education;   // ќбразование
    bool   student;     // явл€етс€ ли работник студентом?

public:
    MedicalStaff(){}
    MedicalStaff(string Fio, int age, string pol, int numberWorker,
                 int salary, int workExperience, string education, bool student);
    ~MedicalStaff(){}

    void findMedicalStaff(int a, int b);

    void ReadMedicalStaff();
    void setEducation();
    void setStudent();

    void   DisplayMedicalStaff();
    string getEducation();
    bool   getStudent();
};

