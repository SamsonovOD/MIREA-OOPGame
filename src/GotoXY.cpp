#include"GotoXY.h"
void GotoXY::gotoxy (short x, short y){
	HANDLE hStdout;
	COORD coord = {x, y};
	SetConsoleCursorPosition ( GetStdHandle ( STD_OUTPUT_HANDLE ), coord );
}
