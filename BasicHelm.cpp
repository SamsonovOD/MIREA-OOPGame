#include "BasicHelm.h"
BasicHelm::BasicHelm(){}

void BasicHelm::helm(int x, int y){
	Controller* ctrl = new Controller();
	char tab = 38;
	switch(x){
		case 1: ctrl->gotoxy(1,11); break;
		case 2: ctrl->gotoxy(72,11); break;
	}
	ctrl->Console_Color(y);
	switch (y){
		case 8: cout << "Basic"; break;
		case 11: cout << "Water"; break;
		case 10: cout << "Earth"; break;
		case 14: cout << "Wind"; break;
	}
	ctrl->gotoxy(29+17*(x-1),8); cout << tab; 
	ctrl->gotoxy(29+17*(x-1),7); cout << tab; 
	ctrl->gotoxy(29+17*(x-1),6); cout << tab; 
	ctrl->gotoxy(30+17*(x-1),6); cout << tab; 
	ctrl->gotoxy(31+17*(x-1),6); cout << tab; 
	ctrl->gotoxy(32+17*(x-1),6); cout << tab; 
	ctrl->gotoxy(33+17*(x-1),6); cout << tab; 
	ctrl->gotoxy(33+17*(x-1),7); cout << tab; 
	ctrl->gotoxy(33+17*(x-1),8); cout << tab;
	ctrl->gotoxy(1,22);
	ctrl->Console_Color(15);
	delete ctrl;
}

