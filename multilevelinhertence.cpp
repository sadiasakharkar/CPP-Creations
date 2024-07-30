#include <iostream>
#include <string>

using namespace std;

// Base class
class Person {
protected:
    string name;

public:
    void setName() {
        cout << "Enter patient name: ";
        getline(cin, name);
    }
};

// Intermediate class inheriting from Person
class Patient : public Person {
protected:
    int bedNumber;

public:
    void setBedInfo() {
        cout << "Enter bed number: ";
        cin >> bedNumber;
        cin.ignore(); // To consume the newline character left in the input buffer
    }
};

// Intermediate class inheriting from Patient
class MedicalRecord : public Patient {
protected:
    string wardName;

public:
    void setWardInfo() {
        cout << "Enter ward name: ";
        getline(cin, wardName);
    }
};

// Derived class inheriting from MedicalRecord
class Doctor : public MedicalRecord {
protected:
    string doctorName;
    string doctorDegree;
    double fee;

public:
    void setDoctorInfo() {
        cout << "Enter doctor's name: ";
        getline(cin, doctorName);

        cout << "Enter doctor's degree: ";
        getline(cin, doctorDegree);

        cout << "Enter fee: ";
        cin >> fee;
    }

    // Display all information
    void displayInfo() {
        cout << "\nPatient Information:\n";
        cout << "Name: " << name << endl;
        cout << "Bed Number: " << bedNumber << endl;
        cout << "Ward Name: " << wardName << endl;
        cout << "Doctor's Name: " << doctorName << endl;
        cout << "Doctor's Degree: " << doctorDegree << endl;
        cout << "Fee: " << fee << endl;
    }
};

int main() {
    // Create an object of the derived class
    Doctor patientInfo;

    // Set information using member functions
    patientInfo.setName();
    patientInfo.setBedInfo();
    patientInfo.setWardInfo();
    patientInfo.setDoctorInfo();

    // Display the information
    patientInfo.displayInfo();

    return 0;
}
