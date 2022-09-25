#ifndef _basichelm_h_
#define _basichelm_h_
#include"GlobalInclude.h"
#include "HelmWeapon.h"
class BasicHelm: public HelmWeapon {
public:
void helm(int x, int y);
BasicHelm();
void gotoxy (short x, short y);
};
#endif

