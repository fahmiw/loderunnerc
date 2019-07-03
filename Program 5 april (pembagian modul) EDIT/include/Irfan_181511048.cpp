#include "Irfan_181511048.h"

struct {
    int pisang;
    int nyawa;
}info;

struct{
    int i;
    int j;
    int x;
    int y;
}posisi;

int tingkat = 1;			// i = baris,	j = kolom (untuk menggambar map & posisi player)
char key;
address level;

//0 = kosong, 1 = tanah, 2 = tali, 3 = tangga, 4 = player, 5 pisang, 6 = portal, 7 = bata, 8 = musuh

int map_01[16][32]= {
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  0, 0, 0, 0, 0, 0, 0, 0, 5, 0,  0, 0, 0, 0, 0, 0, 5, 0, 0, 0,  0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  0, 0, 0, 0, 0, 0, 3, 1, 1, 1,  3, 1, 1, 1, 3, 1, 1, 1, 3, 0,  0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  0, 0, 0, 0, 0, 0, 3, 0, 0, 0,  3, 0, 0, 0, 3, 0, 0, 0, 3, 0,  0, 0},
					{1, 1, 1, 1, 1, 1, 1, 3, 1, 1,  1, 1, 1, 1, 1, 1, 1, 1, 3, 1,  1, 0, 0, 0, 3, 2, 2, 2, 3, 0,  0, 0},
					{0, 0, 0, 0, 0, 0, 0, 3, 0, 5,  0, 0, 0, 0, 0, 0, 0, 0, 3, 0,  0, 0, 0, 0, 3, 0, 0, 0, 3, 0,  0, 0},
					{1, 3, 1, 1, 1, 1, 1, 1, 1, 1,  1, 1, 1, 1, 3, 1, 1, 1, 1, 1,  1, 1, 3, 1, 1, 1, 1, 1, 1, 1,  1, 1},
					{0, 3, 0, 0, 0, 0, 0, 0, 0, 0,  0, 0, 0, 0, 3, 0, 0, 0, 0, 0,  0, 0, 3, 0, 0, 0, 5, 0, 0, 0,  0, 0},
					{0, 3, 2, 2, 2, 2, 2, 2, 2, 2,  2, 2, 2, 2, 3, 0, 0, 0, 3, 1,  1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  3, 0},
					{0, 3, 0, 0, 0, 0, 0, 0, 0, 0,  0, 0, 0, 0, 3, 0, 0, 0, 3, 0,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  3, 0},
					{1, 1, 1, 1, 3, 1, 1, 1, 1, 1,  1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  1, 3, 1, 1, 1, 1, 3, 1, 1, 1,  1, 1},

					{0, 0, 0, 0, 3, 0, 0, 0, 0, 0,  0, 0, 5, 0, 0, 0, 0, 0, 0, 0,  0, 3, 0, 0, 0, 0, 3, 0, 0, 5,  0, 0},
					{0, 3, 1, 1, 1, 1, 1, 1, 1, 3,  1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  3, 1},
					{0, 3, 0, 5, 0, 0, 0, 0, 0, 3,  0, 0, 0, 0, 0, 0, 0, 0, 5, 0,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  3, 0},
					{1, 1, 1, 1, 3, 1, 1, 1, 1, 1,  1, 1, 1, 3, 1, 1, 1, 1, 1, 1,  3, 1, 1, 1, 1, 3, 1, 1, 3, 1,  1, 1},
					{4, 0, 0, 0, 3, 0, 0, 0, 0, 0,  0, 0, 0, 3, 0, 0, 0, 0, 0, 0,  3, 0, 0, 0, 0, 3, 0, 0, 3, 0,  5, 0},
					{1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  1, 1},
					};

