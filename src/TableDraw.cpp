#include"TableDraw.h"
TableDraw::TableDraw(){};

void TableDraw::Draw_Table(){
	Controller* ctrl = new Controller();
	char tab = 0;
	ctrl->gotoxy(0,0);
	tab = 201; cout << tab;
	tab = 205;
	for (int i=1; i<74; i++) {cout << tab;}
	tab = 203; cout << tab;
	tab = 205;
	for (int i=75; i<79; i++) {cout << tab;}
	tab = 187; cout << tab;

	ctrl->gotoxy(0,2);
	tab = 204; cout << tab;
	tab = 205;
	for (int i=1; i<7; i++) {cout << tab;}
	tab = 203; cout << tab;
	tab = 205;
	for (int i=7; i<38; i++) {cout << tab;}
	tab = 203; cout << tab;
	tab = 203; cout << tab;
	tab = 205;
	for (int i=40; i<46; i++) {cout << tab;}
	tab = 203; cout << tab;
	tab = 205;
	for (int i=48; i<74; i++) {cout << tab;}
	tab = 202; cout << tab;
	tab = 205;
	for (int i=75; i<79; i++) {cout << tab;}
	tab = 185; cout << tab;
	
	ctrl->gotoxy(0,4);
	tab = 204; cout << tab;
	tab = 205;
	for (int i=1; i<7; i++) {cout << tab;}
	tab = 202; cout << tab;
	tab = 203; cout << tab;
	tab = 205;
	for (int i=8; i<38; i++) {cout << tab;}
	tab = 202; cout << tab;
	tab = 202; cout << tab;
	tab = 205;
	for (int i=40; i<46; i++) {cout << tab;}
	tab = 202; cout << tab;
	tab = 205;
	for (int i=47; i<70; i++) {cout << tab;}
	tab = 203; cout << tab;
	tab = 205;
	for (int i=72; i<79; i++) {cout << tab;}
	tab = 185; cout << tab;
	
	ctrl->gotoxy(0,21);
	tab = 204; cout << tab;
	tab = 205;
	for (int i=1; i<8; i++) {cout << tab;}
	tab = 202; cout << tab;
	tab = 205;
	for (int i=8; i<70; i++) {cout << tab;}
	tab = 202; cout << tab;
	tab = 205;
	for (int i=73; i<80; i++) {cout << tab;}
	tab = 185; cout << tab;
	ctrl->gotoxy(0,23);
	tab = 200; cout << tab;
	tab = 205;
	for (int i=1; i<79; i++) {cout << tab;}
	tab = 188; cout << tab;
	for (int j=5; j<21; j=j+3){
		ctrl->gotoxy(0,j);
		tab = 186; cout << tab;
		tab = 255;
		for (int i=1; i<8; i++) {cout << tab;}
		tab = 186; cout << tab;
		tab = 255;
		for (int i=8; i<70; i++) {cout << tab;}
		tab = 186; cout << tab;
		tab = 255;
		for (int i=72; i<79; i++) {cout << tab;}
		tab = 186; cout << tab;
	}
	for (int j=7; j<20; j=j+3){
		ctrl->gotoxy(0,j);
		tab = 186; cout << tab;
		tab = 255;
		for (int i=1; i<8; i++) {cout << tab;}
		tab = 186; cout << tab;
		tab = 255;
		for (int i=8; i<70; i++) {cout << tab;}
		tab = 186; cout << tab;
		tab = 255;
		for (int i=72; i<79; i++) {cout << tab;}
		tab = 186; cout << tab;
	}
	for (int j=6; j<19; j=j+3){
		ctrl->gotoxy(0,j);
		tab = 204; cout << tab;
		tab = 205;
		for (int i=1; i<8; i++) {cout << tab;}
		tab = 185; cout << tab;
		tab = 255;
		for (int i=8; i<70; i++) {cout << tab;}
		tab = 204; cout << tab;
		tab = 205;
		for (int i=72; i<79; i++) {cout << tab;}
		tab = 185; cout << tab;
	}

	ctrl->gotoxy(0,1);
	tab = 186; cout << tab;
	tab = 250;
	for (int i=1; i<74; i++) {cout << tab;}
	tab = 186; cout << tab;
	cout << "T";
	tab = 250; cout << tab;
	tab = 250; cout << tab;
	tab = 250; cout << tab;
	tab = 186; cout << tab;

	ctrl->gotoxy(0,3);
	tab = 186; cout << tab;
	tab = 255;
	for (int i=1; i<7; i++) {cout << tab;}
	tab = 186; cout << tab;
	tab = 255;
	for (int i=7; i<38; i++) {cout << tab;}
	tab = 186; cout << tab;
	tab = 186; cout << tab;
	tab = 255;
	for (int i=40; i<46; i++) {cout << tab;}
	tab = 186; cout << tab;
	tab = 255;
	for (int i=47; i<78; i++) {cout << tab;}
	tab = 186; cout << tab;
	ctrl->gotoxy(0,22);
	tab = 186; cout << tab;
	tab = 250;
	for (int i=1; i<79; i++) {cout << tab;}
	tab = 186; cout << tab;
	
	ctrl->gotoxy(1,7); cout << "Sword:";
	ctrl->gotoxy(72,7); cout << "Sword:";
	ctrl->gotoxy(1,10); cout << "Helmet:";
	ctrl->gotoxy(72,10); cout << "Helmet:";
	ctrl->gotoxy(1,13); cout << "Armor:";
	ctrl->gotoxy(72,13); cout << "Armor:";
	ctrl->gotoxy(1,16); cout << "Shield:";
	ctrl->gotoxy(72,16); cout << "Shield:";
	ctrl->gotoxy(1,19); cout << "Legs:";
	ctrl->gotoxy(72,19); cout << "Legs:";
	delete ctrl;
}

