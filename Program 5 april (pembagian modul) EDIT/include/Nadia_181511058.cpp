#include "Nadia_181511058.h"


int p,l;
int map[16][33];

void changeto0(int p,int l,int map[16][33])                         // melubangi tanah
{
	map[p][l] = 0;
	readimagefile("model/environmental/blank.bmp", 0+(ScreenWidth()/32)*l,0+(ScreenHeight()/18)*p,(ScreenWidth()/32)+(ScreenHeight()/18)*l,(ScreenWidth()/32)+(ScreenHeight()/18)*p);
}

void changeto1(int p, int l,int map[16][33])
{
    map[p][l] = 1;
	readimagefile("model/environmental/tanah.bmp", 0+(ScreenWidth()/32)*l,0+(ScreenHeight()/18)*p,(ScreenWidth()/32)+(ScreenHeight()/18)*l,(ScreenWidth()/32)+(ScreenHeight()/18)*p);
}

void lubang(int i, int j, int map[16][33], char key){
    switch(key){
        case 'A':{
            if (map[i+1][j-1]==1)
                {
                    p=i+1;
                    l=j-1;
                    _beginthread(lubangkiri,0,NULL);
                }
            break;
        }
         case 'S':
            {
            if (map[i+1][j+1]==1)
                {
                    p=i+1;
                    l=j+1;
                    _beginthread(lubangkanan,0,NULL);
                }
            break;
            }
    }
}

void lubangkiri(void*arg)
{
    changeto0(p,l,map);
    changeto0(p,l,map);
    delay(3000);
    changeto1(p,l,map);

    _endthread;
}

void lubangkanan(void*arg)
{
    changeto0(p,l,map);
    changeto0(p,l,map);
    delay(3000);
    changeto1(p,l,map);

    _endthread;
}

