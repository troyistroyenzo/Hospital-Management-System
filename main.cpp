/*
	Author: Pastoral, Lorenzo Troy
	Project: Hospital Management System (Implementing OOP)
*/

// Libraries //
#include<iostream>
#include<conio.h>
#include<fstream>
#include<iomanip>
#include<cstring>
#include<windows.h>
#include<time.h>

// Directories 
#include "Classes.h"

using namespace std;



int main(int argc, char** argv) {
	

	introSequence();
	cout << "Press any key to enter...";
	getch();

	// Program Starts Here
	passCode();
	system("pause");
	

	
	
	
	return 0;
}
