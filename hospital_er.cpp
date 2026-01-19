#include <iostream>
#include <vector>
#include <string>
using namespace std;


struct Patient {
    int id;
    string name;
    int age;
};

struct Doctor {
    int id;
    string name;
    string department;
};

struct Nurse {
    int id;
    string name;
};


vector<Patient> patients;
vector<Doctor> doctors;
vector<Nurse> nurses;

void addPatient() {
    Patient p;
    cout << "Patient ID: ";
    cin >> p.id;
    cout << "Patient Name: ";
    cin.ignore();
    getline(cin, p.name);
    cout << "Patient Age: ";
    cin >> p.age;
    patients.push_back(p);
    cout << "Patient added successfully!\n";
}

void showPatients() {
    cout << "\n--- Patient List ---\n";
    for (auto p : patients) {
        cout << "ID: " << p.id << ", Name: " << p.name << ", Age: " << p.age << endl;
    }
}

void addDoctor() {
    Doctor d;
    cout << "Doctor ID: ";
    cin >> d.id;
    cout << "Doctor Name: ";
    cin.ignore();
    getline(cin, d.name);
    cout << "Department: ";
    getline(cin, d.department);
    doctors.push_back(d);
    cout << "Doctor added successfully!\n";
}

void showDoctors() {
    cout << "\n--- Doctor List ---\n";
    for (auto d : doctors) {
        cout << "ID: " << d.id << ", Name: " << d.name 
             << ", Dept: " << d.department << endl;
    }
}

void addNurse() {
    Nurse n;
    cout << "Nurse ID: ";
    cin >> n.id;
    cout << "Nurse Name: ";
    cin.ignore();
    getline(cin, n.name);
    nurses.push_back(n);
    cout << "Nurse added successfully!\n";
}

void showNurses() {
    cout << "\n--- Nurse List ---\n";
    for (auto n : nurses) {
        cout << "ID: " << n.id << ", Name: " << n.name << endl;
    }
}

int main() {
    int choice;
    while (true) {
        cout << "\n===== Hospital ER System =====\n";
        cout << "1. Add Patient\n";
        cout << "2. Show Patients\n";
        cout << "3. Add Doctor\n";
        cout << "4. Show Doctors\n";
        cout << "5. Add Nurse\n";
        cout << "6. Show Nurses\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addPatient(); break;
            case 2: showPatients(); break;
            case 3: addDoctor(); break;
            case 4: showDoctors(); break;
            case 5: addNurse(); break;
            case 6: showNurses(); break;
            case 0: return 0;
            default: cout << "Invalid choice!\n";
        }
    }
}
