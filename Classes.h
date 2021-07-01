#ifndef CLASSES_H
#define CLASSES_H
#include "Classes.h"
#include <String>

// Functions 
	
	void displayIntro();
	void displayWelcome();
	void showTime();
	void passCode();
	void changePasscode();
	void MainMenu();
	void menu();
	void introSequence();
	char *exportTime();
	
	
// Classes
class getAndSet {
	public:
		virtual void setInfo() = 0;
		virtual void getInfo() = 0;
};

class Doctor : public getAndSet {
	
	public:
	char name[50], time[30], doctor[99],  appNum[45], age[44];
	char all[999]; char currDate[30];
	
	void setInfo();
 	void getInfo();
	
};


class Staff : public getAndSet {
	
	public:
		
	char all[999];
	char name[50], age[20], sal[30], pos[20], staffNum[60];
	
	void setInfo();
	void getInfo();	
};



class Schedules {
	
	public:
		void doctorSchedules();
		
};



#endif