int map_02[16][32]= {
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  0, 0},
                    {1, 3, 1, 1, 1, 1, 1, 1, 1, 1,  1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  3, 1},
                    {0, 3, 0, 0, 0, 0, 0, 0, 0, 0,  0, 0, 0, 0, 5, 0, 0, 0, 0, 0,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  3, 0},
					{1, 1, 1, 3, 1, 1, 1, 3, 1, 1,  1, 3, 1, 1, 1, 3, 1, 1, 1, 3,  1, 1, 1, 3, 1, 1, 1, 3, 1, 1,  1, 1},
					{0, 0, 0, 3, 0, 0, 5, 3, 0, 0,  0, 3, 0, 0, 0, 3, 0, 0, 0, 3,  0, 0, 0, 3, 5, 0, 0, 3, 0, 0,  0, 0},
					{1, 3, 1, 1, 1, 3, 1, 1, 1, 3,  1, 1, 1, 3, 1, 1, 1, 3, 1, 1,  1, 3, 1, 1, 1, 3, 1, 1, 1, 3,  1, 1},
					{0, 3, 5, 0, 0, 3, 0, 0, 0, 3,  0, 0, 0, 3, 0, 0, 0, 3, 0, 0,  0, 3, 0, 0, 0, 3, 0, 0, 0, 3,  5, 0},
					{1, 1, 1, 3, 1, 1, 1, 3, 1, 1,  1, 3, 1, 1, 1, 3, 1, 1, 1, 3,  1, 1, 1, 3, 1, 1, 1, 3, 1, 1,  1, 1},
					{0, 0, 0, 3, 0, 0, 0, 3, 0, 0,  0, 3, 0, 5, 0, 3, 0, 5, 0, 3,  0, 0, 0, 3, 0, 0, 0, 3, 0, 0,  0, 0},
					{1, 3, 1, 1, 1, 1, 1, 1, 1, 1,  1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  3, 1},

					{0, 3, 0, 0, 0, 0, 0, 0, 0, 0,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  3, 0},
					{0, 3, 0, 0, 0, 5, 0, 0, 0, 0,  0, 0, 0, 0, 0, 0, 0, 0, 5, 0,  0, 0, 0, 0, 0, 0, 5, 0, 0, 0,  3, 0},
					{1, 1, 1, 3, 1, 1, 1, 3, 1, 1,  1, 3, 1, 1, 1, 3, 1, 1, 1, 1,  3, 1, 1, 1, 3, 1, 1, 1, 3, 1,  1, 1},
					{0, 0, 0, 3, 2, 2, 2, 3, 0, 0,  0, 3, 2, 2, 2, 3, 0, 0, 0, 0,  3, 0, 0, 0, 3, 2, 2, 2, 3, 0,  0, 0},
					{4, 0, 0, 3, 0, 0, 0, 3, 0, 5,  0, 3, 0, 0, 0, 3, 0, 0, 0, 0,  3, 0, 5, 0, 3, 0, 0, 0, 3, 0,  0, 0},
					{1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  1, 1},
					};

int map_03[16][32]={
                    {2,	2,  2,  2,  2, 	2,	2,  2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	0,	0,	0,	0, 0, 0, 0, 0, 0, 0},
                    {3,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	1,	1,	1,	1,	1,	1, 3, 0, 5, 0, 0, 0},
                    {3,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0, 7, 7, 7, 7, 7, 7},
                    {3,	0,	0,	3,	0,	5,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	5,	0,	0,	0,	0,	0, 0, 0, 0, 0, 0, 0},
                    {1,	1,	1,	1,	1,	1,	1,	1,	3,	1,	1,	1,	1,	1,	3,	1,	1,	1,	1,	1,	1,	3,	1, 1, 0, 0, 0, 0, 0},
                    {0,	5,	0,	0,	0,	0,	0,	0,	3,	0,	0,	0,	0,	0,	3,	0,	0,	0,	0,	0,	0,	3,	0, 0, 2, 2, 0, 0, 0},
                    {1,	1,	1,	3,	1,	1,	1,	1,	1,	0,	0,	0,	0,	0,	3,	0,	0,	0,	0,	0,	0,	3,	0, 0, 0, 2, 2, 0, 0},
                    {0,	0,	0,	3,	0,	0,	0,	0,	0,	0,	0,	3,	1,	1,	1,	1,	1,	3,	1,	1,	1,	1,	0, 0, 0, 0, 2, 2, 5},
                    {0,	0,	0,	3,	2,	2,	2,	2,	2,	2,	2,	3,	0,	0,	0,	0,	0,	3,	0,	0,	0,	5,	0, 0, 0, 0, 0, 0, 1},
                    {0,	0,	0,	3,	0,	0,	0,	0,	0,	0,	0,	3,	0,	0,	3,	1,	1,	1,	1,	1,	1,	1,	1, 1, 3, 0, 0, 0, 0},
                    {0,	0,	0,	3,	0,	0,	0,	5,	0,	0,	0,	3,	0,	0,	3,	1,	1,	1,	1,	1,	1,	1,	1, 1, 3, 0, 0, 0, 0},
                    {1,	1,	3,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	0,	0,	0,	0,	0,	0, 1, 1, 1, 1, 3, 1},
                    {1,	1,	3,	1,	1,	1,	1,	1,	5,	1,	1,	1,	1,	1,	1,	1,	0,	3,	1,	1,	1,	3,	0, 1, 1, 1, 1, 3, 1},
                    {0,	0,	3,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	3,	1,	1,	1,	3,	0, 0, 5, 0, 0, 3, 0},
                    {0,	0,	3,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	3,	1,	1,	1,	1,	1, 1, 1, 1, 1, 1, 1},
                    {7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7, 7, 7, 7, 7, 7, 7},
                };

