#include "Patient.h"

void Patient::SetFio() {
    cout << "Введите ФИО: ";
    cin >> fio;
    while (cin.get() != '\n');
}

void Patient::SetAge() {
    cout << "Введите возраст: ";
    cin >> age;
    while (cin.get() != '\n');
}

void Patient::SetPol() {
    cout << "Введите пол: ";
    cin >> pol;
    while (cin.get() != '\n');
}

//--------------------------------------------------------------------


string Patient::GetFio() {
    return fio;
}

int Patient::GetAge() {
    return age;
}

string Patient::GetPol() {
    return pol;
}

//--------------------------------------------------------------------


Patient::Patient() : PersonPolyclinic() {
    numberPatient = 0;
    numberDoctor = 0;
    diagnosis = "---";
    int i = 0;
    while (i < 20) {
        weak[i] = "-";
        i++;
    }
    analisi[0][0] = "Тест на вич: ";
    analisi[1][0] = "Тест на гепатит B: ";
    analisi[2][0] = "Тест на гепатит С: ";
}

Patient::Patient(int numberDoctor) : PersonPolyclinic() {
    numberPatient = 0;
    this->numberDoctor = numberDoctor;
    diagnosis = "---";
    int i = 0;
    while (i < 20) {
        weak[i] = "-";
        i++;
    }
    analisi[0][0] = "Тест на вич: ";
    analisi[1][0] = "Тест на гепатит B: ";
    analisi[2][0] = "Тест на гепатит С: ";
}

Patient::Patient(int numberPatient, int numberDoctor, string diagnosis, string fio, int age, string pol){
    this->fio = fio;
    this->age = age;
    this->pol = pol;
    this->numberPatient = numberPatient;
    this->numberDoctor = numberDoctor;
    this->diagnosis = diagnosis;
    int i = 0;
    while (i < 20) {
        weak[i] = "-";
        i++;
    }
    analisi[0][0] = "Тест на вич: ";
    analisi[1][0] = "Тест на гепатит B: ";
    analisi[2][0] = "Тест на гепатит С: ";
}

Patient::~Patient() {

}

//--------------------------------------------------------------------

Patient& Patient::operator ++() {            // перегрузка префиксная
    this->numberPatient++;
    return *this;
}

Patient& Patient::operator ++(int value) {   // перегрузка постфиксная
    Patient temp(*this);
    this->numberPatient++;
    return temp;
}

//--------------------------------------------------------------------

void Rename(Patient &p) {    // дружественная функция для смены диагноза
    cout << "Введите диагноз на который хотите изменить: ";
    cin >> p.diagnosis;
    while (cin.get() != '\n');
}

//--------------------------------------------------------------------

void Patient::FindAll(int numberDoctor1) {
    if (GetNumberDoctor() == numberDoctor1) {
        cout << "ФИО пациента: ";
        cout << GetFio() << endl;
    }
}

//--------------------------------------------------------------------

void Patient::Read() {
    SetFio();
    SetAge();
    SetPol();
    SetNumberPatient();
    SetNumberDoctor();
    SetDiagnosis();
    SetWeak();
    SetAnalisi();
}

void Patient::SetNumberPatient() {
    cout << "Введите номер пациента: ";
    cin >> numberPatient;
    while (cin.get() != '\n');
}

void Patient::SetNumberDoctor() {
    cout << "Введите номер доктора: ";
    cin >> numberDoctor;
    while (cin.get() != '\n');
}

void Patient::SetDiagnosis() {
    cout << "Введите диагноз: ";
    cin >> diagnosis;
    while (cin.get() != '\n');
}

void Patient::SetWeak() {
    try {
        cout << "Введите кол-во болезней от 0 до 20: ";
        int counter;
        cin >> counter;
        if (counter > 20 || counter < 0) {
            throw (counter);
        }

        int i = 0;
        while (i < counter) {
            cout << "Введите болезнь: ";
            cin >> weak[i];
            while (cin.get() != '\n');
            i++;

        }
    }
    catch (int counter) {
        cout << endl<<"ВЫ НЕПРАВИЛЬНО ВВЕЛИ КОЛ-ВО БОЛЕЗНЕЙ!!!" << endl;
        cout << "Кол-во болезней: " << counter << endl;
        cout <<"Допустимый диапозон от 0 до 20" << endl;
    }
}

void Patient::SetAnalisi() {
    try {
        
        
        int i = 0;
        cout << endl << "Результаты анализа вводить: 'пол' - положительный тест, 'отр' - отрицательный, '-' - нет результата" << endl;
        while (i < 3) {
            cout << analisi[i][0];
            cin >> analisi[i][1];
            while (cin.get() != '\n');
            if (analisi[i][1] != "пол" && analisi[i][1] != "отр" && analisi[i][1] != "-") {
                throw (analisi[i][1]);
            }
            i++;
        }
    }
    catch (string s) {
        cout << "\nВЫ НЕПРАВИЛЬНО ВВЕЛИ РЕЗУЛЬТАТЫ АНАЛИЗОВ!!!\n";
        cout << "Результат: " << s << endl;
        cout << "Допустимые значения: 'пол','отр','-'\n";
        analisi[0][1] = "-";
        analisi[1][1] = "-";
        analisi[2][1] = "-";
        cout << "Результаты анализов автоматически изменены на '-'\n";
    }
}

//--------------------------------------------------------------------

void Patient::Display() {
    cout << endl << "ФИО: " << GetFio() << endl;
    cout << "год рождения: " << GetAge() << endl;
    cout << "пол: " << GetPol() << endl;
    cout << "номер пациента: " << GetNumberPatient() << endl;
    cout << "номер лечащего врача: " << GetNumberDoctor() << endl;
    cout << "диагноз пациента: " << GetDiagnosis() << endl << endl;
    
    
    int i = 0;
    while (i < 20) {
        if (weak[i] != "-") {
            cout << "Болезнь пациента: ";
            cout << weak[i] << endl;
            
        }
        i++;
    }

    cout << endl << "Результаты анализов" << endl;
    int j = 0;
    while (j < 3) {
        cout << analisi[j][0] << analisi[j][1] << endl;
        j++;
    }
}

int Patient::GetNumberPatient() {
    return numberPatient;
}

int Patient::GetNumberDoctor() {
    return numberDoctor;
}

string Patient::GetDiagnosis() {
    return diagnosis;
}

string Patient::GetWeak() {
    return weak[20];
}

string Patient::GetAnalisi() {
    return analisi[3][1];
}