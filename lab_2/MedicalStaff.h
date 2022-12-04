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
    MedicalStaff();
    MedicalStaff(string education);
    MedicalStaff(string fio, int age, string pol, int numberWorker,
                 int salary, int workExperience, string education, bool student);
    ~MedicalStaff();

    bool proverk = true; // проверка занесен ли человек в счетчик

    void Find(int a, int b);

    void Read();
    void SetEducation();
    void SetStudent();

    void   Display();
    string GetEducation();
    bool   GetStudent();
};

