#include "BasicLeg.h"
BasicLeg::BasicLeg(){}

void BasicLeg::leg(int x, int y)
{
	Controller* ctrl = new Controller();
	char tab = 119;
	switch(x){
		case 1: ctrl->gotoxy(1,20); break;
		case 2: ctrl->gotoxy(72,20); break;
	}
	ctrl->Console_Color(y);
	switch (y){
		case 8: cout << "Basic"; break;
		case 11: cout << "Water"; break;
		case 10: cout << "Earth"; break;
		case 14: cout << "Wind"; break;
	}
	ctrl->gotoxy(29+17*(x-1),15); cout << tab; 
	ctrl->gotoxy(29+17*(x-1),16); cout << tab; 
	ctrl->gotoxy(29+17*(x-1),17); cout << tab; 
	ctrl->gotoxy(29+17*(x-1),18); cout << tab; 
	ctrl->gotoxy(29+17*(x-1),19); cout << tab; 
	ctrl->gotoxy(30+17*(x-1),15); cout << tab; 
	ctrl->gotoxy(30+17*(x-1),16); cout << tab; 
	ctrl->gotoxy(30+17*(x-1),17); cout << tab; 
	ctrl->gotoxy(30+17*(x-1),18); cout << tab; 
	ctrl->gotoxy(30+17*(x-1),19); cout << tab;
	ctrl->gotoxy(31+17*(x-1),15); cout << tab; 
	ctrl->gotoxy(31+17*(x-1),16); cout << tab; 
	ctrl->gotoxy(32+17*(x-1),15); cout << tab; 
	ctrl->gotoxy(32+17*(x-1),16); cout << tab; 
	ctrl->gotoxy(32+17*(x-1),17); cout << tab; 
	ctrl->gotoxy(32+17*(x-1),18); cout << tab; 
	ctrl->gotoxy(32+17*(x-1),19); cout << tab;  
	ctrl->gotoxy(33+17*(x-1),15); cout << tab; 
	ctrl->gotoxy(33+17*(x-1),16); cout << tab; 
	ctrl->gotoxy(33+17*(x-1),17); cout << tab; 
	ctrl->gotoxy(33+17*(x-1),18); cout << tab; 
	ctrl->gotoxy(33+17*(x-1),19); cout << tab;
	ctrl->gotoxy(1,22);
	ctrl->Console_Color(15);
	delete ctrl;
}

