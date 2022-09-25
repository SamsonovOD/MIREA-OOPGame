#include"Sounds.h"
Sounds::Sounds(){}

void Sounds::Play(int x){
//Project linker to 84xlibwinmm.a was used
	switch(x){
	case 1: PlaySound(TEXT("snd1.wav"), NULL, SND_FILENAME | SND_ASYNC); break;
	case 2: PlaySound(TEXT("snd2.wav"), NULL, SND_FILENAME | SND_ASYNC); break;
	case 3: PlaySound(TEXT("snd3.wav"), NULL, SND_FILENAME | SND_ASYNC); break;
	case 4: PlaySound(TEXT("snd4.wav"), NULL, SND_FILENAME | SND_ASYNC); break;
	case 5: PlaySound(TEXT("snd5.wav"), NULL, SND_FILENAME | SND_ASYNC); break;
	case 6: PlaySound(TEXT("snd6.wav"), NULL, SND_FILENAME | SND_ASYNC); break;
	case 7: PlaySound(TEXT("snd7.wav"), NULL, SND_FILENAME | SND_ASYNC);break;
	case 8: PlaySound(TEXT("snd8.wav"), NULL, SND_FILENAME | SND_ASYNC); break;
	}
}
