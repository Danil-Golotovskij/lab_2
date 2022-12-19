#include "Patient.h"

void Patient::SetFio() {
    cout << "������� ���: ";
    cin >> fio;
    while (cin.get() != '\n');
}

void Patient::SetAge() {
    cout << "������� �������: ";
    cin >> age;
    while (cin.get() != '\n');
}

void Patient::SetPol() {
    cout << "������� ���: ";
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
    analisi[0][0] = "���� �� ���: ";
    analisi[1][0] = "���� �� ������� B: ";
    analisi[2][0] = "���� �� ������� �: ";
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
    analisi[0][0] = "���� �� ���: ";
    analisi[1][0] = "���� �� ������� B: ";
    analisi[2][0] = "���� �� ������� �: ";
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
    analisi[0][0] = "���� �� ���: ";
    analisi[1][0] = "���� �� ������� B: ";
    analisi[2][0] = "���� �� ������� �: ";
}

Patient::~Patient() {

}

//--------------------------------------------------------------------

Patient& Patient::operator ++() {            // ���������� ����������
    this->numberPatient++;
    return *this;
}

Patient& Patient::operator ++(int value) {   // ���������� �����������
    Patient temp(*this);
    this->numberPatient++;
    return temp;
}

//--------------------------------------------------------------------

void Rename(Patient &p) {    // ������������� ������� ��� ����� ��������
    cout << "������� ������� �� ������� ������ ��������: ";
    cin >> p.diagnosis;
    while (cin.get() != '\n');
}

//--------------------------------------------------------------------

void Patient::FindAll(int numberDoctor1) {
    if (GetNumberDoctor() == numberDoctor1) {
        cout << "��� ��������: ";
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
    cout << "������� ����� ��������: ";
    cin >> numberPatient;
    while (cin.get() != '\n');
}

void Patient::SetNumberDoctor() {
    cout << "������� ����� �������: ";
    cin >> numberDoctor;
    while (cin.get() != '\n');
}

void Patient::SetDiagnosis() {
    cout << "������� �������: ";
    cin >> diagnosis;
    while (cin.get() != '\n');
}

void Patient::SetWeak() {
    try {
        cout << "������� ���-�� �������� �� 0 �� 20: ";
        int counter;
        cin >> counter;
        if (counter > 20 || counter < 0) {
            throw (counter);
        }

        int i = 0;
        while (i < counter) {
            cout << "������� �������: ";
            cin >> weak[i];
            while (cin.get() != '\n');
            i++;

        }
    }
    catch (int counter) {
        cout << endl<<"�� ����������� ����� ���-�� ��������!!!" << endl;
        cout << "���-�� ��������: " << counter << endl;
        cout <<"���������� �������� �� 0 �� 20" << endl;
    }
}

void Patient::SetAnalisi() {
    try {
        
        
        int i = 0;
        cout << endl << "���������� ������� �������: '���' - ������������� ����, '���' - �������������, '-' - ��� ����������" << endl;
        while (i < 3) {
            cout << analisi[i][0];
            cin >> analisi[i][1];
            while (cin.get() != '\n');
            if (analisi[i][1] != "���" && analisi[i][1] != "���" && analisi[i][1] != "-") {
                throw (analisi[i][1]);
            }
            i++;
        }
    }
    catch (string s) {
        cout << "\n�� ����������� ����� ���������� ��������!!!\n";
        cout << "���������: " << s << endl;
        cout << "���������� ��������: '���','���','-'\n";
        analisi[0][1] = "-";
        analisi[1][1] = "-";
        analisi[2][1] = "-";
        cout << "���������� �������� ������������� �������� �� '-'\n";
    }
}

//--------------------------------------------------------------------

void Patient::Display() {
    cout << endl << "���: " << GetFio() << endl;
    cout << "��� ��������: " << GetAge() << endl;
    cout << "���: " << GetPol() << endl;
    cout << "����� ��������: " << GetNumberPatient() << endl;
    cout << "����� �������� �����: " << GetNumberDoctor() << endl;
    cout << "������� ��������: " << GetDiagnosis() << endl << endl;
    
    
    int i = 0;
    while (i < 20) {
        if (weak[i] != "-") {
            cout << "������� ��������: ";
            cout << weak[i] << endl;
            
        }
        i++;
    }

    cout << endl << "���������� ��������" << endl;
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