int map_04[16][32]={
                    {5,	1,	1,	0,	0,	0,	0,	0,	0,	1,	1,	0,	0,	0,	3,	0,	0,	0,	0,	1,	1,	0,	0,	0,	0,	0,	1,	1,	5},
                    {1,	1,	0,	0,	0,	0,	0,	0,	1,	1,	0,	0,	0,	1,	1,	1,	0,	0,	0,	0,	1,	1,	0,	0,	0,	0,	0,	1,	1},
                    {0,	0,	0,	0,	0,	0,	5,	1,	1,	0,	0,	5,	1,	1,	0,	1,	1,	5,	0,	0,	0,	1,	1,	5,	0,	0,	0,	0,	1},
                    {0,	0,	0,	0,	0,	0,	1,	1,	0,	0,	0,	1,	1,	0,	0,	0,	1,	1,	0,	0,	0,	0,	1,	1,	0,	0,	0,	0,	0},
                    {0,	0,	0,	0,	0,	1,	1,	0,	0,	5,	1,	1,	0,	0,	0,	0,	0,	1,	1,	5,	0,	0,	0,	1,	1,	0,	0,	0,	0},
                    {3,	0,	0,	5,	1,	1,	0,	0,	0,	1,	1,	0,	2,	2,	2,	2,	2,	0,	1,	1,	0,	0,	0,	0,	1,	1,	5,	0,	0},
                    {3,	0,	0,	1,	1,	0,	0,	0,	1,	1,	5,	0,	0,	0,	0,	0,	0,	0,	5,	1,	1,	0,	0,	0,	0,	1,	1,	0,	0},
                    {3,	0,	1,	1,	0,	0,	5,	1,	1,	0,	1,	1,	0,	1,	0,	1,	0,	1,	1,	0,	1,	1,	5,	0,	0,	0,	1,	1,	3},
                    {3,	1,	1,	0,	0,	0,	1,	1,	0,	0,	0,	0,	1,	5,	1,	5,	1,	0,	0,	0,	0,	1,	1,	0,	0,	0,	0,	1,	3},
                    {3,	0,	0,	0,	0,	1,	1,	0,	0,	0,	0,	0,	1,	1,	6,	1,	1,	0,	0,	0,	0,	0,	1,	1,	0,	0,	0,	0,	3},
                    {3,	0,	0,	5,	1,	1,	0,	0,	0,	0,	0,	0,	0,	1,	1,	1,	0,	0,	0,	0,	0,	0,	0,	1,	1,	5,	3,	0,	3},
                    {1,	1,	0,	1,	1,	0,	0,	0,	0,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	0,	0,	0,	1,	1,	3,	1,	1},
                    {7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7},
                };

