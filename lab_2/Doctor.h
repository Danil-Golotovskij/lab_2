#pragma once
#include <iostream>
#include <string>
#include "Worker.h"
#include "Patient.h"

using namespace std;

class Doctor : public Worker {

private:
    string specialization;    // Специализация
    string category;          // Категория

public:
    Doctor();
    Doctor(string category);
    Doctor(string fio,int age,string pol,int numberWorker,int salary,
           int workExperience,string specialization,string category);
    ~Doctor();

    void Read();
    void SetSpecialization();
    void SetCategory();

    void   Display();
    string GetSpecialization();
    string GetCategory();
};

