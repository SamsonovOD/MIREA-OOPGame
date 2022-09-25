#include"Import.h"
void Import::Save(int x) {
	Controller* ctrl = new Controller();
	ofstream F;
	if (x==3) {
		F.open ("output.sav");
		F << " =Cursach save file= " << endl;
		F << ctrl->Sys2Int("theturn") << endl;
		F << ctrl->Sys2Int("turn") << endl;
		F << ctrl->Sys2Int("mode") << endl;
		F << ctrl->Sys2Int("multi") << endl;

		F << ctrl->Sys2Float("calc1") << endl;
		F << ctrl->Sys2Float("healthx1") << endl;
		F << ctrl->Sys2Char("lastbar1") << endl;
		F << ctrl->GetName("name1") << endl;
		F << ctrl->Player2Int("health1") << endl;
		F << ctrl->Player2Int("maxhealth1") << endl;
		F << ctrl->Player2Int("state1") << endl;
		F << ctrl->Player2Int("attstate1") << endl;
		F << ctrl->Player2Int("defstate1") << endl;
		F << ctrl->Player2Int("attstate1") << endl;
		F << ctrl->Player2Int("defstate1") << endl;
		F << ctrl->GetColor("SwordColor1") << endl;
		F << ctrl->GetColor("HelmColor1") << endl;
		F << ctrl->GetColor("ArmorColor1") << endl;
		F << ctrl->GetColor("LegColor1") << endl;
		F << ctrl->GetColor("ShieldColor1") << endl;

		F << ctrl->Sys2Float("calc2") << endl;
		F << ctrl->Sys2Float("healthx2") << endl;
		F << ctrl->Sys2Char("lastbar2") << endl;
		F << ctrl->GetName("name2") << endl;
		F << ctrl->Player2Int("health2") << endl;
		F << ctrl->Player2Int("maxhealth2") << endl;
		F << ctrl->Player2Int("state2") << endl;
		F << ctrl->Player2Int("attstate2") << endl;
		F << ctrl->Player2Int("defstate2") << endl;
		F << ctrl->Player2Int("attstate2") << endl;
		F << ctrl->Player2Int("defstate2") << endl;
		F << ctrl->GetColor("SwordColor2") << endl;
		F << ctrl->GetColor("HelmColor2") << endl;
		F << ctrl->GetColor("ArmorColor2") << endl;
		F << ctrl->GetColor("LegColor2") << endl;
		F << ctrl->GetColor("ShieldColor2") << endl;
	}
	if (x==1) {
		F.open ("output1.sav");
		F << " =Cursach save file= " << endl;
		F << ctrl->Sys2Int("theturn") << endl;
		F << ctrl->Sys2Int("turn") << endl;
		F << ctrl->Sys2Int("mode") << endl;
		F << ctrl->Sys2Int("multi") << endl;

		F << ctrl->Sys2Float("calc1") << endl;
		F << ctrl->Sys2Float("healthx1") << endl;
		F << ctrl->Sys2Char("lastbar1") << endl;
		F << ctrl->GetName("name1") << endl;
		F << ctrl->Player2Int("health1") << endl;
		F << ctrl->Player2Int("maxhealth1") << endl;
		F << ctrl->Player2Int("state1") << endl;
		F << ctrl->Player2Int("attstate1") << endl;
		F << ctrl->Player2Int("defstate1") << endl;
		F << ctrl->GetColor("SwordColor1") << endl;
		F << ctrl->GetColor("HelmColor1") << endl;
		F << ctrl->GetColor("ArmorColor1") << endl;
		F << ctrl->GetColor("LegColor1") << endl;
		F << ctrl->GetColor("ShieldColor1") << endl;
	}
	if (x==2) {
		F.open ("output2.sav");
		F << " =Cursach save file= " << endl;
		F << ctrl->Sys2Int("theturn") << endl;
		F << ctrl->Sys2Int("turn") << endl;
		F << ctrl->Sys2Int("mode") << endl;
		F << ctrl->Sys2Int("multi") << endl;

		F << ctrl->Sys2Float("calc2") << endl;
		F << ctrl->Sys2Float("healthx2") << endl;
		F << ctrl->Sys2Char("lastbar2") << endl;
		F << ctrl->GetName("name2") << endl;
		F << ctrl->Player2Int("health2") << endl;
		F << ctrl->Player2Int("maxhealth2") << endl;
		F << ctrl->Player2Int("state2") << endl;
		F << ctrl->Player2Int("attstate1") << endl;
		F << ctrl->Player2Int("defstate2") << endl;
		F << ctrl->GetColor("SwordColor2") << endl;
		F << ctrl->GetColor("HelmColor2") << endl;
		F << ctrl->GetColor("ArmorColor2") << endl;
		F << ctrl->GetColor("LegColor2") << endl;
		F << ctrl->GetColor("ShieldColor2") << endl;
	}
	F.close();
	delete ctrl;
}

