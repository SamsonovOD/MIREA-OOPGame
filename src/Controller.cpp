#include "Controller.h"
#include "GotoXY.h"
#include "TableDraw.h"
#include "Import.h"
#include "Sounds.h"
#include "Turns.h"
#include "System.h"
#include "Player1.h"
#include "Player2.h"
void Controller::gotoxy (short x, short y) {
	GotoXY* gotoXY = new GotoXY(); 
	gotoXY->gotoxy (x, y);
	delete gotoXY;
};

void Controller::Console_Color (short x) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);
};

void Controller::Draw_Table() {
	TableDraw* drawer = new TableDraw; 
	drawer->Draw_Table();
	delete drawer;
};

void Controller::Draw_Health() {
	TableDraw* drawer = new TableDraw; 
	drawer->Draw_Health();
	delete drawer;
};

void Controller::Draw_Menu() {
	TableDraw* drawer = new TableDraw; 
	drawer->Draw_Menu();
	delete drawer;
};

void Controller::Draw_Options() {
	TableDraw* drawer = new TableDraw; 
	drawer->Draw_Options();
	delete drawer;
};

void Controller::Draw_Help() {
	TableDraw* drawer = new TableDraw; 
	drawer->Draw_Help();
	delete drawer;
};

void Controller::Draw_Turn() {
	TableDraw* drawer = new TableDraw; 
	drawer->Draw_Turn();
	delete drawer;
};

void Controller::Clear() {
	TableDraw* drawer = new TableDraw; 
	drawer->Clear();
	delete drawer;
};

void Controller::Save(int x) {
	Import* ip = new Import(); 
	ip->Save(x);
	delete ip;
};

void Controller::Load(int x) {
	Import* ip = new Import(); 
	ip->Load(x);
	delete ip;
};

void Controller::Delete(int x) {
	Import* ip = new Import(); 
	ip->Clear(x);
	delete ip;
};

void Controller::Play(int x) {
	Sounds* snd = new Sounds(); 
	snd->Play(x);
	delete snd;
};

void Controller::TurnAct() {
	Turns* tn = new Turns(); 
	tn->TurnAct();
	delete tn;
};

void Controller::Health_update(){
	Float2Sys((31*float(float(Player2Int("health1"))/float(Player2Int("maxhealth1")))), "healthx1");
	Float2Sys((31*float(float(Player2Int("health2"))/float(Player2Int("maxhealth2")))), "healthx2");
	Float2Sys((Sys2Float("healthx1")-floor(Sys2Float("healthx1"))), "calc1");
	Float2Sys((Sys2Float("healthx2")-floor(Sys2Float("healthx2"))), "calc2");
	if (Sys2Float("calc1")<=0.5) {Char2Sys(221, "lastbar1");}else{Char2Sys(219, "lastbar1");}
	if (Sys2Float("calc2")<=0.5) {Char2Sys(221, "lastbar2");}else{Char2Sys(219, "lastbar2");}
	if (Player2Int("health1")<=0) {Char2Sys(0, "lastbar1");Int2Player(0, "health1");Float2Sys(0, "calc1");}
	if (Player2Int("health2")<=0) {Char2Sys(0, "lastbar2");Int2Player(0, "health2");Float2Sys(0, "calc2");}
};

void Controller::Draw_Players(){
	Player1* p1 = new Player1();
	Player2* p2 = new Player2();
	p1->draw();
	p2->draw();
	delete p1;
	delete p2;
}
void Controller::Kill(int x){
	Player1* p1 = new Player1();
	Player2* p2 = new Player2();
	switch(x){
		case 1: p1->kill(); break;
		case 2: p2->kill(); break;
	}
	delete p1;
	delete p2;
}

void Controller::Int2Sys(int x, string y){
	System* sys = new System;
		if (y=="turn") {sys->set_turn(x);}
		if (y=="theturn") {sys->set_theturn(x);}
		if (y=="mode") {sys->set_mode(x);}
		if (y=="multi") {sys->set_multi(x);}
		if (y=="input1") {sys->set_input1(x);}
		if (y=="input2") {sys->set_input2(x);}
		if (y=="gturn") {sys->set_gturn(x);}
		if (y=="gtheturn") {sys->set_gtheturn(x);}
	delete sys;
}

int Controller::Sys2Int(string y){
	System* sys = new System;
		if (y=="turn") {return sys->give_turn();}
		if (y=="theturn") {return sys->give_theturn();}
		if (y=="mode") {return sys->give_mode();}
		if (y=="multi") {return sys->give_multi();}
		if (y=="input1") {return sys->give_input1();}
		if (y=="input2") {return sys->give_input2();}
		if (y=="gturn") {return sys->give_gturn();}
		if (y=="gtheturn") {return sys->give_gtheturn();}
	delete sys;
}

