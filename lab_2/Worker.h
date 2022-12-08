#pragma once
#include <iostream>
#include <string>
#include "PersonPolyclinic.h"

using namespace std;



class Worker : public PersonPolyclinic {

private:
    int salary;           // «арплата
    int workExperience;   // “рудовой стаж
    int numberWorker;     // номер работника
    

public:
    Worker();
    Worker(int salary);
    Worker(int salary, int workExperience, int numberWorker, string fio, int age, string pol);
    ~Worker();

    static int counter;   // кол-во работников в больнице
    static void Counter(bool proverk); // метод занесени€ в счетчик
    static void CounterPrint();

    int WorkExpMonht(int* workExp); // функци€ с указателем переводит стаж в мес€цы
    int WorkExpMonht(int &workExp); // функци€ с ссылкой переводит стаж в мес€цы

    void Read();
    void SetSalary();
    void SetWorkExperience();
    void SetNumberWorker();

    void Display();
    int GetSalary();
    int GetWorkExperience();
    int GetNumberWorker();
};


    
    

    