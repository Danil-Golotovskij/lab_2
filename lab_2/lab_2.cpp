#include <iostream>
#include <string>
#include "PersonPolyclinic.h"
#include "Patient.h"
#include "Worker.h"
#include "MedicalStaff.h"
#include "Doctor.h"
#include <Windows.h>

using namespace std;


int main()
{
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	Patient p;
	p.SetDiagnosis();
	Rename(p);
	cout << p.GetDiagnosis();
}

