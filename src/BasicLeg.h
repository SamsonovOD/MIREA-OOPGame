#ifndef _basicleg_h_
#define _basicleg_h_
#include"GlobalInclude.h"
#include "LegWeapon.h"
class BasicLeg: public LegWeapon {
public:
void leg(int x, int y);
BasicLeg();
void gotoxy (short x, short y);
};
#endif

