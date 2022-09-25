#include "Player2.h"
Player2::Player2(){}

string Player2::name = "MissingNo";
int Player2::state = 0;
int Player2::defendstate=0;
int Player2::attackstate=0;
int Player2::arcol = 8;
int Player2::hmcol = 8;
int Player2::lgcol = 8;
int Player2::shcol = 8;
int Player2::swcol = 8;
int Player2::health = 999;
int Player2::maxhealth = 1000;

void Player2::kill(){
	Controller* ctrl = new Controller();
	char tab = 0;
	tab = 255;
	for (int j=6;j<20;j++) {
		for(int i=41; i<56; i++){
			ctrl->gotoxy(i,j); cout << tab;
		}
	}
	ctrl->gotoxy(1,22);
	delete ctrl;
};

void Player2::draw(){
	Controller* ctrl = new Controller();
	char tab = 219;
	BasicWeapon* bw = new BasicWeapon;
	BasicArmor* ba = new BasicArmor;
	BasicLeg* bl = new BasicLeg;
	BasicShield* bs = new BasicShield;
	BasicHelm* bh = new BasicHelm;
	bw->sword(2,swcol,attackstate);
	bs->shield(2,shcol,defendstate);
	bh->helm(2,hmcol);
	ba->armor(2,arcol);
	bl->leg(2,lgcol);
	ctrl->Console_Color(13);
	ctrl->gotoxy(47,7); cout << tab;
	ctrl->gotoxy(48,7); cout << tab;
	ctrl->gotoxy(49,7); cout << tab;
	ctrl->gotoxy(47,8); cout << tab;
	ctrl->gotoxy(48,8); cout << tab;
	ctrl->gotoxy(49,8); cout << tab;
	ctrl->gotoxy(48,9); cout << tab;
	ctrl->gotoxy(48,10); cout << tab;
	ctrl->gotoxy(45,12); cout << tab;
	ctrl->gotoxy(51,12); cout << tab;
	ctrl->gotoxy(1,22);
	ctrl->Console_Color(15);
	delete bw;
	delete ba;
	delete bl;
	delete bs;
	delete bh;
	delete ctrl;
};

void Player2::setArmorWeapon(int x) {
	switch (x){
		case 0: arcol = 8; break;
		case 1: arcol = 10; break;
		case 2: arcol = 11; break;
		case 3: arcol = 14; break;
	}
}

void Player2::setSwordWeapon(int x) {
	switch (x){
		case 0: swcol = 8; break;
		case 1: swcol = 10; break;
		case 2: swcol = 11; break;
		case 3: swcol = 14; break;
	}
}

void Player2::setHelmWeapon(int x) {
	switch (x){
		case 0: hmcol = 8; break;
		case 1: hmcol = 10; break;
		case 2: hmcol = 11; break;
		case 3: hmcol = 14; break;
	}
}

void Player2::setLegWeapon(int x) {
	switch (x){
		case 0: lgcol = 8; break;
		case 1: lgcol = 10; break;
		case 2: lgcol = 11; break;
		case 3: lgcol = 14; break;
	}
}

void Player2::setShieldWeapon(int x) {
	switch (x){
		case 0: shcol = 8; break;
		case 1: shcol = 10; break;
		case 2: shcol = 11; break;
		case 3: shcol = 14; break;
	}
}

string Player2::give_name() {return name;};
int Player2::give_attstate() {return attackstate;};
int Player2::give_defstate() {return defendstate;};
void Player2::set_health(int x){health=x;};
void Player2::set_maxhealth(int x){maxhealth=x;};
void Player2::set_state(int x){state=x;};
void Player2::set_name(string x){name=x;};
void Player2::set_attstate(int x){attackstate=x;};
void Player2::set_defstate(int x){defendstate=x;};

int Player2::give_ShiledColor(){return shcol;};
int Player2::give_HelmColor(){return hmcol;};
int Player2::give_SwordColor(){return swcol;};
int Player2::give_ArmorColor(){return arcol;};
int Player2::give_LegColor(){return lgcol;};

int Player2::give_health() {return health;};
int Player2::give_maxhealth() {return maxhealth;};
int Player2::give_state() {return state;};
