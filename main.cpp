// Priscilla Cook
// 02/19/22
// =============================================
// Design a program that will prompt the user for the year
// they were born and calculate how old they are (roughly).
// =============================================


#include <iostream>

using namespace std;

int main()
{

    int CurrentYear, BirthYear, Age;        // Declare variables and set current year
    CurrentYear=2022;

    cout << "Please provide year of birth: " << endl;     // Ask user for the year they were born and store in a variable
    cin >> BirthYear;

    Age=CurrentYear - BirthYear;    // Subtract year born from current year and store result

    cout << "You are " << Age << " years old." << endl;   // Display result

    return 0;
}
