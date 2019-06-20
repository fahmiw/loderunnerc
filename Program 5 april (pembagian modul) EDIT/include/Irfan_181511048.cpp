#include "Irfan_181511048.h"

int pisang=0;
//int map[16][33];
		// i = baris,	j = kolom
char key,e;

//0 = kosong, 1 = tanah, 2 = tali, 3 = tangga, 4 = player, 5 pisang, 6 = portal 7=tembok bingkai
int ARRAY(int level, int baris, int kolom){
    if (level==1){
        int map_01[16][33]= {
                    {7, 7, 7, 7, 7, 7, 7, 7, 7, 7,  7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7},
                    {7, 0, 0, 0, 0, 0, 0, 0, 0, 0,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 7},
                    {7, 0, 0, 5, 0, 0, 0, 0, 0, 0,  0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 7},
					{7, 1, 1, 1, 1, 1, 1, 3, 1, 1,  1, 0, 0, 0, 1, 1, 1, 1, 3, 2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 3, 7},
					{7, 0, 0, 0, 0, 0, 0, 3, 0, 0,  0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 1, 1, 1, 1, 1, 1, 0, 0, 5, 0, 0, 3, 7},
					{7, 3, 1, 1, 1, 1, 1, 1, 1, 1,  0, 0, 1, 1, 3, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 7},
					{7, 3, 0, 0, 0, 0, 0, 0, 0, 0,  0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 7},
					{7, 3, 2, 2, 2, 2, 2, 2, 2, 2,  2, 2, 2, 2, 3, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 7},
					{7, 3, 0, 0, 0, 0, 0, 0, 0, 0,  0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 7},
					{7, 1, 1, 0, 0, 0, 0, 0, 0, 5,  0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 7},

					{7, 0, 0, 0, 0, 0, 0, 0, 1, 1,  1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7},
					{7, 0, 5, 0, 0, 0, 0, 0, 0, 0,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 7},
					{7, 1, 1, 1, 1, 1, 3, 0, 0, 0,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 1, 1, 7},
					{7, 0, 0, 0, 0, 0, 3, 0, 0, 0,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 7},
					{7, 1, 1, 1, 1, 1, 1, 1, 1, 1,  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 7},
					{7, 7, 7, 7, 7, 7, 7, 7, 7, 7,  7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7},
					};

            return map_01[baris][kolom];
    }

        if(level==2)
            {
            int map_02[16][33]= {
                    {7, 7, 7, 7, 7, 7, 7, 7, 7, 7,  7, 7, 7, 7, 7, 7, 7, 7, 7, 7,  7, 7, 7, 7, 7, 7, 7, 7, 7, 7,  7, 7, 7},
                    {7, 0, 5, 0, 0, 0, 0, 0, 0, 0,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  1, 1, 1, 1, 1, 0, 0, 0, 0, 0,  0, 0, 7},
                    {7, 1, 1, 1, 1, 3, 0, 0, 0, 0,  5, 0, 0, 0, 5, 0, 0, 0, 0, 0,  1, 1, 1, 1, 1, 3, 1, 1, 1, 1,  1, 0, 7},
					{7, 0, 0, 0, 0, 1, 1, 3, 1, 1,  1, 0, 0, 0, 1, 1, 1, 1, 3, 1,  1, 1, 1, 1, 1, 3, 1, 1, 1, 1,  1, 0, 7},
					{7, 0, 0, 0, 0, 0, 0, 3, 0, 0,  0, 0, 0, 0, 0, 0, 0, 0, 3, 0,  1, 5, 0, 0, 0, 3, 1, 1, 0, 0,  3, 0, 7},
					{7, 3, 1, 1, 1, 1, 1, 1, 1, 1,  0, 0, 1, 1, 3, 1, 1, 1, 1, 1,  1, 1, 1, 1, 1, 3, 1, 1, 0, 1,  3, 0, 7},
					{7, 3, 0, 0, 0, 0, 0, 0, 0, 0,  0, 0, 0, 0, 3, 0, 0, 0, 0, 0,  1, 1, 1, 1, 1, 3, 0, 0, 5, 1,  3, 0, 7},
					{7, 3, 2, 2, 2, 3, 0, 2, 2, 2,  2, 2, 2, 2, 3, 0, 0, 0, 0, 0,  1, 1, 1, 1, 1, 3, 1, 1, 1, 3,  3, 0, 7},
					{7, 3, 0, 0, 0, 3, 0, 0, 0, 0,  0, 0, 0, 0, 3, 0, 0, 0, 0, 0,  1, 0, 5, 0, 0, 3, 1, 1, 1, 3,  5, 0, 7},
					{7, 1, 1, 0, 0, 1, 1, 0, 0, 0,  0, 0, 0, 1, 1, 1, 3, 1, 1, 1,  1, 1, 1, 1, 1, 3, 0, 0, 0, 1,  1, 0, 7},

					{7, 0, 5, 0, 0, 0, 0, 0, 0, 0,  0, 0, 0, 0, 0, 0, 3, 0, 5, 0,  1, 1, 1, 1, 1, 1, 1, 1, 3, 1,  1, 0, 7},
					{7, 1, 1, 1, 1, 0, 0, 0, 0, 0,  1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  1, 5, 0, 0, 0, 0, 0, 0, 3, 1,  1, 0, 7},
					{7, 3, 0, 0, 0, 0, 0, 0, 0, 0,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  1, 1, 1, 1, 1, 1, 1, 1, 3, 1,  1, 1, 7},
					{7, 3, 0, 0, 0, 0, 0, 0, 0, 0,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  0, 0, 0, 0, 0, 0, 0, 0, 3, 0,  0, 0, 7},
					{7, 1, 1, 1, 1, 1, 1, 1, 1, 1,  1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  1, 1, 7},
					{7, 7, 7, 7, 7, 7, 7, 7, 7, 7,  7, 7, 7, 7, 7, 7, 7, 7, 7, 7,  7, 7, 7, 7, 7, 7, 7, 7, 7, 7,  7, 7, 7},
					};

        return map_02[baris][kolom];
        }

    if (level==3)
            {
            int map_03[baris][kolom]={
                    {2,	2,  2,  2,  2, 	2,	2,  2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	0,	0,	0,	0, 0, 0, 0, 0, 0, 0},
                    {3,	0,	0,	0,	5,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	1,	1,	1,	1,	1,	1, 3, 0, 5, 0, 0, 0},
                    {1,	1,	1,	1,	1,	1,	1,	1,	3,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0, 7, 7, 7, 7, 7, 7},
                    {0,	0,	0,	0,	0,	0,	0,	0,	3,	0,	0,	0,	0,	0,	0,	0,	0,	5,	0,	0,	0,	0,	0, 0, 0, 0, 0, 0, 0},
                    {0,	0,	0,	0,	0,	0,	0,	0,	3,	1,	1,	1,	1,	1,	3,	1,	1,	1,	1,	1,	1,	3,	1, 1, 0, 0, 0, 0, 0},
                    {0,	5,	0,	0,	0,	0,	0,	0,	3,	0,	0,	0,	0,	0,	3,	0,	0,	0,	0,	0,	0,	3,	0, 0, 2, 2, 0, 0, 0},
                    {1,	1,	1,	3,	1,	1,	1,	1,	1,	0,	0,	0,	0,	0,	3,	0,	0,	0,	0,	0,	0,	3,	0, 0, 0, 2, 2, 0, 0},
                    {0,	0,	0,	3,	0,	0,	0,	0,	0,	0,	0,	3,	1,	1,	1,	1,	1,	3,	1,	1,	1,	1,	0, 0, 0, 0, 2, 2, 5},
                    {0,	0,	0,	3,	2,	2,	2,	2,	2,	2,	2,	3,	0,	0,	0,	0,	0,	3,	0,	0,	0,	5,	0, 0, 0, 0, 0, 0, 1},
                    {0,	0,	0,	3,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	3,	1,	1,	1,	1,	1,	1,	1,	1, 1, 3, 0, 0, 0, 0},
                    {0,	0,	0,	3,	0,	0,	0,	5,	0,	0,	0,	0,	0,	0,	3,	1,	1,	1,	1,	1,	1,	1,	1, 1, 3, 0, 0, 0, 0},
                    {1,	1,	3,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	0,	0,	0,	0,	0,	0, 1, 1, 1, 1, 3, 1},
                    {1,	1,	3,	1,	1,	1,	1,	1,	5,	1,	1,	1,	1,	1,	1,	1,	0,	3,	1,	1,	1,	3,	0, 1, 1, 1, 1, 3, 1},
                    {0,	0,	3,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	3,	1,	1,	1,	3,	0, 0, 5, 0, 0, 3, 0},
                    {1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1, 1, 1, 1, 1, 1, 1},
                    {7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7, 7, 7, 7, 7, 7, 7},
                };
                return map_03[baris][kolom];
            }

        if (level==4){
            int map_04[baris][kolom]={
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
                return map_04[baris][kolom];
        }
        if (level==5){
            int map_05[baris][kolom]={
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
                return map_05[baris][kolom];
        }

}

void cek(int map[16][33], int level){
    int baris, kolom;
    for(baris=0; baris<16; baris++){
        for(kolom=0; kolom<33; kolom++){
            map[baris][kolom]=ARRAY(level, baris, kolom);
            printf("%d", map[baris][kolom]);

        }

    }
}

void start(int map[16][33]){                           // untuk memulai permainan
    //level = 1;							// level 1

   /* while(level<=2){
        switch (level){
            case 1:											// menyalin map level 1
                for(i=0;i<16;i++)
                {
                    for(j=0;j<33;j++)
                    {
                        map[i][j]=map_01[i][j];
                    }
                }
                break;
            case 2:											// menyalin map level 2
                for(i=0;i<16;i++)
                {
                    for(j=0;j<33;j++)
                    {
                        map[i][j]=map_02[i][j];
                    }
                }
                 break;*/

        int finish=0;
        int level=4;
       					    // gambar map
        i=13; j=2;
            cek(map, level);

            matriks(map);// posisi awal player
        while(finish!=1){


            draw_sprite(map);
            key = toupper(getch());						// toupper (huruf kapital), tolower (huruf kecil)
            obj(map, i, j);
            cursor(map, &i , &j, &pisang, key);			// gerak karakter
                       lubang(i, j, map, key);        // skill karakter
            skor(pisang);
            spawn_portal(map, pisang,level);
            if (map[i][j]==6){							// masuk portal
                finish=1;
               level=level+1;
            }
        }
}

void spawn_portal(int map[16][33], int banana,int level){                      // memunculkan portal
   switch(level){
        case 1:
            if(banana == MAKS_PISANG_01)						// 9 pisang
            {
                map[0][1]=6;
                    readimagefile("model/environmental/portal.bmp",0+40*1,0+40*0,40+40*1,40+40*0);
            }
            break;
        case 2:
            if(banana == MAKS_PISANG_02)						// 9 + 12 = 21 pisang
            {
                map[1][12]=6;
                    readimagefile("model/environmental/portal.bmp",0+40*12,0+40*1,40+40*12,40+40*1);
            }
            break;
    }
}

