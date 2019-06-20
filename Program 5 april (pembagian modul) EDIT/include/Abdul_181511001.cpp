#include "Abdul_181511001.h"

void skor(int banana)
{
	settextstyle(9, HORIZ_DIR, 5);
	outtextxy(810, 655, "SCORE : ");

	int x=1050, y=655;
    char arr[50];
        sprintf(arr, "%d", banana*10);
        settextstyle(9, HORIZ_DIR, 5);
        outtextxy(x, y, arr);
        //cleardevice();
}

void sound(void * ignored)
{
    PlaySound(TEXT("sound/musicgame.wav"),NULL,SND_SYNC);
}

/*void sound_banana(void * ignored)
{
    PlaySound(TEXT("sound/coin.wav"),NULL,SND_SYNC);
}*/
