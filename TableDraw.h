#ifndef _tabledraw_h_
#define _tabledraw_h_
#include "GlobalInclude.h"
#include"Controller.h"
#include"Player1.h"
#include"Player2.h"
class TableDraw {
public:
	TableDraw();
	void Draw_Table();
	void Draw_Health();
	void Draw_Menu();
	void Draw_Options();
	void Draw_Turn();
	void Draw_Help();
	void Clear();
};
#endif
