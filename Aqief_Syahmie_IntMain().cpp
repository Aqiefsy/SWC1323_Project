/*
Program Purpose: Manage Studnet Records
Programmer: Aqief Syahmie
*/

#include <iostream>
#include <string>

using namespace std;

const int MAX_STUDENTS = 50;

int studentID[MAX_STUDENTS];
string studentName[MAX_STUDENTS];
double scores[MAX_STUDENTS];
int attendance[MAX_STUDENTS];
int contacts[MAX_STUDENTS];
string address[MAX_STUDENTS];

// Function to input student data
void inputStudentData(int numStudents) {
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter Student ID for student " << i + 1 << ": ";
        cin >> studentID[i];

        cout << "Enter Student Name for student " << i + 1 << ": ";
        cin.ignore(); 
        getline(cin, studentName[i]);

        cout << "Enter Scores for student " << i + 1 << ": ";
        cin >> scores[i];

        cout << "Enter Attendance (%) for student " << i + 1 << ": ";
        cin >> attendance[i];

        cout << "Enter Contacts for student " << i + 1 << ": ";
        cin >> contacts[i];

        cout << "Enter address for student " << i + 1 << ": ";
        cin.ignore();
        getline(cin, address[i]);
        
        cout << "\n\n";
    }
}

// Function to calculate average scores
double calculateAverageScores(int numStudents) {
    double totalScores = 0.0;
    for (int i = 0; i < numStudents; ++i) {
        totalScores += scores[i];
    }
    return totalScores / numStudents;
}

// Function to calculate average attendance
double calculateAverageAttendance(int numStudents) {
    double totalAttendance = 0.0;
    for (int i = 0; i < numStudents; ++i) {
        totalAttendance += attendance[i];
    }
    return totalAttendance / numStudents;
}

// Function to display student records
void displayStudentRecords(int numStudents, double averageScore, double averageAttendance) {
    cout << "Student Records:\n";
    cout << "-------------------------------------------\n";
    for (int i = 0; i < numStudents; ++i) {
        cout << "Student ID: " << studentID[i] << "\n";
        cout << "Student Name: " << studentName[i] << "\n";
        cout << "Scores: " << scores[i] << "\n";
        cout << "Attendance (%): " << attendance[i] << "\n";
        cout << "Contacts: " << contacts[i] << "\n";
        cout << "Address: " << address[i] << "\n";
        cout << "-------------------------------------------\n";
        cout << "\n\n";
    }
    cout << "Average Scores for All Students: " << averageScore << "\n";
    cout << "Average Attendance for All Students: " << averageAttendance << "\n";
}

int main() {
    int numStudents;

    cout << "Enter the number of students (up to " << MAX_STUDENTS << "): ";
    cin >> numStudents;

    if (numStudents <= 0 || numStudents > MAX_STUDENTS) {
        cout << "Invalid number of students. Please enter a value between 1 and " << MAX_STUDENTS << ".\n";
        return 1;
    }

    inputStudentData(numStudents);
    double averageScore = calculateAverageScores(numStudents);
    double averageAttendance = calculateAverageAttendance(numStudents);
    displayStudentRecords(numStudents, averageScore, averageAttendance);

    return 0;
}