#include "BasicShield.h"
BasicShield::BasicShield(){}

void BasicShield::shield(int x, int y, int z){
	Controller* ctrl = new Controller();
	char tab = 178;
	int xx = 0;
	int yy = 0;
	if ((z==0)&&(x==1)) {xx=0;}
	if ((z==0)&&(x==2)) {xx=11;}
	if ((z!=0)&&(x==1)) {xx=11;}
	if ((z!=0)&&(x==2)) {xx=0;}
	switch(z){
	case 0: yy=0; break;
	case 1: yy=-5; break;
	case 2: yy=0; break;
	case 3: yy=4; break;
	}
	switch(x){
		case 1: ctrl->gotoxy(1,17); break;
		case 2: ctrl->gotoxy(72,17); break;
	}
	ctrl->Console_Color(y);
	switch (y){
		case 8: cout << "Basic"; break;
		case 11: cout << "Water"; break;
		case 10: cout << "Earth"; break;
		case 14: cout << "Wind"; break;
	}
	ctrl->gotoxy(24+17*(x-1)+xx,11+yy); cout << tab; 
	ctrl->gotoxy(25+17*(x-1)+xx,11+yy); cout << tab; 
	ctrl->gotoxy(26+17*(x-1)+xx,11+yy); cout << tab; 
	ctrl->gotoxy(27+17*(x-1)+xx,11+yy); cout << tab; 
	ctrl->gotoxy(24+17*(x-1)+xx,12+yy); cout << tab; 
	ctrl->gotoxy(25+17*(x-1)+xx,12+yy); cout << tab; 
	ctrl->gotoxy(26+17*(x-1)+xx,12+yy); cout << tab; 
	ctrl->gotoxy(27+17*(x-1)+xx,12+yy); cout << tab; 
	ctrl->gotoxy(24+17*(x-1)+xx,13+yy); cout << tab; 
	ctrl->gotoxy(25+17*(x-1)+xx,13+yy); cout << tab; 
	ctrl->gotoxy(26+17*(x-1)+xx,13+yy); cout << tab; 
	ctrl->gotoxy(27+17*(x-1)+xx,13+yy); cout << tab; 
	ctrl->gotoxy(24+17*(x-1)+xx,14+yy); cout << tab; 
	ctrl->gotoxy(25+17*(x-1)+xx,14+yy); cout << tab; 
	ctrl->gotoxy(26+17*(x-1)+xx,14+yy); cout << tab; 
	ctrl->gotoxy(27+17*(x-1)+xx,14+yy); cout << tab; 
	ctrl->gotoxy(25+17*(x-1)+xx,15+yy); cout << tab; 
	ctrl->gotoxy(26+17*(x-1)+xx,15+yy); cout << tab;
	ctrl->gotoxy(1,22);
	ctrl->Console_Color(15);
	delete ctrl;
}


