#include <iostream>
#include <string>
#include "PersonPolyclinic.h"
#include "Patient.h"
#include "Worker.h"
#include "MedicalStaff.h"
#include "Doctor.h"
#include <Windows.h>
#include "ShablonWorker.h"

using namespace std;

int main(){
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	Worker w;
	w.SetSalary();
	w.SetWorkExperience();
	double s = w.GetSalary();
	int exp = w.GetWorkExperience();
	ShablonWorker <double> obj(s,exp);
	cout << obj.GetElement(0);
}

