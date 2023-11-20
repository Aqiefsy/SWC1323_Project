/*program purpose:to calculate the average of attendance/programmer designed function
programmer:adib afzal
date:20/11/2023*/
#include<iostream>
#include<string>

const int max_student= 50;

int attendance[max_student];

double calculate_average_attendance(int numstudent)
{
	double totalattendance =0.0;
	for (int a = 0; a < numstudent; a++)
	{
		totalattendance += attendance[a];
	 } 
	 
	return totalattendance / numstudent;
}

int main()
{
	int numstudent;
	int attendance[max_student];
	 std::cout << "Enter the number of students (up to " << max_student<< "): ";
    std::cin >> numstudent;

    if (numstudent <= 0 || numstudent > max_student) {
        std::cout << "Invalid number of students. Please enter a value between 1 and " << max_student << ".\n";
        return 1;
    }
	for (int a = 0; a < numstudent;++a)
	{
		std::cout<<"insert the % of attendence for student"<<a+1<<":";
		std::cin>>attendance [a];
	}
	
	double averageattendance=calculate_average_attendance(numstudent);
	
	for(int a = 0; a < numstudent;++a)
	{
		 std::cout << "Attendance (%): " << attendance[a] << "\n";
	}
	std::cout << "Average Attendance for All Students: " << averageattendance  << "\n";
	
	return 0;
}