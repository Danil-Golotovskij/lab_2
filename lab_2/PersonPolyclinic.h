#pragma once
#include <iostream>
#include <string>

using namespace std;

class PersonPolyclinic {

private:
    string fio;   // ��� 
    string pol;   // ���
    int    age;   // �������

public:
    PersonPolyclinic();
    PersonPolyclinic(int age);
    PersonPolyclinic(string fio, int age, string pol);
    ~PersonPolyclinic();


    void Read();
    void SetFio();
    void SetAge();
    void SetPol();

    void Display();
    string GetFio();
    string GetPol();
    int    GetAge();
};


   

