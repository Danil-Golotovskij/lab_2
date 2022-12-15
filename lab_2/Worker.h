#pragma once
#include <iostream>
#include <string>
#include "PersonPolyclinic.h"

using namespace std;



class Worker : public PersonPolyclinic {

private:
    int salary;           // ��������
    int workExperience;   // �������� ����
    int numberWorker;     // ����� ���������


public:
    Worker();
    Worker(int salary);
    Worker(int salary, int workExperience, int numberWorker, string fio, int age, string pol);
    ~Worker();

    bool proverk = true;  // �������� ������� �� ������� � �������

    static int counter;                 // ���-�� ���������� � ��������
    static void Counter(bool proverk); // ����� ��������� � �������
    static void CounterPrint();         // ������� ������� ���������� � ��������

    int WorkExpMonht1(int *workExp); // ������� � ���������� ��������� ���� �� 1
    int WorkExpMonht2(int &workExp); // ������� � ������� ���������� ���� �� 1

    void Read();
    void SetSalary();
    void SetWorkExperience();
    void SetNumberWorker();

    void Display();
    int GetSalary();
    int GetWorkExperience();
    int GetNumberWorker();
};

    


    