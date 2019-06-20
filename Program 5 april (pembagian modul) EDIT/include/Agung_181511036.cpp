#include "Agung_181511036.h"

struct button {
	int xLeft;
	int xRight;
	int yTop;
	int yBottom;
	int opt;
	const char *image;
	const char *active;
} bexit, play,about,highScore;

DWORD ScreenWidth(){
	return GetSystemMetrics(SM_CXSCREEN);
}

DWORD ScreenHeight(){
	return GetSystemMetrics(SM_CYSCREEN);
}

void Initialize() {
	initwindow(ScreenWidth(),ScreenHeight(),"",-3,-3);
}

void ButtonPos(){

	// Button Exit
	bexit.xLeft = ScreenWidth()/2-75;
	bexit.xRight = ScreenWidth()/2+75;
	bexit.yTop = ScreenHeight()/2+195;
	bexit.yBottom = ScreenHeight()/2+245;
	bexit.opt = 0;
	bexit.image = "model/MainMenu/exit.gif";
	bexit.active = "model/MainMenu/h_exit.gif";

	// Button Play
	play.xLeft = ScreenWidth()/2-75;
	play.xRight = ScreenWidth()/2+75;
	play.yTop = ScreenHeight()/2;
	play.yBottom = ScreenHeight()/2+50;
	play.opt = 1;
	play.image = "model/MainMenu/play.gif";
	play.active = "model/MainMenu/h_play.gif";

	// Button Settings
//	settings.xLeft =;
//	settings.xRight = ;
//	settings.yTop =;
//	settings.yBottom = ;
//	settings.opt = 2;
//	settings.image = "";
//	settings.active = "";

	// Button About
	about.xLeft = ScreenWidth()/2-75;
	about.xRight = ScreenWidth()/2+75;
	about.yTop = ScreenHeight()/2+130;
	about.yBottom = ScreenHeight()/2+180;
	about.opt = 3;
	about.image = "model/MainMenu/About.gif";
	about.active = "model/MainMenu/h_About.gif";

	// Button highScore
	highScore.xLeft = ScreenWidth()/2-75;
	highScore.xRight = ScreenWidth()/2+75;
	highScore.yTop = ScreenHeight()/2+65;
	highScore.yBottom = ScreenHeight()/2+115;
	highScore.opt = 4;
	highScore.image = "model/MainMenu/Score.gif";
	highScore.active = "model/MainMenu/h_Score.gif";
}

void menu(){

	// Background Image
	readimagefile("model/MainMenu/menu.jpg",0,0,ScreenWidth(),ScreenHeight());

	ButtonPos();

	int mousex,mousey,map[16][33];

	while(!ismouseclick(WM_LBUTTONDOWN)){
		readimagefile(play.image,play.xLeft,play.yTop,play.xRight,play.yBottom);
		readimagefile(highScore.image,highScore.xLeft,highScore.yTop,highScore.xRight,highScore.yBottom);
		readimagefile(about.image,about.xLeft,about.yTop,about.xRight,about.yBottom);
		readimagefile(bexit.image,bexit.xLeft,bexit.yTop,bexit.xRight,bexit.yBottom);
	}
	while(1){
		// Mouse Click event Listener
		getmouseclick(WM_LBUTTONDOWN,mousex,mousey);
		if((mousex > play.xLeft) && (mousex < play.xRight) && (mousey > play.yTop) && (mousey < play.yBottom)){
			readimagefile(play.active,play.xLeft,play.yTop,play.xRight,play.yBottom);
			delay(300);
			readimagefile(play.image,play.xLeft,play.yTop,play.xRight,play.yBottom);
			delay(200);
//			setactivepage(0);
            cleardevice();
//			setactivepage(1);
//			cleardevice();
			start(map);
//			setvisualpage(1);
			break;
		}
		if((mousex > bexit.xLeft) && (mousex < bexit.xRight) && (mousey > bexit.yTop) && (mousey < bexit.yBottom)){
			readimagefile(bexit.active,bexit.xLeft,bexit.yTop,bexit.xRight,bexit.yBottom);
			delay(300);
			readimagefile(bexit.image,bexit.xLeft,bexit.yTop,bexit.xRight,bexit.yBottom);
			delay(200);
			cleardevice();
			quit();
		}
	}
}

void quit() {
  closegraph();
  exit(1);
}
