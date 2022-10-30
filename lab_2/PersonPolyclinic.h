#pragma once
#include <iostream>
#include <string>

using namespace std;

class PersonPolyclinic {

private:
    string Fio;   // ФИО 
    string pol;   // Пол
    int    age;   // Возраст

public:
    PersonPolyclinic() {}
    PersonPolyclinic(int age);
    PersonPolyclinic(string Fio, int age, string pol);
    ~PersonPolyclinic(){}

    void setFio();
    void setAge();
    void setPol();

    string getFio();
    string getPol();
    int    getAge();
};
   

