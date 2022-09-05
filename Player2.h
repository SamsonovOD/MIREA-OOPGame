#ifndef _player2_h_
#define _player2_h_
#include"Player.h"
class Player2:public Player {
private:
	static string name;
	static int state;
	static int defendstate;
	static int attackstate;
	static int arcol;
	static int swcol;
	static int hmcol;
	static int lgcol;
	static int shcol;
	static int health;
	static int maxhealth;
public:
	Player2();
	void update();
	void draw();
	void kill();
	void setArmorWeapon(int x);
	void setSwordWeapon(int x);
	void setHelmWeapon(int x);
	void setLegWeapon(int x);
	void setShieldWeapon(int x);
	string give_name();
	int give_attstate();
	int give_defstate();
	void set_health(int x);
	void set_maxhealth(int x);
	void set_state(int x);
	void set_attstate(int x);
	void set_defstate(int x);
	void set_name(string x);

	int give_ShiledColor();
	int give_HelmColor();
	int give_SwordColor();
	int give_ArmorColor();
	int give_LegColor();
	int give_health();
	int give_maxhealth();
	int give_state();
};
#endif
