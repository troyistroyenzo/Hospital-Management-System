



#include "Classes.h"

#include <iostream>
#include<iostream>
#include<conio.h>
#include<fstream>
#include<iomanip>
#include<cstring>
#include<windows.h>
#include<time.h>
#include <String>

using namespace std;





void showTime() {
 
	 char currDate[30];
	 time_t t = time(NULL);
	 struct tm tm = *localtime(&t);
	 sprintf(currDate, "%d-%d-%d %d:%d:%d", tm.tm_year +
	1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min,
	tm.tm_sec);
	 cout << "IBU: " << currDate << "\n\n\n";


}

char *exportTime() {
	char currDate[30];
	 time_t t = time(NULL);
	 struct tm tm = *localtime(&t);
	 sprintf(currDate, "%d-%d-%d %d:%d:%d", tm.tm_year +
	1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min,
	tm.tm_sec);
	 return currDate;

	
}


