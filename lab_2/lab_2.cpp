#include <iostream>
#include <string>
#include "PersonPolyclinic.h"
#include "Patient.h"
#include "Worker.h"
#include "MedicalStaff.h"
#include "Doctor.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	Doctor       Doc[3];
	Patient      Pat[3];
	MedicalStaff Med[3];

	// ввод массива докторов
	for (int i = 0; i < 2; i++) {
		cout << "Введите " << i+1 << " доктора" << endl;
		Doc[i].Read();
	}

	// ввод массива пациентов
	for (int i = 0; i < 2; i++) {
		cout << "Введите " << i+1 << " пациента" << endl;
		Pat[i].Read();
	}

	// ввод массива мед персонала
	for (int i = 0; i < 2; i++) {
		cout << "Введите " << i+1 << " мед работника" << endl;
		Med[i].Read();
	}

	// выбор 1 доктора для вывода всех его пациентов
	for (int i = 0; i < 2; i++) {
		Pat[i].FindAll(Doc[0].GetNumberWorker());
	}

	// вывод мед персонала в выбранном промежутке возраста
	int a, b;
	cout << "Введите интервал возраста" << endl << "1 число: ";
	cin >> a;
	while (cin.get() != '\n');
	cout << "2 число: ";
	cin >> b;
	while (cin.get() != '\n');
	for (int i = 0; i < 3; i++) {
		Med[i].Find(a,b);
	}
}

