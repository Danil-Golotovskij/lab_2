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
    Worker();
    Worker(int salary);
    Worker(int salary, int workExperience, int numberWorker, string fio, int age, string pol);
    ~Worker();

    static int counter;   // кол-во работников в больнице
    static void Counter(bool proverk); // метод занесения в счетчик
    static void CounterPrint();

    void Read();
    void SetSalary();
    void SetWorkExperience();
    void SetNumberWorker();

    void Display();
    int GetSalary();
    int GetWorkExperience();
    int GetNumberWorker();
};


    
    

    