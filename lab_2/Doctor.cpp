#include "Doctor.h"
#include "Patient.h"
#include "Worker.h"
#include "MedicalStaff.h"


Doctor::Doctor() : Worker() {
    specialization = "---";
    category = "---";
    Counter(proverk);
    proverk = false;
}

Doctor::Doctor(string category) : Worker() {
    specialization = "---";
    this->category = category;
    Counter(proverk);
    proverk = false;
}

Doctor::Doctor(string fio, int age, string pol, int numberWorker,
    int salary, int workExperience, string specialization, string category) : Worker(salary, workExperience, numberWorker, fio, age, pol) {
    this->specialization = specialization;
    this->category = category;
    Counter(proverk);
    proverk = false;
}

Doctor::~Doctor() {
}

//--------------------------------------------------------------------

void Doctor::ChangeWorker(string category) {  // ����� ��� ���������� � �������
    Worker::ChangeWorker();
    this->category = category;
}

void Doctor::ChangeWorker(int age) {     // ����� ��� ���������� ��� ������
    this->age = age;
}

//--------------------------------------------------------------------

Doctor& Doctor::operator =(Worker& w) {
    this->salary = w.GetSalary();
    this->workExperience = w.GetWorkExperience();
    this->numberWorker = w.GetNumberWorker();
    this->specialization = "---";
    this->category = "---";
    return *this;
}

//--------------------------------------------------------------------

void Doctor::Read() {
    SetFio();
    SetAge();
    SetPol();
    SetSalary();
    SetWorkExperience();
    SetNumberWorker();
    SetSpecialization();
    SetCategory();
    Counter(proverk);
    proverk = false;
}

void Doctor::SetSpecialization() {
    cout << "������� �������������: ";
    cin >> specialization;
    while (cin.get() != '\n');
}

void Doctor::SetCategory() {
    cout << "������� ���������: ";
    cin >> category;
    while (cin.get() != '\n');
}

//--------------------------------------------------------------------

ostream& operator <<(ostream&, Doctor doctor) {   // ���������� ��������� << ��� ������ Doctor
    cout << "���, ��� ��������, ���, ��������, ����, �����, ������������� � ��������� ��������������: \n";
    return cout << doctor.GetFio() << ' ' << doctor.GetAge() << ' ' << doctor.GetPol() << ' ' << doctor.GetSalary() << ' ' << doctor.GetWorkExperience()
        << ' ' << doctor.GetNumberWorker() << ' ' << doctor.GetSpecialization() << ' ' << doctor.GetCategory();
}

//--------------------------------------------------------------------

void Doctor::PrintNumber() {
    cout << "����� �������: " << numberWorker;
}

//--------------------------------------------------------------------

void Doctor::Display() {
    cout << "��� �������: " << fio << endl;
    cout << "��� �������� �������: " << age << endl;
    cout << "��� �������: " << pol << endl;
    cout << "�������� �������: " << salary << endl;
    cout << "�������� ���� �������: " << workExperience << endl;
    cout << "����� �������: " << numberWorker << endl;
    cout << "������������� �������: " << specialization << endl;
    cout << "��������� �������: " << category << endl;
}

string Doctor::GetSpecialization() {
    return specialization;
}

string Doctor::GetCategory() {
    return category;
}

