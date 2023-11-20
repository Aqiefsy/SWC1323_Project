/*
Filename: InputStudentData.cpp
Programmer: Arib
Matrix No: AM2307014208
Date: 18 November 2023
*/
#include <iostream>
#include <string>

const int MAX_STUDENTS = 50;

int studentID[MAX_STUDENTS];
std::string studentName[MAX_STUDENTS];
double scores[MAX_STUDENTS];
int attendance[MAX_STUDENTS];
int contacts[MAX_STUDENTS];
std::string address[MAX_STUDENTS];

// Function to input student data
void inputStudentData(int numStudents) {
    for (int i = 0; i < numStudents; ++i) {
        std::cout << "Enter Student ID for student " << i + 1 << ": ";
        std::cin >> studentID[i];

        std::cout << "Enter Student Name for student " << i + 1 << ": ";
        std::cin.ignore();
        std::getline(std::cin, studentName[i]);

        std::cout << "Enter score for student " << i + 1 << ": ";
        std::cin >> scores[i];

        std::cout << "Enter Attendance (%) for student " << i + 1 << ": ";
        std::cin >> attendance[i];

        std::cout << "Enter Contacts for student " << i + 1 << ": ";
        std::cin >> contacts[i];

        std::cout << "Enter address for student " << i + 1 << ": ";
        std::cin.ignore();
        std::getline(std::cin, address[i]);
    }
}

// Function to calculate average attendance
double calculateAverageAttendance(int numStudents) {
    double totalAttendance = 0;
    for (int i = 0; i < numStudents; ++i) {
        totalAttendance += attendance[i];
    }
    return (numStudents > 0) ? (totalAttendance / numStudents) : 0;
}

// Function to display student records
void displayStudentRecords(int numStudents, double averageScore, double averageAttendance) {
    std::cout << "Student Records:\n";
    std::cout << "------------------------------------------\n";
    for (int i = 0; i < numStudents; ++i) {
        std::cout << "Student ID: " << studentID[i] << "\n";
        std::cout << "Student Name: " << studentName[i] << "\n";
        std::cout << "Score: " << scores[i] << "\n";
        std::cout << "Attendance (%): " << attendance[i] << "\n";
        std::cout << "Contacts: " << contacts[i] << "\n";
        std::cout << "Address: " << address[i] << "\n";
        std::cout << "---------------------------------------\n";
    }
    std::cout << "Average Attendance for All Students: " << averageAttendance << "\n";
}

int main() {
    int numStudents;
    std::cout << "Enter the number of students: ";
    std::cin >> numStudents;

    inputStudentData(numStudents);
    double averageAttendance = calculateAverageAttendance(numStudents);
    displayStudentRecords(numStudents, 0, averageAttendance);  // Assuming averageScore is not calculated in the provided code

    return 0;
}
