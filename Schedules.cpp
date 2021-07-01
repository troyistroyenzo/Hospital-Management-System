#include "Classes.h"

#include<iostream>
#include<conio.h>
#include<fstream>
#include<cstring>
#include<windows.h>
#include<time.h>

using namespace std;


void Schedules :: doctorSchedules() {
			
			system("cls");
			system("color A");
			cout << "\t\t  | ++++++++++ MAIN MENU ++++++++++ |     \n"
		   		 << "\t\t  |     HOSPITAL MANAGEMENT SYSTEM  |     \n"
				 << "\t\t  |            version 1.0          |     \n"
				 << "\n-------------------------------------------------------\n"
				 << "\n\n\t\t(Three Doctor Available) \n\n \t\t[Information and Timing are Given Below] \n" 
				 << "---------------------------------------------------------------------------------\n"
				 << "\t\t*** AVAILABLE DOCTORS ***:\n\n"
				 << "\t\tDr. Troy Lixir \n\n"
				 << "\t\t[[Time]]:\n\n" 
				 << "\tMonday To Friday \t\t9AM to 6PM\n"
				 << "\tSaturday        \t\t12PM to 4PM\n"
				 << "\tSunday          \t\t NONE \n"
				 << "\n------------------------------------------------------------------------------\n"
				 << "\t\tDr. Jasmine Decath\n\n"
				 << "\t\t\t[[Time]]:\n\n"
				 << "\tMonday To Friday \t\t8AM to 5PM\n"
				 << "\tSaturday        \t\t9AM to 1PM\n"
				 << "\tSunday          \t\t NONE \n"
				 << "\n------------------------------------------------------------------------------\n"
				 << "\t\tDr. Andrew Wock\n\n"
				 << "\t\t\t[[Time]]:\n\n"
				 << "\tMonday To Friday \t\t11AM to 7PM\n"
				 << "\tSaturday        \t\t6PM to 9PM\n"
				 << "\tSunday          \t\t NONE \n"
				 << "\nPress any key to continue";
				 getch();
			     MainMenu();
		}
		
		