int map_05[16][32]={
                    {0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	2,	2,	2,	2,	2,	2,	0,	0,	0,	0,	0,	0},
                    {0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	2,	2,	2,	2,	2,	3,	0,	0,	0,	0,	0,	0,	0,	5,	0,	0,	0,	0},
                    {0,	0,	0,	0,	0,	2,	2,	2,	2,	2,	3,	0,	0,	0,	0,	0,	0,	0,	0,	0,	5,	0,	1,	1,	1,	1,	1,	1,	3},
                    {0,	2,	2,	2,	3,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	1,	1,	1,	1,	1,	0,	0,	5,	0,	1,	3},
                    {3,	0,	0,	0,	0,	0,	0,	0,	5,	0,	0,	0,	0,	5,	0,	1,	1,	1,	1,	0,	0,	0,	0,	0,	1,	1,	0,	1,	3},
                    {3,	0,	0,	1,	1,	1,	0,	1,	1,	0,	0,	0,	1,	1,	1,	1,	0,	0,	0,	0,	1,	1,	1,	1,	1,	1,	3,	1,	3},
                    {3,	0,	0,	5,	0,	0,	0,	0,	0,	0,	0,	0,	1,	0,	5,	0,	0,	1,	1,	1,	1,	0,	0,	0,	0,	1,	3,	1,	3},
                    {3,	0,	1,	1,	0,	1,	1,	1,	0,	0,	0,	0,	1,	0,	1,	1,	1,	1,	0,	0,	0,	0,	1,	1,	3,	1,	3,	1,	3},
                    {3,	0,	0,	0,	0,	0,	0,	0,	5,	0,	0,	0,	1,	0,	1,	0,	0,	0,	0,	5,	1,	1,	1,	1,	3,	1,	3,	1,	3},
                    {3,	0,	0,	1,	1,	1,	0,	1,	1,	0,	0,	0,	1,	0,	1,	0,	1,	1,	1,	1,	1,	0,	0,	1,	3,	1,	3,	1,	3},
                    {3,	0,	0,	5,	0,	0,	5,	0,	0,	0,	0,	0,	1,	0,	1,	0,	1,	0,	0,	0,	0,	0,	0,	1,	3,	1,	3,	1,	3},
                    {3,	0,	1,	1,	0,	1,	1,	1,	0,	0,	0,	0,	1,	0,	1,	0,	1,	0,	1,	1,	1,	1,	3,	1,	3,	1,	3,	1,	3},
                    {3,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	1,	0,	1,	0,	1,	0,	1,	0,	5,	1,	3,	1,	3,	1,	3,	1,	3},
                    {3,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	1,	0,	1,	0,	1,	0,	1,	1,	1,	1,	3,	1,	3,	1,	3,	1,	3},
                    {1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	3,	0,	3,	0,	3,	0,	3},
                    {7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7},
                };


void start(){
    char name[10];
    Queue P;
    lubang B;
    //INPUT NAMA
	setbkcolor(BLACK);
	cleardevice();
	settextjustify(LEFT_TEXT, TOP_TEXT);
	nameinput(335, 283, "", 243, name, COMPLEX_FONT, LEFT_TEXT);
	cleardevice();

    address head;

    head=salin_level(level);
    level=head;

    info.pisang=0;
    info.nyawa=5;

    inisiasi_queue(&P);

    while(level != NULL){
        int finish=0,kena=0;

        drawlevel(tingkat);
        stage(tingkat);
        tampil_nyawa(info.nyawa);
        matriks(level, posisi.i, posisi.j);					// gambar map
        Tampil_List(level);
        posisi.i=14; posisi.j=0;                          // posisi awal player
        posisi.x=3;  posisi.y=2;                         // posisi awal musuh
        mulai(enemy,0,NULL);
        while(finish!=1 && kena != 1){
            //Tampil_List(level);
            skor(info.pisang);
            draw_sprite(level, posisi.i , posisi.j);
            kondisi(level, &posisi.i, &posisi.j, &info.pisang);
            key = toupper(getch());						// toupper (huruf kapital), tolower (huruf kecil)
            obj(level, posisi.i, posisi.j);
            cursor(level, &posisi.i , &posisi.j, key);			// gerak karakter
            hole_rule(level, &posisi.i , &posisi.j, key, &P, B);
            spawn_portal(info.pisang,tingkat,&level);
            if(posisi.i == posisi.y && posisi.j == posisi.x )
            {
                kena=1;
                info.nyawa=info.nyawa -1;
            }
            if (level->map[posisi.i][posisi.j]==6){							// masuk portal
                delay(300);
                finish=1;
                readimagefile("model/MainMenu/nextlevel.jpg",0,0,ScreenWidth(),ScreenHeight());
                win(info.pisang);
                tingkat++;
                level = level->next;
            }
        }
    }
}

int spawn_portal(int banana,int tingkat,address *level){                      // memunculkan portal
   switch(tingkat){
        case 1:
            if(banana == MAKS_PISANG_01)						// 9 pisang
            {
                (*level)->map[2][1]=6;
                    readimagefile("model/environmental/portal.bmp",0+(ScreenWidth()/32)*1,0+(ScreenHeight()/18)*2,(ScreenWidth()/32)+(ScreenWidth()/32)*1,(ScreenHeight()/18)+(ScreenHeight()/18)*2);
            }
            break;
        case 2:
            if(banana == MAKS_PISANG_02)						// 9 + 12 = 21 pisang
            {
                (*level)->map[0][15]=6;
                    readimagefile("model/environmental/portal.bmp",0+(ScreenWidth()/32)*15,0+(ScreenHeight()/18)*0,(ScreenWidth()/32)+(ScreenWidth()/32)*15,(ScreenHeight()/18)+(ScreenHeight()/18)*0);
            }
            break;
    }
    return 0;
}

