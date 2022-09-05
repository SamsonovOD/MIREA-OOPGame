#include "Player1.h"
Player1::Player1(){}

string Player1::name = "MissingNo";
int Player1::state = 0;
int Player1::defendstate=0;
int Player1::attackstate=0;
int Player1::arcol = 8;
int Player1::hmcol = 8;
int Player1::lgcol = 8;
int Player1::shcol = 8;
int Player1::swcol = 8;
int Player1::health = 999;
int Player1::maxhealth = 1000;

void Player1::kill(){
	Controller* ctrl = new Controller();
	char tab = 0;
	tab = 255;
	for (int j=6;j<20;j++){
		for(int i=24; i<39; i++){
			ctrl->gotoxy(i,j); cout << tab;
		}
	}
	ctrl->gotoxy(1,22);
	delete ctrl;
};

void Player1::draw(){
	Controller* ctrl = new Controller();
	char tab = 219;
	BasicWeapon* bw = new BasicWeapon;
	BasicArmor* ba = new BasicArmor;
	BasicLeg* bl = new BasicLeg;
	BasicShield* bs = new BasicShield;
	BasicHelm* bh = new BasicHelm;
	bw->sword(1,swcol,attackstate);
	bs->shield(1,shcol,defendstate);
	bh->helm(1,hmcol);
	ba->armor(1,arcol);
	bl->leg(1,lgcol);
	ctrl->Console_Color(13);
	ctrl->gotoxy(30,7); cout << tab;
	ctrl->gotoxy(31,7); cout << tab;
	ctrl->gotoxy(32,7); cout << tab;
	ctrl->gotoxy(30,8); cout << tab;
	ctrl->gotoxy(31,8); cout << tab;
	ctrl->gotoxy(32,8); cout << tab;
	ctrl->gotoxy(31,9); cout << tab;
	ctrl->gotoxy(31,10); cout << tab;
	ctrl->gotoxy(28,12); cout << tab;
	ctrl->gotoxy(34,12); cout << tab;
	ctrl->gotoxy(1,22);
	ctrl->Console_Color(15);
	delete bw;
	delete ba;
	delete bl;
	delete bs;
	delete bh;
	delete ctrl;
};

void Player1::setArmorWeapon(int x){
	switch (x){
		case 0: arcol = 8; break;
		case 1: arcol = 10; break;
		case 2: arcol = 11; break;
		case 3: arcol = 14; break;
	}
}

void Player1::setSwordWeapon(int x){
	switch (x){
		case 0: swcol = 8; break;
		case 1: swcol = 10; break;
		case 2: swcol = 11; break;
		case 3: swcol = 14; break;
	}
}

void Player1::setHelmWeapon(int x){
	switch (x){
		case 0: hmcol = 8; break;
		case 1: hmcol = 10; break;
		case 2: hmcol = 11; break;
		case 3: hmcol = 14; break;
	}
}

void Player1::setLegWeapon(int x){
	switch (x){
		case 0: lgcol = 8; break;
		case 1: lgcol = 10; break;
		case 2: lgcol = 11; break;
		case 3: lgcol = 14; break;
	}
}

void Player1::setShieldWeapon(int x){
	switch (x){
		case 0: shcol = 8; break;
		case 1: shcol = 10; break;
		case 2: shcol = 11; break;
		case 3: shcol = 14; break;
	}
}

string Player1::give_name() {return name;};
int Player1::give_attstate() {return attackstate;};
int Player1::give_defstate() {return defendstate;};
void Player1::set_health(int x){health=x;};
void Player1::set_maxhealth(int x){maxhealth=x;};
void Player1::set_state(int x){state=x;};
void Player1::set_name(string x){name=x;};
void Player1::set_attstate(int x){attackstate=x;};
void Player1::set_defstate(int x){defendstate=x;};

int Player1::give_ShiledColor(){return shcol;};
int Player1::give_HelmColor(){return hmcol;};
int Player1::give_SwordColor(){return swcol;};
int Player1::give_ArmorColor(){return arcol;};
int Player1::give_LegColor(){return lgcol;};

int Player1::give_health() {return health;};
int Player1::give_maxhealth() {return maxhealth;};
int Player1::give_state() {return state;};
