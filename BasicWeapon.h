#ifndef _basic_weapon_h_
#define _basic_weapon_h_
#include"GlobalInclude.h"
#include"SwordWeapon.h"
class BasicWeapon: public SwordWeapon {
public:
void sword(int x, int y, int z);
void gotoxy (short x, short y);
BasicWeapon();
};
#endif