void drawlevel(int tingkat)
{
    switch (tingkat){
        case 1: readimagefile("model/MainMenu/level1.jpg",0,0,1366,768);break;
        case 2: readimagefile("model/MainMenu/level2.jpg",0,0,1366,768);break;
    }
}

address salin_level (address level){
        address head, pnew;
        int i,j;

        level = (address) malloc(sizeof (ElmtList));
        (level)->next = NULL;
        head = level;

        for(i=0;i<16;i++)
        {
            for(j=0;j<32;j++)
            {
                level->map[i][j]=map_01[i][j];
            }
        }

        pnew = (address) malloc(sizeof (ElmtList));
        pnew->next = NULL;
        level->next = pnew;
        level = level->next;

        for(i=0;i<16;i++)
        {
            for(j=0;j<32;j++)
            {
                level->map[i][j]=map_02[i][j];
            }
        }

        pnew = (address) malloc(sizeof (ElmtList));
        pnew->next = NULL;
        level->next = pnew;
        level = level->next;

        for(i=0;i<16;i++)
        {
            for(j=0;j<32;j++)
            {
                level->map[i][j]=map_03[i][j];
            }
        }

    return head;
}

//menampilkan linked list
void Tampil_List (address p){
    int brs,klm;

    system("cls");
    printf("Data Map:\n");
        for(brs=0;brs<16;brs++){
            for(klm=0;klm<32;klm++){
                printf("%d ", (p)->map[brs][klm]);
            }
            printf("\n");
        }
    printf("\n");
}

void tampil_nyawa(int life)
{
    settextstyle(9, HORIZ_DIR, 5);
	outtextxy(1050, 700, "LIFE : ");

	int x=1220, y=700;
    char arr[50];
        sprintf(arr, "%d", life);
        settextstyle(9, HORIZ_DIR, 5);
        outtextxy(x, y, arr);
}

void enemy(void *)
{
    int simpul,kondisi;

    while(level->map[posisi.i][posisi.j] != 6)
    {
        simpul=dijkstra(level,posisi.i,posisi.j,posisi.y);
        obj(level, posisi.y, posisi.x);
        kondisi=move_musuh (level,posisi.i,posisi.j,&posisi.y,&posisi.x,simpul);
        draw_musuh (level,posisi.y,posisi.x,kondisi);
        if  (level->map[posisi.i][posisi.j] == 6 || (posisi.i == posisi.y && posisi.j == posisi.x )) // masuk portal
        {
            cleardevice();
            berhenti();
        }
    }

}

void draw_musuh (address level,int brs_hunter,int klm_hunter,int kostum)
{

    if(kostum == 0)     //kanan
    {
        readimagefile("model/character/hunter_kanan_2.gif", lebar*klm_hunter-lebar/2,0+tinggi*brs_hunter,lebar/2+lebar*klm_hunter,tinggi+tinggi*brs_hunter);
        delay(100);
        obj(level, brs_hunter, klm_hunter-1);
        obj(level, brs_hunter, klm_hunter);
        readimagefile("model/character/hunter_kanan_1.gif", 0+lebar*klm_hunter,0+tinggi*brs_hunter,lebar+lebar*klm_hunter,tinggi+tinggi*brs_hunter);
        delay(100);
    }
    if(kostum == 1)     //kiri
    {
        readimagefile("model/character/hunter_kiri_2.gif", lebar/2+lebar*klm_hunter,0+tinggi*brs_hunter,lebar*3/2+lebar*klm_hunter,tinggi+tinggi*brs_hunter);
        delay(100);
        obj(level, brs_hunter, klm_hunter+1);
        obj(level, brs_hunter, klm_hunter);
        readimagefile("model/character/hunter_kiri_1.gif", 0+lebar*klm_hunter,0+tinggi*brs_hunter,lebar+lebar*klm_hunter,tinggi+tinggi*brs_hunter);
        delay(100);
    }
    if(kostum == 3)     //turun
    {
        readimagefile("model/character/hunter_climb_3.gif", 0+lebar*klm_hunter,tinggi*brs_hunter-tinggi/2,lebar+lebar*klm_hunter,tinggi/2+tinggi*brs_hunter);
        delay(100);
        obj(level, brs_hunter-1, klm_hunter);
        obj(level, brs_hunter, klm_hunter);
        readimagefile("model/character/hunter_climb_3.gif", 0+lebar*klm_hunter,0+tinggi*brs_hunter,lebar+lebar*klm_hunter,tinggi+tinggi*brs_hunter);
        delay(100);
    }
     if(kostum == 4)     //naik
    {
        readimagefile("model/character/hunter_climb_2.gif", 0+lebar*klm_hunter,tinggi/2+tinggi*brs_hunter,lebar+lebar*klm_hunter,tinggi*3/2+tinggi*brs_hunter);
        delay(150);
        obj(level, brs_hunter+1, klm_hunter);
        obj(level, brs_hunter, klm_hunter);
        readimagefile("model/character/hunter_climb_1.gif", 0+lebar*klm_hunter,0+tinggi*brs_hunter,lebar+lebar*klm_hunter,tinggi+tinggi*brs_hunter);
        delay(150);
    }
}

