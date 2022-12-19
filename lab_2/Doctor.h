#pragma once
#include <iostream>
#include <string>
#include "Worker.h"
#include "Patient.h"

using namespace std;

class Doctor : public Worker {

protected:
    string specialization;    // —пециализаци€
    string category;          //  атегори€

public:
    Doctor();
    Doctor(string category);
    Doctor(string fio,int age,string pol,int numberWorker,int salary,
           int workExperience,string specialization,string category);
    ~Doctor();

    void ChangeWorker(string category);   // метод дл€ перегрузки, изменение категории
    void ChangeWorker(int age);           // метод дл€ перегрузки, изменение возраста

    Doctor &operator =(Worker& w); // перегрузка присваивани€ методу производного класса от базового

    friend ostream& operator << (ostream&, Doctor x); // перегрузка <<

    void PrintNumber();  // виртуальна€ функци€ вывода номера доктора

    void Read();
    void SetSpecialization();
    void SetCategory();

    void   Display();
    string GetSpecialization();
    string GetCategory();
};


