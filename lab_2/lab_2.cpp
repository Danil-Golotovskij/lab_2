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
	
	// проверка функции с указателем
	Worker b;
	b.Read();
	int a = b.GetWorkExperience();
	cout << b.WorkExpMonht(&a);

	// проверка функции с ссылкой
	Worker b0;
	b0.Read();
	int a0 = b0.GetWorkExperience();
	cout << b0.WorkExpMonht(a0);

	Patient w;
	Rename(w);
}