void TableDraw::Draw_Health(){
	char bar = 219;
	Controller* ctrl = new Controller();
	ctrl->Health_update();
	ctrl->gotoxy(1,3);
	ctrl->Console_Color(15);
	cout << "P1:" << ctrl->Player2Int("health1") << endl;
	ctrl->gotoxy(8,3);
	ctrl->Console_Color(12);
	for (int i = 0; i<(ctrl->Sys2Float("healthx1")-1); i++){cout << bar;}
	cout << ctrl->Sys2Char("lastbar1"); 
	ctrl->gotoxy(41,3);
	ctrl->Console_Color(15);
	cout << "P2:" << ctrl->Player2Int("health2") << endl;
	ctrl->gotoxy(48,3);
	ctrl->Console_Color(12);
	for (int i = 0; i<(ctrl->Sys2Float("healthx2")-1); i++){cout << bar;}
	cout << ctrl->Sys2Char("lastbar2"); 
	ctrl->Console_Color(15);
	ctrl->gotoxy(1,5);
	cout << ctrl->GetName("name1");
	ctrl->gotoxy(72,5);
	cout << ctrl->GetName("name2");
	delete ctrl;
}

void TableDraw::Draw_Options(){
	Controller* ctrl = new Controller();
	Player1* p1 = new Player1();
	Player2* p2 = new Player2();
	ctrl->gotoxy(23,15);
	cout << "Damage multiplier (20 default): ";
	int temp;
	cin >> temp;
	ctrl->Play(1);
	ctrl->Int2Sys(temp, "multi");

	ctrl->gotoxy(23,17);
	cout << "Maximum health (1000 default and limit): ";
	cin >> temp;
	if (temp > 1000) {temp=1000;}
	ctrl->Play(1);
	ctrl->Int2Player(temp, "maxhealth1");
	ctrl->Int2Player(temp, "maxhealth2");
	ctrl->Int2Player(temp-1, "health1");
	ctrl->Int2Player(temp-1, "health2");
	delete ctrl;
	delete p1;
	delete p2;
}

void TableDraw::Draw_Help(){
	Controller* ctrl = new Controller();
	ctrl->gotoxy(3,12);
	cout << "First player chooses what do do, attack or change equipment.";
	ctrl->gotoxy(3,13);
	cout << "If he attacks, he chooses where, head, torso or legs.";
	ctrl->gotoxy(3,14);
	cout << "If he changes, he chooses what, head, torso or legs and to what type.";
	ctrl->gotoxy(3,15);
	cout << "The second player chooses which part, head/torso/legs to defend.";
	ctrl->gotoxy(3,16);
	cout << "Guessing the right spot to defend decreases damage.";
	ctrl->gotoxy(3,17);
	cout << "Hitting elemental advantage will increase damage, disadvantage reduce.";
	ctrl->gotoxy(3,18);
	cout << "The result is not visible for both until both players have done action";
	ctrl->gotoxy(3,20);
	delete ctrl;
	system("pause");
}

void TableDraw::Draw_Menu(){
	Controller* ctrl = new Controller();
	ctrl->gotoxy(7,3);
	cout << "= The Samsonov Kursach project =";
	ctrl->gotoxy(7,5);
	cout << "(Multiplayer is unavailable)";
	ctrl->gotoxy(4,7);
	cout << "1 vs comp, 2 hotseat, (!3 host online, !4 join online)";
	ctrl->gotoxy(8,8);
	cout << "5 options, 6 help, 7 load game";
	ctrl->gotoxy(35,10);
	cout << "Enter mode: ";
	delete ctrl;
}

void TableDraw::Draw_Turn(){
	Controller* ctrl = new Controller();
	ctrl->gotoxy(76,1);
	cout << ctrl->Sys2Int("theturn");
	delete ctrl;
}

void TableDraw::Clear(){
	Controller* ctrl = new Controller();
	ctrl->gotoxy(1,1);
	for (int i=0; i<73; i++) {cout << char(250);};
	ctrl->gotoxy(1,22);
	for (int i=0; i<78; i++) {cout << char(250);};
	delete ctrl;
}
