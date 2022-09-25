#include "BasicWeapon.h"
	void BasicWeapon::sword(int x, int y, int z){
	
	Controller* ctrl = new Controller();
	char tab = 0;
	int II = 0;
	int XX = 0;
	int YY = 0;
	int aX = 0;
	int aY = 0;
	if ((z==1)&&(x==1)) {II=7; XX=-1; YY=1; aX=1; aY=-1; tab=47;}
	if ((z==2)&&(x==1)) {II=6; XX=0; YY=0; aX=1; aY=0; tab=196;}
	if ((z==3)&&(x==1)) {II=7; XX=-1; YY=-1; aX=1; aY=1; tab=92;}
	if ((z==4)&&(x==1)) {II=8; XX=-8; YY=1; aX=0; aY=-1; tab=179;}
	if ((z==0)&&(x==1)) {II=8; XX=0; YY=1; aX=0; aY=-1; tab=179;}
	if ((z==1)&&(x==2)) {II=7; XX=10; YY=1; aX=-1; aY=-1; tab=92;}
	if ((z==2)&&(x==2)) {II=6; XX=9; YY=0; aX=-1; aY=0; tab=196;}
	if ((z==3)&&(x==2)) {II=7; XX=10; YY=-1; aX=-1; aY=1; tab=47;}
	if ((z==4)&&(x==2)) {II=8; XX=17; YY=1; aX=0; aY=-1; tab=179;}
	if ((z==0)&&(x==2)) {II=8; XX=9; YY=1; aX=0; aY=-1; tab=179;}
	ctrl->Console_Color(y);
	for (int i=0; i<II; i++){ctrl->gotoxy(35+XX,12+YY); cout << tab; XX=XX+aX; YY=YY+aY;}
	switch(x){
	case 1: ctrl->gotoxy(1,8); break;
	case 2: ctrl->gotoxy(72,8); break;
	}
	switch(y){
	case 8: cout << "Basic"; break;
	case 10: cout << "Earth"; break;
	case 11: cout << "Water"; break;
	case 14: cout << "Wind"; break;
	}
	ctrl->gotoxy(1,22);
	ctrl->Console_Color(15);
	delete ctrl;
	
}

BasicWeapon::BasicWeapon(){}
