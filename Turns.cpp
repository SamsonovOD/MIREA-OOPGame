#include"Turns.h"
Turns::Turns(){}
float Turns::param = 0;
int Turns::temp = 0;
string Turns::tempstr = "0";
int Turns::calcdmg = 0;

void Turns::TurnAct(){
	Controller* ctrl = new Controller();
	srand(time(0));
		if (ctrl->Sys2Int("turn")==0) {
			ctrl->Play(4);
			system("cls");
			ctrl->Draw_Menu();
			cin >> temp;
			ctrl->Int2Sys(temp, "mode");
			ctrl->Play(1);
			ctrl->Int2Sys(1, "turn");
			if (ctrl->Sys2Int("mode")==5) {
				ctrl->Draw_Options(); 
				ctrl->Int2Sys(0, "mode");
				ctrl->Int2Sys(0, "turn");
			}
			if (ctrl->Sys2Int("mode")==6) {
				ctrl->Draw_Help(); 
				ctrl->Int2Sys(0, "mode");
				ctrl->Int2Sys(0, "turn");
			} 
			if ((ctrl->Sys2Int("mode")==3)||(ctrl->Sys2Int("mode")==4)||(ctrl->Sys2Int("mode")==7)) {
				ctrl->Int2Sys(0, "mode");
				ctrl->Int2Sys(0, "turn");
			}
			if (ctrl->Sys2Int("mode")==7) {
				ctrl->Load(3);	
			}
		}

		if (ctrl->Sys2Int("turn")==1) {
			ctrl->Draw_Table();	
			ctrl->Clear();
			if ((ctrl->Sys2Int("mode")==1)||(ctrl->Sys2Int("mode")==2)){	
				ctrl->Delete(3);	
				ctrl->gotoxy(1,1);
				cout << "Enter P1 name. (7 characters max)";
				ctrl->gotoxy(1,22); 
				cin >> tempstr;
				ctrl->GiveName(tempstr,"name1");
				ctrl->Play(1);
				ctrl->Clear();
				ctrl->gotoxy(1,1);
				cout << "Enter P2 name. (7 characters max)";
				ctrl->gotoxy(1,22); 
				cin >> tempstr;
				ctrl->GiveName(tempstr,"name2");
				ctrl->Play(1);
				ctrl->Save(3);
			}
			if (ctrl->Sys2Int("mode")==3){	
				ctrl->Delete(1);
				ctrl->gotoxy(1,1);
				cout << "Enter P1 name. (7 characters max)";
				ctrl->gotoxy(1,22); 
				cin >> tempstr;
				ctrl->GiveName(tempstr,"name1");
				ctrl->Play(1);
				ctrl->Save(1);
				ctrl->Clear();
				ctrl->gotoxy(1,1);
				cout << "Waiting for P2...";
				do {
					ctrl->Load(1);
					usleep(100);
				} while (ctrl->Sys2Int("gturn")!=1);
				ctrl->Play(1);
			}
			if (ctrl->Sys2Int("mode")==4){	
				ctrl->Delete(2);	
				ctrl->gotoxy(1,1);
				cout << "Enter P2 name. (7 characters max)";
				ctrl->gotoxy(1,22); 
				cin >> tempstr;
				ctrl->GiveName(tempstr,"name2");
				ctrl->Play(1);
				ctrl->Save(2);
				ctrl->Clear();
				ctrl->gotoxy(1,1);
				cout << "Waiting for P1...";
				do {
					ctrl->Load(2);
					usleep(100);
				} while (ctrl->Sys2Int("gturn")!=1);
				ctrl->gotoxy(1,22);
				ctrl->Play(1);
			}
			ctrl->Int2Sys(2, "turn");
		}

		if (ctrl->Sys2Int("turn")==3){
			if ((ctrl->Sys2Int("mode")==1)||(ctrl->Sys2Int("mode")==2)){
				ctrl->Clear();
				ctrl->gotoxy(1,1);
				cout << ctrl->GetName("name1") << " is choosing options. (1 attack, 2 change)"; 
				ctrl->gotoxy(1,22);
				cin >> temp;
				ctrl->Play(1);
				ctrl->Int2Sys(temp, "input1");
				ctrl->Int2Player(temp, "state1");
				ctrl->Save(3);
				ctrl->Int2Sys(4, "turn");
			}
			if (ctrl->Sys2Int("mode")==3){
				ctrl->Clear();
				ctrl->gotoxy(1,1);
				cout << ctrl->GetName("name1") << " is choosing options. (1 attack, 2 change)"; 
				ctrl->gotoxy(1,22);
				cin >> temp;
				ctrl->Play(1);
				ctrl->Int2Sys(temp, "input1");
				ctrl->Int2Player(temp, "state1");
				ctrl->Save(1);
				ctrl->Int2Sys(4, "turn");
			}
			if (ctrl->Sys2Int("mode")==4){
				ctrl->Clear();
				ctrl->gotoxy(1,1);
				cout << "Waiting for " << ctrl->GetName("name1") << "..."; 
				while (ctrl->Sys2Int("gturn")!=3){
					ctrl->Load(2);
					usleep(100);
				}
				ctrl->Int2Sys(4, "turn");
			}
			ctrl->Save(3);
		}

		if (ctrl->Sys2Int("turn")==4){
			ctrl->Clear();
			if ((ctrl->Sys2Int("mode")==1)||(ctrl->Sys2Int("mode")==2)||(ctrl->Sys2Int("mode")==3)){
				if(ctrl->Sys2Int("input1")==1){
					ctrl->Int2Player(0, "defstate1");
					ctrl->gotoxy(1,1);
					cout << ctrl->GetName("name1") << " is attacking... (1 helm, 2 armor, 3 leg)"; 
					ctrl->gotoxy(1,22);
					cin >> param;
					ctrl->Play(1);
					ctrl->Int2Player(param, "attstate1");
				}
				if (ctrl->Sys2Int("input1")==2){
					ctrl->Int2Player(0, "attstate1");	
					ctrl->Int2Player(0, "defstate1");
					ctrl->gotoxy(1,1);
					cout << "Change what? (1 helm, 2 armor, 3 leg, 4 sheild, 5 sword)"; 
					ctrl->gotoxy(1,22);
					cin >> temp;
					ctrl->Play(1);
					ctrl->Int2Sys(temp, "input1");
					ctrl->Clear();
					ctrl->gotoxy(1,1);
					cout << "Change to what? (0 basic, 1 Earth, 2 Water, 3 Wind)"; 
					ctrl->gotoxy(1,22);
					cin >> param;
					ctrl->Play(2);
					switch(ctrl->Sys2Int("input1")){
						case 1: ctrl->ChangeWeapon(param,"HelmColor1"); break;
						case 2: ctrl->ChangeWeapon(param,"ArmorColor1"); break;
						case 3: ctrl->ChangeWeapon(param,"LegColor1"); break;
						case 4: ctrl->ChangeWeapon(param,"ShieldColor1"); break;
						case 5: ctrl->ChangeWeapon(param,"SwordColor1"); break;
					}
				}
				if ((ctrl->Sys2Int("mode")==1)||(ctrl->Sys2Int("mode")==2)) {ctrl->Save(3);}
				if (ctrl->Sys2Int("mode")==3) {ctrl->Save(1);}
			}
			if (ctrl->Sys2Int("mode")==4){
				ctrl->Clear();
				ctrl->gotoxy(1,1);
				cout << "Waiting for " << ctrl->GetName("name1") << "..."; 
				while (ctrl->Sys2Int("gturn")!=4){
					ctrl->Load(2);
					usleep(100);
				}
			}
			ctrl->Save(3);
			ctrl->Int2Sys(5,"turn");
		}

		if (ctrl->Sys2Int("turn")==5){
			ctrl->Clear();
			if (ctrl->Sys2Int("mode")==1){
				ctrl->Int2Player(4, "attstate2");
				ctrl->gotoxy(1,1);
				cout << ctrl->GetName("name2") << " is acting..."; 
				ctrl->Int2Sys(1+rand()%3, "input2");
				sleep(2);
				ctrl->Int2Player(ctrl->Sys2Int("input2"), "defstate2");
				ctrl->Save(3);
			}
			if (ctrl->Sys2Int("mode")==2){
				ctrl->Int2Player(4, "attstate2");
				ctrl->gotoxy(1,1);
				cout << ctrl->GetName("name2") << " is defending... (1 helm, 2 armor, 3 leg)"; 
				ctrl->gotoxy(1,22);	
				cin >> temp;
				ctrl->Play(1);
				ctrl->Int2Sys(temp, "input2");
				ctrl->Int2Player(ctrl->Sys2Int("input2"), "defstate2");
				ctrl->Save(3);
			}
			if (ctrl->Sys2Int("mode")==3){
				ctrl->gotoxy(1,1);
				cout << "Waiting for " << ctrl->GetName("name2") << "..."; 
				while (ctrl->Sys2Int("gturn")!=5){
					ctrl->Load(1);
				}
				ctrl->Load(1);
			}
			if (ctrl->Sys2Int("mode")==4){
				ctrl->Int2Player(4, "attstate2");
				ctrl->gotoxy(1,1);
				cout << ctrl->GetName("name2") << " is defending... (1 helm, 2 armor, 3 leg)"; 
				ctrl->gotoxy(1,22);	
				cin >> temp;
				ctrl->Play(1);
				ctrl->Int2Sys(temp, "input2");
				ctrl->Int2Player(ctrl->Sys2Int("input2"), "defstate2");
				ctrl->Save(2);
			}
			ctrl->Save(3);
			ctrl->Int2Sys(6, "turn");	
		}	

		if (ctrl->Sys2Int("turn")==7){
			ctrl->Clear();
			if ((ctrl->Sys2Int("mode")==2)||(ctrl->Sys2Int("mode")==4)){
				ctrl->gotoxy(1,1);
				cout << ctrl->GetName("name2") << " is choosing options. (1 attack, 2 change)"; 
				ctrl->gotoxy(1,22);
				cin >> temp;
				ctrl->Play(1);
				ctrl->Int2Sys(temp, "input2");
				ctrl->Int2Player(temp, "state2");
				if (ctrl->Sys2Int("mode")==4) {}
			}
			if (ctrl->Sys2Int("mode")==1){
				ctrl->Int2Sys(1+rand()%2, "input2");
				ctrl->Int2Player(ctrl->Sys2Int("input2"), "state2");
			}
			if (ctrl->Sys2Int("mode")==3){
				ctrl->gotoxy(1,1);
				cout << "Waiting for " << ctrl->GetName("name2") << "..."; 
				while (ctrl->Sys2Int("gturn")!=5){
				}
			}
			ctrl->Save(3);
			ctrl->Int2Sys(8,"turn");
		}

		if (ctrl->Sys2Int("turn")==8){
			ctrl->Clear();
			if(ctrl->Sys2Int("input2")==1){
				ctrl->Int2Player(0, "defstate2");
				if (ctrl->Sys2Int("mode")==2){
					ctrl->gotoxy(1,1);
					cout << ctrl->GetName("name2") << " is attacking... (1 helm, 2 armor, 3 leg)"; 
					ctrl->gotoxy(1,22);
					cin >> param;
					ctrl->Play(1);
				}
				if (ctrl->Sys2Int("mode")==1){
					param=1+rand()%3;
				}
				ctrl->Int2Player(param, "attstate2");
			}
			if (ctrl->Sys2Int("input2")==2){
				ctrl->Int2Player(0, "attstate2");
				ctrl->Int2Player(0, "defstate2");
				if (ctrl->Sys2Int("mode")==2){
					ctrl->gotoxy(1,1);
					cout << "Change what? (1 helm, 2 armor, 3 leg, 4 sheild, 5 sword)"; 
					ctrl->gotoxy(1,22);
					cin >> temp;
					ctrl->Play(1);
					ctrl->Int2Sys(temp, "input2");
				}
				if (ctrl->Sys2Int("mode")==1){
					ctrl->Int2Sys(1+rand()%5, "input2");
				}
				ctrl->Clear();
				if (ctrl->Sys2Int("mode")==2){
					ctrl->gotoxy(1,1);
					cout << "Change to what? (0 basic, 1 Earth, 2 Water, 3 Wind)"; 
					ctrl->gotoxy(1,22);
					cin >> param;
					ctrl->Play(2);
				}
				if (ctrl->Sys2Int("mode")==1){
					param = rand()%4;
				}
				switch(ctrl->Sys2Int("input2")){
					case 1: ctrl->ChangeWeapon(param, "HelmColor2"); break;
					case 2: ctrl->ChangeWeapon(param, "ArmorColor2"); break;
					case 3: ctrl->ChangeWeapon(param, "LegColor2"); break;
					case 4: ctrl->ChangeWeapon(param, "ShieldColor2"); break;
					case 5: ctrl->ChangeWeapon(param, "SwordColor2"); break;
				}
			}
			ctrl->Save(3);
			ctrl->Int2Sys(9,"turn");
		}

		if(ctrl->Sys2Int("turn")==9){
			ctrl->Clear();
			ctrl->Int2Player(4, "attstate1");
			ctrl->gotoxy(1,1);
			cout << ctrl->GetName("name1") << " is defending... (1 helm, 2 armor, 3 leg)"; 
			ctrl->gotoxy(1,22);
			cin >> temp;
			ctrl->Play(1);
			ctrl->Int2Sys(temp, "input1");
			ctrl->Int2Player(ctrl->Sys2Int("input1"), "defstate1");
			ctrl->Save(3);
			ctrl->Int2Sys(10,"turn");
		}

		if ((ctrl->Sys2Int("turn")==2)||(ctrl->Sys2Int("turn")==6)||(ctrl->Sys2Int("turn")==10)) {
			if ((ctrl->Sys2Int("mode")==3)||(ctrl->Sys2Int("mode")==4)){
				if (ctrl->Sys2Int("mode")==3){ctrl->Load(1);}
				if (ctrl->Sys2Int("mode")==4){ctrl->Load(2);}
			}			
			if ((ctrl->Sys2Int("turn")==6)&&(ctrl->Player2Int("attstate1")!=0)){
 			if (ctrl->Player2Int("attstate1")==ctrl->Player2Int("defstate2")) {
  				if (ctrl->GetColor("SwordColor1")==ctrl->GetColor("ShieldColor2")==8) {calcdmg=2; ctrl->Play(3);}
  				if ((ctrl->GetColor("SwordColor1")==10)&&(ctrl->GetColor("ShieldColor2")==11)) {calcdmg=6; ctrl->Play(8);}
  				if ((ctrl->GetColor("SwordColor1")==14)&&(ctrl->GetColor("ShieldColor2")==10)) {calcdmg=6; ctrl->Play(8);}
  				if ((ctrl->GetColor("SwordColor1")==11)&&(ctrl->GetColor("ShieldColor2")==14)) {calcdmg=6; ctrl->Play(8);}
  				if ((ctrl->GetColor("SwordColor1")!=8)&&(ctrl->GetColor("ShieldColor2")==8)) {calcdmg=4; ctrl->Play(3);}
  				if ((ctrl->GetColor("SwordColor1")==8)&&(ctrl->GetColor("ShieldColor2")!=8)) {calcdmg=0; ctrl->Play(6);}
  				if ((ctrl->GetColor("SwordColor1")==10)&&(ctrl->GetColor("ShieldColor2")==14)) {calcdmg=0; ctrl->Play(6);}
  				if ((ctrl->GetColor("SwordColor1")==14)&&(ctrl->GetColor("ShieldColor2")==11)) {calcdmg=0; ctrl->Play(6);}
  				if ((ctrl->GetColor("SwordColor1")==11)&&(ctrl->GetColor("ShieldColor2")==10)) {calcdmg=0; ctrl->Play(6);}
				}
 				if (ctrl->Player2Int("attstate1")!=ctrl->Player2Int("defstate2")) { 
  				if (ctrl->Player2Int("attstate1")==1){temp=ctrl->GetColor("HelmColor2");}
  				if (ctrl->Player2Int("attstate1")==2){temp=ctrl->GetColor("ArmorColor2");}
  				if (ctrl->Player2Int("attstate1")==3){temp=ctrl->GetColor("LegColor2");}

  				if (ctrl->GetColor("SwordColor1")==temp){calcdmg=4; ctrl->Play(7);}
  				if ((ctrl->GetColor("SwordColor1")==10)&&(temp==11)){calcdmg=8; ctrl->Play(5);}
  				if ((ctrl->GetColor("SwordColor1")==11)&&(temp==14)){calcdmg=8; ctrl->Play(5);}
  				if ((ctrl->GetColor("SwordColor1")==14)&&(temp==10)){calcdmg=8; ctrl->Play(5);}
  				if ((ctrl->GetColor("SwordColor1")!=8)&&(temp==8)){calcdmg=6; ctrl->Play(5);}
  				if ((ctrl->GetColor("SwordColor1")==8)&&(temp!=8)){calcdmg=2; ctrl->Play(7);}
  				if ((ctrl->GetColor("SwordColor1")==10)&&(temp==14)){calcdmg=2; ctrl->Play(7);}
  				if ((ctrl->GetColor("SwordColor1")==11)&&(temp==10)){calcdmg=2; ctrl->Play(7);}
  				if ((ctrl->GetColor("SwordColor1")==14)&&(temp==11)){calcdmg=2; ctrl->Play(7);}
				}
 				ctrl->Int2Player(ctrl->Player2Int("health2")-(ctrl->Sys2Int("multi")*calcdmg), "health2");
			}

			if ((ctrl->Sys2Int("turn")==10)&&(ctrl->Player2Int("attstate2")!=0)){
 			if (ctrl->Player2Int("attstate2")==ctrl->Player2Int("defstate1")) {
  			if (ctrl->GetColor("SwordColor2")==ctrl->GetColor("ShieldColor1")) {calcdmg=2; ctrl->Play(3);}
  			if ((ctrl->GetColor("SwordColor2")==10)&&(ctrl->GetColor("ShieldColor1")==11)) {calcdmg=6; ctrl->Play(8);}
  			if ((ctrl->GetColor("SwordColor2")==14)&&(ctrl->GetColor("ShieldColor1")==10)) {calcdmg=6; ctrl->Play(8);}
  			if ((ctrl->GetColor("SwordColor2")==11)&&(ctrl->GetColor("ShieldColor1")==14)) {calcdmg=6; ctrl->Play(8);}
  			if ((ctrl->GetColor("SwordColor2")!=8)&&(ctrl->GetColor("ShieldColor1")==8)) {calcdmg=4; ctrl->Play(3);}
  			if ((ctrl->GetColor("SwordColor2")==8)&&(ctrl->GetColor("ShieldColor1")!=8)) {calcdmg=0; ctrl->Play(6);}
  			if ((ctrl->GetColor("SwordColor2")==10)&&(ctrl->GetColor("ShieldColor1")==14)) {calcdmg=0; ctrl->Play(6);}
  			if ((ctrl->GetColor("SwordColor2")==14)&&(ctrl->GetColor("ShieldColor1")==11)) {calcdmg=0; ctrl->Play(6);}
  			if ((ctrl->GetColor("SwordColor2")==11)&&(ctrl->GetColor("ShieldColor1")==10)) {calcdmg=0; ctrl->Play(6);}
			 }
 			if (ctrl->Player2Int("attstate2")!=ctrl->Player2Int("defstate1")) { 
  			if (ctrl->Player2Int("attstate2")==1){temp=ctrl->GetColor("HelmColor1");}
  			if (ctrl->Player2Int("attstate2")==2){temp=ctrl->GetColor("ArmorColor1");}
  			if (ctrl->Player2Int("attstate2")==3){temp=ctrl->GetColor("LegColor1");}

  			if (ctrl->GetColor("SwordColor2")==temp){calcdmg=4; ctrl->Play(7);}
  			if ((ctrl->GetColor("SwordColor2")==10)&&(temp==11)){calcdmg=8; ctrl->Play(5);}
  			if ((ctrl->GetColor("SwordColor2")==11)&&(temp==14)){calcdmg=8; ctrl->Play(5);}
  			if ((ctrl->GetColor("SwordColor2")==14)&&(temp==10)){calcdmg=8; ctrl->Play(5);}
  			if ((ctrl->GetColor("SwordColor2")!=8)&&(temp==8)){calcdmg=6; ctrl->Play(5);}
  			if ((ctrl->GetColor("SwordColor2")==8)&&(temp!=8)){calcdmg=2; ctrl->Play(7);}
  			if ((ctrl->GetColor("SwordColor2")==10)&&(temp==14)){calcdmg=2; ctrl->Play(7);}
  			if ((ctrl->GetColor("SwordColor2")==11)&&(temp==10)){calcdmg=2; ctrl->Play(7);}
  			if ((ctrl->GetColor("SwordColor2")==14)&&(temp==11)){calcdmg=2; ctrl->Play(7);}
			 }
 			ctrl->Int2Player(ctrl->Player2Int("health1")-(ctrl->Sys2Int("multi")*calcdmg), "health1");
			}
			calcdmg=0;
			if (ctrl->Sys2Int("turn") ==10){
			ctrl->Int2Sys(ctrl->Sys2Int("theturn")+1, "theturn");
			ctrl->Int2Sys(2,"turn");
			}
			system("cls");
			ctrl->Draw_Table();
			ctrl->Draw_Health();
			ctrl->Draw_Turn();
			ctrl->Draw_Players();
			if (ctrl->Player2Int("health1") == 0) {
				ctrl->Kill(1);
				ctrl->gotoxy(1,1);
				cout << ctrl->GetName("name1") <<" has died, "<< ctrl->GetName("name2") << " wins."; 
				ctrl->Play(3);
				ctrl->Int2Sys(98,"turn");
			}
			if (ctrl->Player2Int("health2") == 0) {
				ctrl->Kill(2);
				ctrl->gotoxy(1,1);
				cout << ctrl->GetName("name2") << " has died, "<< ctrl->GetName("name1") << " wins."; 
				ctrl->Play(3);
				ctrl->Int2Sys(98,"turn");
			}
			if ((ctrl->Sys2Int("mode")==1)||(ctrl->Sys2Int("mode")==2)){}
			if (ctrl->Sys2Int("mode")==3){}
			if (ctrl->Sys2Int("mode")==4){}
			ctrl->Int2Sys(ctrl->Sys2Int("turn")+1,"turn");
			ctrl->Save(3);
		}
	delete ctrl;
}
