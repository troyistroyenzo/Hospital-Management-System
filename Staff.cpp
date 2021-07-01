#include "Classes.h"

#include<iostream>
#include<conio.h>
#include<fstream>
#include<cstring>
#include<windows.h>
#include<time.h>
#include<windows.h>
#include<cstdlib>
#include<conio.h>
#include<time.h>
#include<iomanip>
#include<cstring>
#include<fstream>
#include<ctime>
#include<cctype>
#include<cstdio>
#include<string>
#include<limits>
#include<ios>


using namespace std;

void Doctor::getInfo() {
		
		system("cls");
		cout << "\t\t  | ++++++++++ MAIN MENU ++++++++++ |     \n"
			 << "\t\t  |     HOSPITAL MANAGEMENT SYSTEM  |     \n"
			 << "\t\t  |            version 1.0          |     \n";
		ifstream in ("patientDatabase.txt");
		if(!in) {
		 cout << "\n\n\t\t No entries have been made \n\n";
		system("pause");
	    MainMenu();
		 
		}
	
		while(!in.eof()) {
			in.getline(all, 999);
			cout << all << endl;
		}
		in.close();
		system("pause");
		MainMenu();
	}
	
void Doctor:: setInfo() {
	

		ofstream out("patientDatabase.txt", ios::app); {
			system("cls");
			cout << "\t\t  | ++++++++++ MAIN MENU ++++++++++ |     \n"
		   		 << "\t\t  |     HOSPITAL MANAGEMENT SYSTEM  |     \n"
				 << "\t\t  |            version 1.0          |     \n";
			cin.sync();
			cin.clear();
			cout <<"\n\t\t >>> Enter Patient's 'Name = ";
			cin.getline(name, 50);
			cout <<"\n\t\t >>> Enter Patient's Age' = ";
			cin.getline(age, 50);
			cout <<"\n\t\t >>> Enter Doctor of Choice = ";
			cin.getline(doctor, 30);
			cout <<"\n\t\t >>> Enter Appointment Number = ";
			cin.getline(appNum, 50);
			cout <<"\n\t\t >>> Enter Appointment Time = ";
			cin.getline(time, 20);
		}
		out << "\n\t\tDATE ISSUED: " << exportTime()
		<< "\n\t\tPatient Name: " 
		<< name	<< "\n\t\tPatient Age: " 
		<< age << "\n\t\tAppointed Doctor: " 
		<< doctor << "\n\t\tAppointment Number: " 
		<< appNum << "\n\t\tAppointed Schedule: "
		<< time << "\n\t\t------------------------------\n";
		out.close();
		cout<<"\n\n\t\t**Info Saved** -- \n\t\t\tPress any key to continue...";
		getch();
		MainMenu();
	}
	
	

///// DOC ///

void Staff::getInfo() {
		
		system("cls");
		cout << "\t\t  | ++++++++++ MAIN MENU ++++++++++ |     \n"
		   		 << "\t\t  |     HOSPITAL MANAGEMENT SYSTEM  |     \n"
				 << "\t\t  |            version 1.0          |     \n";
		ifstream in ("staffDatabase.txt");
		if(!in) {
		 cout << "\n\n\t\t No entries have been made \n\n";
		 system("pause");
	    MainMenu();
		}
	
		while(!in.eof()) {
			in.getline(all, 999);
			cout << all << endl;
		}
		in.close();
		system("pause");
	    MainMenu();
			
		
	}	
	
	
void Staff::setInfo() {
		ofstream out("staffDatabase.txt", ios::app); {
			system("cls");
			cin.sync();
			cout << "\t\t  | ++++++++++ MAIN MENU ++++++++++ |     \n"
		   		 << "\t\t  |     HOSPITAL MANAGEMENT SYSTEM  |     \n"
				 << "\t\t  |            version 1.0          |     \n";
			cout <<"\n\t\t >>> Enter Staff 'Name = ";
			cin.getline(name, 50);
			cout <<"\n\t\t >>> Enter Staff Age' = ";
			cin.getline(age, 50);
			cout <<"\n\t\t >>> Enter Salary = ";
			cin.getline(sal, 30);
			cout <<"\n\t\t >>> Enter Position = ";
			cin.getline(pos, 50);
			cout <<"\n\t\t >>> Enter Staff ID = ";
			cin.getline(staffNum, 20);
		}
		out <<"\n\t\tDATE ISSUED: " 
		<< exportTime()<< "\n\t\tStaff Name: " 
		<< name	<< "\n\t\tStaff Age: " 
		<< age << "\n\t\tStaff Salary: " 
		<< sal << "\n\t\tStaff Position: " 
		<< pos << "\n\t\tStaff ID:  "
		<< staffNum << "\n\t\t------------------------------\n";
		out.close();
		cout<<"\n\n\t\t**Info Saved** -- \n\t\t\tPress any key to continue...";
		getch();
		MainMenu();
		
	}
	
void MainMenu(){
	
	// Objects
	Schedules sched;
	getAndSet *ptr;
	Doctor doc;
	Staff staff;
	
	
	int choice;
	system("cls");
	system("color A");
	cin.clear();
	showTime();
	cout << "\n"
 		 << "\n"
		 << "\t\t  | ++++++++++ MAIN MENU ++++++++++ |     \n"
		 << "\t\t  |     HOSPITAL MANAGEMENT SYSTEM  |     \n"
		 << "\t\t  |            version 1.0          |     \n"
		 << "\n-------------------------------------------------------\n"
		 << "\t\t Select option \n"
		 << "\n\n\t(1)\t\tView Doctor's Schedules and Information\n\n"
		 << "\t(2)\t\tBook an Appointment\n\n"
		 << "\t(3)\t\tEnter Staff Information\n\n"
		 << "\t(4)\t\tView Patient Appointments\n\n"
		 << "\t(5)\t\tView Staff Information\n\n"
		 << "\t(6)\t\tPassword Settings\n\n"
		 << "\t(7)\t\t[[ Logout ]]]\n\n"
		 << "\n========================================================\n"
		 << "Enter Choice: ";
		cin >> choice;

	switch(choice) {
		// Doctor Info
		case 1:
			sched.doctorSchedules();
			break;
		// Set Doctor Appointment
		case 2:
			ptr =& doc;
			ptr -> setInfo();
			break;
		// Set Staff Info
		case 3:
			ptr =& staff;
			ptr -> setInfo();
			break;
		// Show patient Appointment
		case 4:
			ptr =& doc;
			ptr -> getInfo();
			break;
		// Show Staff Info
		case 5:
			ptr = &staff;
			ptr -> getInfo();
			break;
		// Create Pass
		case 6:
			changePasscode();
			break;
		case 7:
			passCode();
			break;
		default:
			cout << "\n\t\t >>> INVALID CHOICE! Press any key to try again...";
			getch();
			MainMenu();
			break;	
	}	
}
	
	
	
	
