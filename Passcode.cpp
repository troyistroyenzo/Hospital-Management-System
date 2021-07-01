#include "Classes.h"

#include <iostream>
#include<iostream>
#include<conio.h>
#include<fstream>
#include<iomanip>
#include<cstring>
#include<windows.h>
#include<time.h>

using namespace std;



void passCode() {
		
		system("cls");
		char p1[50], p2[50], p3[50];
		
		system("color A");
		ifstream in("password.txt"); {
			
			cin.sync();
			cout << "\n\n";
			cout << "\t\t  | ++++++++++ MAIN MENU ++++++++++ |     \n"
		   		 << "\t\t  |     HOSPITAL MANAGEMENT SYSTEM  |     \n"
				 << "\t\t  |            version 1.0          |     \n"
				 << "\n\n\n\n\t\t\t ENTER PASSCODE: ";
			cin.getline(p1, 50);
			in.getline(p2, 50);
			if(strcmp(p2,p1) == 0) {
				
				MainMenu();
				
			} else {
				
				cout << "\t\tWRONG PASSWORD! Please try again.";
				Sleep(999);
				passCode();
				
			}
		}
		in.close();
		
} 

// Change pass// 


void changePasscode() {
	char n[50];
	system("cls");
	ofstream out("password.txt"); {
		cin.sync();
		system("cls");
		cout << "\t\t  | ++++++++++ MAIN MENU ++++++++++ |     \n"
			 << "\t\t  |     HOSPITAL MANAGEMENT SYSTEM  |     \n"
			 << "\t\t  |            version 1.0          |     \n";
		cout << "\t\t >> Enter New Password: ";
		cin.getline(n, 50);
		out << n;
		
	}
	
	out.close();
	cout<<"Password saved";
	getch();
		MainMenu();
		
}






