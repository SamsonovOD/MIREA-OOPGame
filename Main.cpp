#include"Main.h"
int main(){;
	Controller* ctrl = new Controller();
	while (ctrl->Sys2Int("turn") != 99){
		ctrl->TurnAct();
	}
	ctrl->gotoxy(1,22);
	delete ctrl;
	system("pause");
	return 0;
}
