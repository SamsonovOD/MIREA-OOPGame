#ifndef _basicarmor_h_
#define _basicarmor_h_
#include"GlobalInclude.h"
#include "ArmorWeapon.h"
class BasicArmor: public ArmorWeapon {
public:
void armor(int x, int y);
void gotoxy (short x, short y);
BasicArmor();
};
#endif

