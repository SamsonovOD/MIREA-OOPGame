#ifndef _controller_h_
#define _controller_h_
#include "GlobalInclude.h"
class Controller {
public:
	void gotoxy (short x, short y);
	void Console_Color (short x);
	void Draw_Table();
	void Draw_Health();
	void Draw_Menu();
	void Draw_Options();
	void Draw_Turn();
	void Draw_Help();
	void Draw_Players();
	void TurnAct();
	void Health_update();
	void Clear();
	void Save(int x);
	void Load(int x);
	void Delete(int x);
	void Play(int x);
	void Kill(int x);

	void Int2Sys(int x, string y);
	int Sys2Int(string x);
	void Float2Sys(float x, string y);
	float Sys2Float(string x);
	string GetName(string x);
	int Player2Int(string x);
	char Sys2Char(string x);
	void Char2Sys(char x, string y);
	void Int2Player(int x, string y);
	void GiveName(string x, string y);
	void ChangeWeapon(int x, string y);
	int GetColor(string x);
};
#endif
