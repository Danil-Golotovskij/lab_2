#pragma once
#include <iostream>
#include <string>

using namespace std;


class PersonPolyclinic {

protected:

    string fio;   // ФИО 
    string pol;   // Пол
    int    age;   // Возраст

public:

    virtual void SetFio() = 0;
    virtual void SetAge() = 0;
    virtual void SetPol() = 0;

    virtual string GetFio() = 0;
    virtual string GetPol() = 0;
    virtual int    GetAge() = 0;
};


   

