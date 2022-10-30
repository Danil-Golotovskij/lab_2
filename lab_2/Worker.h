#pragma once
#include <iostream>
#include <string>
#include "PersonPolyclinic.h"

using namespace std;

class Worker : public PersonPolyclinic {

private:
    int salary;           // Зарплата
    int workExperience;   // Трудовой стаж
    int numberWorker;     // номер работника

public:
    Worker(){}
    Worker(int salary, int workExperience, int numberWorker, string Fio, int age, string pol);
    ~Worker() {}

    void setSalary();
    void setWorkExperience();
    void setNumberWorker();

    int getSalary();
    int getWorkExperience();
    int getNumberWorker();
};
    

    
    

    