// Module5_Chp9_Ex16_WarstlerC.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double startingNum = 10;

// This sets the header for the table
	cout << setw(7) << "Number" << setw(15) << "Square" << setw(15) << "Cube" << endl << endl;

// For loop will print each line of the table: 10, 11, 12, and 13
	for (startingNum = 10; startingNum <= 13; startingNum++)
	{

// The body of the for loop sets the width and applies the power to the number, then prints it
		cout << setw(7) << startingNum << setw(15) << pow(startingNum, 2) << setw(15) << pow(startingNum, 3) << endl;
	}
}