int dijkstra(address level,int brs_monkey,int klm_monkey,int brs_hunter)
{
    int dekat,klm,n,temp1,temp2;
    int simpul[10] = {0,0,0,0,0,0,0,0,0,0};
    klm = 0; n = 0;

    if((brs_monkey < brs_hunter)||(brs_monkey > brs_hunter))
    {
        if(brs_monkey < brs_hunter)         //posisi player diatas hunter
        {
            while(klm < 32)
            {
                if (level->map[brs_hunter][klm] == 3 && level->map[brs_hunter+1][klm] == 1 )
                {
                    simpul[n] = klm;
                    n++;
                }
                klm++;
            }
        }else if(brs_monkey > brs_hunter)           //posisi player dibawah hunter
        {
            while(klm < 32)
            {
                if (level->map[brs_hunter+1][klm] == 3 && level->map[brs_hunter][klm] == 0)
                {
                    simpul[n] = klm;
                    n++;
                }
                klm++;
            }
        }
        n=0;
        dekat = simpul[n];
        while(simpul[n+1] != 0)
        {
            temp1=klm_monkey - simpul[n];
            temp2=klm_monkey - simpul[n+1];

            if (temp1<0)
                temp1= -temp1;
            if (temp2<0)
                temp2= -temp2;

            if (temp1 > temp2 )
            {
                temp1=klm_monkey - dekat;
                temp2=klm_monkey - simpul[n+1];

                if (temp1<0)
                    temp1= -temp1;
                if (temp2<0)
                    temp2= -temp2;

                if (temp1 > temp2)
                    dekat = simpul[n+1];
            }
            n++;
        }
    }else if(brs_monkey == brs_hunter)
        dekat=klm_monkey;
    return dekat;        //mengembalikan kolom
}

int move_musuh (address level,int brs_monkey,int klm_monkey,int *brs_hunter,int *klm_hunter,int simpul)
{
    if(level->map[*brs_hunter+1][*klm_hunter] == 0 && level->map[*brs_hunter][*klm_hunter] != 2)         //jatuh
    {
        *brs_hunter = *brs_hunter +1;
        return 3;
    }

    if(*klm_hunter > simpul)                   //Jalan ke kiri
    {
        if(level->map[*brs_hunter+1][*klm_hunter-1] == 1 /*tanah*/ || level->map[*brs_hunter+1][*klm_hunter-1] == 3 /*tangga*/ || level->map[*brs_hunter+1][*klm_hunter-1] == 7 || level->map[*brs_hunter][*klm_hunter-1] == 2 || brs_monkey == *brs_hunter || klm_monkey < *klm_hunter  )
        {
            if(level->map[*brs_hunter][*klm_hunter-1] != 1){
                *klm_hunter = *klm_hunter -1;
                return 1;
            }

        }
    }else if(*klm_hunter < simpul)            //jalan ke kanan
    {
        if(level->map[*brs_hunter+1][*klm_hunter+1] == 1 /*tanah*/ || level->map[*brs_hunter+1][*klm_hunter+1] == 3 /*tangga*/ || level->map[*brs_hunter+1][*klm_hunter+1] == 7  || level->map[*brs_hunter][*klm_hunter+1] == 2 || brs_monkey == *brs_hunter )
        {
            if(level->map[*brs_hunter][*klm_hunter+1] != 1){
                *klm_hunter = *klm_hunter +1;
                return 0;
            }
        }
    }

    if (brs_monkey < *brs_hunter)                           //naik
    {
        if (level->map[*brs_hunter][*klm_hunter] == 3)
        {
            *brs_hunter = *brs_hunter -1;
            return 4;
        }
    }

    if(brs_monkey > *brs_hunter)                            //turun
    {
        if (level->map[*brs_hunter+1][*klm_hunter] == 3)
        {
            *brs_hunter = *brs_hunter +1;
            return 3;
        }
    }
}

