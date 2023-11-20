/*
Program Purpose: To calculate average scores
Programmer : Alif Adham

*/

// Function to calculate average scores
double calculateAverageScores(int numStudents) {
    double totalScores = 0.0;
    for (int i = 0; i < numStudents; ++i) {
        totalScores += scores[i];
    }
    return totalScores / numStudents;
}