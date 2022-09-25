#ifndef _player_h_
#define _player_h_
#include"GlobalInclude.h"
#include"Controller.h"
#include"BasicWeapon.h"
#include"BasicArmor.h"
#include"BasicLeg.h"
#include"BasicHelm.h"
#include"BasicShield.h"
class Player {
private:
	string name;
	int state;
	int defendstate;
	int attackstate;
	int arcol;
	int swcol;
	int hmcol;
	int lgcol;
	int shcol;
	int plar;
	int health;
	int maxhealth;
public:
	Player();
	void setArmorWeapon(int x);
	void setSwordWeapon(int x);
	void setHelmWeapon(int x);
	void setLegWeapon(int x);
	void setShieldWeapon(int x);
	void update();
	void draw();
	void kill();
	string give_name();
	int give_health();
	int give_maxhealth();
	int give_state();
	int give_attstate();
	void set_health(int x);
	void set_maxhealth(int x);
};
#endif
