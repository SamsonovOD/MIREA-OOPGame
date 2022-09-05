#ifndef _basicshield_h_
#define _basicshield_h_
#include"GlobalInclude.h"
#include "ShieldWeapon.h"
class BasicShield: public ShieldWeapon {
public:
void shield(int x, int y, int z);
BasicShield();
void gotoxy (short x, short y);
};
#endif

