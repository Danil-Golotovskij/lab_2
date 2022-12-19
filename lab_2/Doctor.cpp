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

void Doctor::ChangeWorker(string category) {  // метод для перегрузки с вызовом
    Worker::ChangeWorker();
    this->category = category;
}

void Doctor::ChangeWorker(int age) {     // метод для перегрузки без вызова
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
    cout << "Введите специализацию: ";
    cin >> specialization;
    while (cin.get() != '\n');
}

void Doctor::SetCategory() {
    cout << "Введите категорию: ";
    cin >> category;
    while (cin.get() != '\n');
}

//--------------------------------------------------------------------

ostream& operator <<(ostream&, Doctor doctor) {   // перегрузка оператора << для класса Doctor
    cout << "ФИО, год рождения, пол, зарплата, стаж, номер, специализация и категория соответственно: \n";
    return cout << doctor.GetFio() << ' ' << doctor.GetAge() << ' ' << doctor.GetPol() << ' ' << doctor.GetSalary() << ' ' << doctor.GetWorkExperience()
        << ' ' << doctor.GetNumberWorker() << ' ' << doctor.GetSpecialization() << ' ' << doctor.GetCategory();
}

//--------------------------------------------------------------------

void Doctor::PrintNumber() {
    cout << "Номер доктора: " << numberWorker;
}

//--------------------------------------------------------------------

void Doctor::Display() {
    cout << "ФИО доктора: " << fio << endl;
    cout << "год рождения доктора: " << age << endl;
    cout << "пол доктора: " << pol << endl;
    cout << "зарплата доктора: " << salary << endl;
    cout << "трудовой стаж доктора: " << workExperience << endl;
    cout << "номер доктора: " << numberWorker << endl;
    cout << "специализация доктора: " << specialization << endl;
    cout << "категория доктора: " << category << endl;
}

string Doctor::GetSpecialization() {
    return specialization;
}

string Doctor::GetCategory() {
    return category;
}

