/* Program Purpose: To display all student information including ID, name, scores, attendance, contacts, address, average scores, and average attendance.

Programmer: Erfan Danish

Date: 20 Nov 2023 */

#include<iostream>
#include<string>
using namespace std;

const int MAX_STUDENTS = 50;

int studentID[MAX_STUDENTS];
string studentName[MAX_STUDENTS];
double scores[MAX_STUDENTS];
int attendance[MAX_STUDENTS];
int contacts[MAX_STUDENTS];
string address[MAX_STUDENTS];

void displayStudentRecords(int numStudents, double averageScore, double averageAttendance) {

    cout << "Student Records:\n";
    cout << "----------------------------------------------\n";

    for (int i = 0; i < numStudents; ++i) {
        cout << "Student ID: " << studentID[i] << "\n";
        cout << "Student Name: " << studentName[i] << "\n";
        cout << "Scores: " << scores[i] << "\n";
        cout << "Attendance(%): " << attendance[i] << "\n";
        cout << "Contacts: " << contacts[i] << "\n";
        cout << "Address: " << address[i] << "\n";

        cout << "----------------------------------------------\n";
    }

    cout << "Average Scores for All Students: " << averageScore << "\n";
    cout << "Average Attendance for All Students: " << averageAttendance << "\n";
}
