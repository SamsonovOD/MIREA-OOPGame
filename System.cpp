#include"System.h"
System::System(){};

int System::turn = 0;
int System::theturn = 1;
int System::mode = 0;
int System::multi = 20;
int System::input1 = 0;
int System::input2 = 0;
int System::g_turn = 0;
int System::g_theturn = 0;
char System::lastbar1 = 219;
float System::health1_x = 0.0;
float System::calc1 = 0.0;
char System::lastbar2 = 219;
float System::health2_x = 0.0;
float System::calc2 = 0.0;

int System::give_turn(){return turn;}
int System::give_theturn(){return theturn;}
int System::give_multi(){return multi;}
int System::give_mode(){return mode;}
int System::give_input1(){return input1;}
int System::give_input2(){return input2;}
int System::give_gturn(){return g_turn;}
int System::give_gtheturn(){return g_theturn;}
char System::give_lastbar1(){return lastbar1;}
char System::give_lastbar2(){return lastbar2;}
float System::give_calc1(){return calc1;}
float System::give_calc2(){return calc2;}
float System::give_healthx1(){return health1_x;}
float System::give_healthx2(){return health2_x;}

void System::set_turn(int x){turn=x;}
void System::set_theturn(int x){theturn=x;}
void System::set_multi(int x){multi=x;}
void System::set_mode(int x){mode=x;}
void System::set_input1(int x){input1=x;}
void System::set_input2(int x){input2=x;}
void System::set_gturn(int x){g_turn=x;}
void System::set_gtheturn(int x){g_theturn=x;}
void System::set_lastbar1(char x){lastbar1=x;}
void System::set_lastbar2(char x){lastbar2=x;}
void System::set_calc1(float x){calc1=x;}
void System::set_calc2(float x){calc2=x;}
void System::set_healthx1(float x){health1_x=x;}
void System::set_healthx2(float x){health2_x=x;}