void Import::Load(int x) {
	Controller* ctrl = new Controller();
	string line;
	string tempstr = "0";
	int tempint = 0;
	float tempflt = 0.0;
	char tempchr = 'n';
	ifstream F;
	if (x==3) {F.open ("output.sav");}
	if (x==2) {F.open ("output1.sav");}
	if (x==1) {F.open ("output2.sav");}
	if (F){
		while (getline(F, line))  {
			if (x==3) {
			F >> tempint; ctrl->Int2Sys(tempint,"theturn");
			F >> tempint; ctrl->Int2Sys(tempint,"turn");
			F >> tempint; ctrl->Int2Sys(tempint,"mode");
			F >> tempint; ctrl->Int2Sys(tempint,"multi");

			F >> tempflt; ctrl->Float2Sys(tempflt, "calc1");
			F >> tempflt; ctrl->Float2Sys(tempflt, "healthx1");
			F >> tempchr; ctrl->Char2Sys(tempchr, "lastbar1");
			F >> tempstr; ctrl->GiveName(tempstr, "name1");
			F >> tempint; ctrl->Int2Player(tempint, "health1");
			F >> tempint; ctrl->Int2Player(tempint, "maxhealth1");
			F >> tempint; ctrl->Int2Player(tempint, "state1");
			F >> tempint; ctrl->Int2Player(tempint, "attstate1");
			F >> tempint; ctrl->Int2Player(tempint, "defstate1");
			F >> tempint; ctrl->ChangeWeapon(tempint, "SwordColor1");
			F >> tempint; ctrl->ChangeWeapon(tempint, "HelmColor1");
			F >> tempint; ctrl->ChangeWeapon(tempint, "ArmorColor1");
			F >> tempint; ctrl->ChangeWeapon(tempint, "LegColor1");
			F >> tempint; ctrl->ChangeWeapon(tempint, "ShieldColor1");
			
			F >> tempflt; ctrl->Float2Sys(tempflt, "calc2");
			F >> tempflt; ctrl->Float2Sys(tempflt, "healthx2");
			F >> tempchr; ctrl->Char2Sys(tempchr, "lastbar2");
			F >> tempstr; ctrl->GiveName(tempstr, "name2");
			F >> tempint; ctrl->Int2Player(tempint, "health2");
			F >> tempint; ctrl->Int2Player(tempint, "maxhealth2");
			F >> tempint; ctrl->Int2Player(tempint, "state2");
			F >> tempint; ctrl->Int2Player(tempint, "attstate2");
			F >> tempint; ctrl->Int2Player(tempint, "defstate2");
			F >> tempint; ctrl->ChangeWeapon(tempint, "SwordColor2");
			F >> tempint; ctrl->ChangeWeapon(tempint, "HelmColor2");
			F >> tempint; ctrl->ChangeWeapon(tempint, "ArmorColor2");
			F >> tempint; ctrl->ChangeWeapon(tempint, "LegColor2");
			F >> tempint; ctrl->ChangeWeapon(tempint, "ShieldColor2");
			break;
			}
			if (x==2) {
			F >> tempint; ctrl->Int2Sys(tempint,"gtheturn");
			F >> tempint; ctrl->Int2Sys(tempint,"gturn");
			F >> tempint;
			F >> tempint; ctrl->Int2Sys(tempint,"multi");

			F >> tempflt; ctrl->Float2Sys(tempflt, "calc1");
			F >> tempflt; ctrl->Float2Sys(tempflt, "healthx1");
			F >> tempchr; ctrl->Char2Sys(tempchr, "lastbar1");
			F >> tempstr; ctrl->GiveName(tempstr, "name1");
			F >> tempint; ctrl->Int2Player(tempint, "health1");
			F >> tempint; ctrl->Int2Player(tempint, "maxhealth1");
			F >> tempint; ctrl->Int2Player(tempint, "state1");
			F >> tempint; ctrl->Int2Player(tempint, "attstate1");
			F >> tempint; ctrl->Int2Player(tempint, "defstate1");
			F >> tempint; ctrl->ChangeWeapon(tempint, "SwordColor1");
			F >> tempint; ctrl->ChangeWeapon(tempint, "HelmColor1");
			F >> tempint; ctrl->ChangeWeapon(tempint, "ArmorColor1");
			F >> tempint; ctrl->ChangeWeapon(tempint, "LegColor1");
			F >> tempint; ctrl->ChangeWeapon(tempint, "ShieldColor1");
			break;
			}
			if (x==1) {
			F >> tempint; ctrl->Int2Sys(tempint,"gtheturn");
			F >> tempint; ctrl->Int2Sys(tempint,"gturn");
			F >> tempint;
			F >> tempint;

			F >> tempflt; ctrl->Float2Sys(tempflt, "calc2");
			F >> tempflt; ctrl->Float2Sys(tempflt, "healthx2");
			F >> tempchr; ctrl->Char2Sys(tempchr, "lastbar2");
			F >> tempstr; ctrl->GiveName(tempstr, "name2");
			F >> tempint; ctrl->Int2Player(tempint, "health2");
			F >> tempint; ctrl->Int2Player(tempint, "maxhealth2");
			F >> tempint; ctrl->Int2Player(tempint, "state2");
			F >> tempint; ctrl->Int2Player(tempint, "attstate2");
			F >> tempint; ctrl->Int2Player(tempint, "defstate2");
			F >> tempint; ctrl->ChangeWeapon(tempint, "SwordColor2");
			F >> tempint; ctrl->ChangeWeapon(tempint, "HelmColor2");
			F >> tempint; ctrl->ChangeWeapon(tempint, "ArmorColor2");
			F >> tempint; ctrl->ChangeWeapon(tempint, "LegColor2");
			F >> tempint; ctrl->ChangeWeapon(tempint, "ShieldColor2");
			break;
			}
  	  }
	F.close();
	} else cout << "File not found!" << endl;
	delete ctrl;
}
void Import::Clear(int x) {
	Controller* ctrl = new Controller();
	ofstream F;
	if (x==1) {F.open ("output1.sav");}
	if (x==2) {F.open ("output2.sav");}
	if (x==3) {F.open ("output.sav");}
	F.close();
	delete ctrl;
}

Import::Import(){
Import::l=0;}
