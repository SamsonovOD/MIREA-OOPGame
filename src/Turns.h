#ifndef _turns_h_
#define _turns_h_
#include"GlobalInclude.h"
#include"Controller.h"
class Turns {
private:
	static float param;
	static int temp;
	static int calcdmg;
	static string tempstr;
public:
	Turns();
	void TurnAct();
};
#endif
