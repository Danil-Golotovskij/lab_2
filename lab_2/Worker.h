#pragma once
#include <iostream>
#include <string>
#include "PersonPolyclinic.h"

using namespace std;



class Worker : public PersonPolyclinic {

protected:
    double salary;           // ��������
    int workExperience;   // �������� ����
    int numberWorker;     // ����� ���������

public:
    Worker();
    Worker(int salary);
    Worker(int salary, int workExperience, int numberWorker, string fio, int age, string pol);
    ~Worker();

    void SetFio();
    void SetAge();
    void SetPol();

    string GetFio();
    string GetPol();
    int    GetAge();

    bool proverk = true;  // �������� ������� �� ������� � �������

    static int counter;                 // ���-�� ���������� � ��������
    static void Counter(bool proverk);  // ����� ��������� � �������
    static void CounterPrint();         // ������� ������� ���������� � ��������

    int WorkExpMonht1(int *workExp); // ������� � ���������� ��������� ���� �� 1
    int WorkExpMonht2(int &workExp); // ������� � ������� ���������� ���� �� 1

    void ChangeWorker();              // ������� ��� ��������� ������ ���������

    virtual void PrintNumber();  // ����������� ������� ������ ������ ���������

    void Read();
    void SetSalary();
    void SetWorkExperience();
    void SetNumberWorker();

    void Display();
    double GetSalary();
    int GetWorkExperience();
    int GetNumberWorker();    
};

    


    