string Controller::GetName(string y){
Player1* p1 = new Player1(); 
Player2* p2 = new Player2(); 
		if (y=="name1") {return p1->give_name();}
		if (y=="name2") {return p2->give_name();}
delete p1;
delete p2; 
}

void Controller::GiveName(string x, string y){
Player1* p1 = new Player1(); 
Player2* p2 = new Player2(); 
		if (y=="name1") {p1->set_name(x);}
		if (y=="name2") {p2->set_name(x);}
delete p1;
delete p2; 
}

int Controller::Player2Int(string y){
	Player1* p1 = new Player1();
	Player2* p2 = new Player2();
		if (y=="health1") {return p1->give_health();}
		if (y=="state1") {return p1->give_state();}
		if (y=="maxhealth1") {return p1->give_maxhealth();}
		if (y=="attstate1") {return p1->give_attstate();}
		if (y=="defstate1") {return p1->give_defstate();}
		if (y=="health2") {return p2->give_health();}
		if (y=="state2") {return p2->give_state();}
		if (y=="maxhealth2") {return p2->give_maxhealth();}
		if (y=="attstate2") {return p2->give_attstate();}
		if (y=="defstate2") {return p2->give_defstate();}
	delete p1;
	delete p2;
}

void Controller::Int2Player(int x, string y){
	Player1* p1 = new Player1();
	Player2* p2 = new Player2();
		if (y=="health1") {p1->set_health(x);}
		if (y=="health2") {p2->set_health(x);}
		if (y=="state1") {p1->set_state(x);}
		if (y=="state2") {p2->set_state(x);}
		if (y=="attstate1") {p1->set_attstate(x);}
		if (y=="attstate2") {p2->set_attstate(x);}
		if (y=="defstate1") {p1->set_defstate(x);}
		if (y=="defstate2") {p2->set_defstate(x);}
		if (y=="maxhealth1") {p1->set_maxhealth(x);}
		if (y=="maxhealth2") {p2->set_maxhealth(x);}
	delete p1;
	delete p2;
}

float Controller::Sys2Float(string y){
	System* sys = new System;
		if (y=="calc1") {return sys->give_calc1();}
		if (y=="calc2") {return sys->give_calc2();}
		if (y=="healthx1") {return sys->give_healthx1();}
		if (y=="healthx2") {return sys->give_healthx2();}
	delete sys;
}

void Controller::Float2Sys(float x, string y){
	System* sys = new System;
		if (y=="calc1") {sys->set_calc1(x);}
		if (y=="calc2") {sys->set_calc2(x);}
		if (y=="healthx1") {sys->set_healthx1(x);}
		if (y=="healthx2") {sys->set_healthx2(x);}
	delete sys;
}

char Controller::Sys2Char(string y){
	System* sys = new System;
		if (y=="lastbar1") {return sys->give_lastbar1();}
		if (y=="lastbar2") {return sys->give_lastbar2();}
	delete sys;
}

void Controller::Char2Sys(char x, string y){
	System* sys = new System;
		if (y=="lastbar1") {sys->set_lastbar1(x);}
		if (y=="lastbar2") {sys->set_lastbar2(x);}
	delete sys;
}

void Controller::ChangeWeapon(int x, string y){
	Player1* p1 = new Player1();
	Player2* p2 = new Player2();
		if (y=="SwordColor1") {p1->setSwordWeapon(x);}
		if (y=="HelmColor1") {p1->setHelmWeapon(x);}
		if (y=="ArmorColor1") {p1->setArmorWeapon(x);}
		if (y=="LegColor1") {p1->setLegWeapon(x);}
		if (y=="ShieldColor1") {p1->setShieldWeapon(x);}
		if (y=="SwordColor2") {p2->setSwordWeapon(x);}
		if (y=="HelmColor2") {p2->setHelmWeapon(x);}
		if (y=="ArmorColor2") {p2->setArmorWeapon(x);}
		if (y=="LegColor2") {p2->setLegWeapon(x);}
		if (y=="ShieldColor2") {p2->setShieldWeapon(x);}
	delete p1;
	delete p2;
}

int Controller::GetColor(string y){
	Player1* p1 = new Player1();
	Player2* p2 = new Player2();
		if (y=="ShieldColor1") {return p1->give_ShiledColor();}
		if (y=="HelmColor1") {return p1->give_HelmColor();}
		if (y=="SwordColor1") {return p1->give_SwordColor();}
		if (y=="ArmorColor1") {return p1->give_ArmorColor();}
		if (y=="LegColor1") {return p1->give_LegColor();}
		if (y=="ShieldColor2") {return p2->give_ShiledColor();}
		if (y=="HelmColor2") {return p2->give_HelmColor();}
		if (y=="SwordColor2") {return p2->give_SwordColor();}
		if (y=="ArmorColor2") {return p2->give_ArmorColor();}
		if (y=="LegColor2") {return p2->give_LegColor();}
	delete p1;
	delete p2;
}
