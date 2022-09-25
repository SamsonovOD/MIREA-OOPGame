#ifndef _system_h_
#define _system_h_
#include "GlobalInclude.h"
class System {
private:
	static int turn;
	static int mode;
	static int multi;
	static int theturn;
	static int input1;
	static int input2;
	static int g_turn;
	static int g_theturn;
	static char lastbar1;
	static float calc1;
	static float health1_x;
	static char lastbar2;
	static float health2_x;
	static float calc2;
public:
	System();
	int give_turn();
	int give_theturn();
	int give_multi();
	int give_mode();
	int give_input1();
	int give_input2();
	int give_gturn();
	int give_gtheturn();
	float give_calc1();
	float give_calc2();
	float give_healthx1();
	float give_healthx2();
	char give_lastbar1();
	char give_lastbar2();

	void set_turn(int x);
	void set_theturn(int x);
	void set_multi(int x);
	void set_mode(int x);
	void set_input1(int x);
	void set_input2(int x);
	void set_gturn(int x);
	void set_gtheturn(int x);
	void set_lastbar1(char x);
	void set_lastbar2(char x);
	void set_calc1(float x);
	void set_calc2(float x);
	void set_healthx1(float x);
	void set_healthx2(float x);
};
#endif
