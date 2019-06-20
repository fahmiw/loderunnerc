#include "Fahmi_181511012.h"

int i, j, kanan, kiri, panjat, fall;


void matriks(int map[16][33]){  // print map                      // menggambar map pada layar
            int baris, kolom;
            baris=0;
            while (baris <16){
                kolom=0;
                while (kolom <33){
                    obj(map, baris, kolom);
                    kolom++;
                }
                baris++;
            }
            /*for (baris=0; baris<16; baris++);
            {
                for(kolom=0; kolom<33; kolom++);
                {
                    printf("test");
                    //obj(map, baris, kolom);
                }

            }*/
}

void obj(int map [16][33], int baris, int kolom){                                        // menyalin map saat sprite bergerak
            if (map[baris][kolom]==0)
                    {
                        readimagefile("model/environmental/blank.bmp", 0+(ScreenWidth()/32)*kolom,0+(ScreenHeight()/18)*baris,(ScreenWidth()/32)+(ScreenHeight()/18)*kolom,(ScreenWidth()/32)+(ScreenHeight()/18)*baris);
                    }
            if (map[baris][kolom]==3)
                    {
                        readimagefile("model/environmental/tangga.bmp", 0+(ScreenWidth()/32)*kolom,0+(ScreenHeight()/18)*baris,(ScreenWidth()/32)+(ScreenHeight()/18)*kolom,(ScreenWidth()/32)+(ScreenHeight()/18)*baris);
                    }
            if (map[baris][kolom]==1)
                    {

                        readimagefile("model/environmental/tanah.bmp", 0+(ScreenWidth()/32)*kolom,0+(ScreenHeight()/18)*baris,(ScreenWidth()/32)+(ScreenHeight()/18)*kolom,(ScreenWidth()/32)+(ScreenHeight()/18)*baris);
                    }
            if (map[baris][kolom]==2)
                    {
                        readimagefile("model/environmental/tali.bmp", 0+(ScreenWidth()/32)*kolom,0+(ScreenHeight()/18)*baris,(ScreenWidth()/32)+(ScreenHeight()/18)*kolom,(ScreenWidth()/32)+(ScreenHeight()/18)*baris);
                    }
            if (map[baris][kolom]== 6)
                    readimagefile("model/environmental/portal.bmp", 0+(ScreenWidth()/32)*kolom,0+(ScreenHeight()/18)*baris,(ScreenWidth()/32)+(ScreenHeight()/18)*kolom,(ScreenWidth()/32)+(ScreenHeight()/18)*baris);

           if (map[baris][kolom]== 5)
                    readimagefile("model/environmental/pisang.bmp", 0+(ScreenWidth()/32)*kolom,0+(ScreenHeight()/18)*baris,(ScreenWidth()/32)+(ScreenHeight()/18)*kolom,(ScreenWidth()/32)+(ScreenHeight()/18)*baris);

}

void draw_sprite(int map[16][33]){                                // menggambar sprite character
    map[i][j]=4;                                                                // respawn karakter
        if(kanan==1){
                if (map[i][j+1]==3 || map[i-1][j]==3)
                {
                    if (j%2==0)
                    {
                    readimagefile("model/character/monyet_panjat_1.gif", 0+(ScreenWidth()/32)*j,0+(ScreenHeight()/18)*i,(ScreenWidth()/32)+(ScreenWidth()/32)*j,(ScreenHeight()/18)+(ScreenHeight()/18)*i);
                    }else
                    {
                    readimagefile("model/character/monyet_panjat_2.gif", 0+(ScreenWidth()/32)*j,0+(ScreenHeight()/18)*i,(ScreenWidth()/32)+(ScreenWidth()/32)*j,(ScreenHeight()/18)+(ScreenHeight()/18)*i);
                    }
                if (map [i][j+1]==3)
                    {
                        readimagefile("model/character/monyet_kanan.jpg", 0+(ScreenWidth()/32)*j,0+(ScreenHeight()/18)*i,(ScreenWidth()/32)+(ScreenWidth()/32)*j,(ScreenHeight()/18)+(ScreenHeight()/18)*i);

                    }
                }
                else if(j%2==0)
                {
                readimagefile("model/character/monyet_kanan_01.jpg", 0+(ScreenWidth()/32)*j,0+(ScreenHeight()/18)*i,(ScreenWidth()/32)+(ScreenHeight()/18)*j,(ScreenWidth()/32)+(ScreenHeight()/18)*i);

                }else
                {
                readimagefile("model/character/monyet_kanan_03.jpg", 0+(ScreenWidth()/32)*j,0+(ScreenHeight()/18)*i,(ScreenWidth()/32)+(ScreenHeight()/18)*j,(ScreenWidth()/32)+(ScreenHeight()/18)*i);

                }
            }
    if(kiri==1){
        if (map[i][j-1]==3 || map[i-1][j]==3)
                {
                    readimagefile("model/character/monyet_panjat.gif", 0+(ScreenWidth()/32)*j,0+(ScreenHeight()/18)*i,(ScreenWidth()/32)+(ScreenHeight()/18)*j,(ScreenWidth()/32)+(ScreenHeight()/18)*i);
                    if (map [i][j-1]==3)
                    {
                        readimagefile("model/character/monyet_kiri.jpg", 0+(ScreenWidth()/32)*j,0+(ScreenHeight()/18)*i,(ScreenWidth()/32)+(ScreenHeight()/18)*j,(ScreenWidth()/32)+(ScreenHeight()/18)*i);
                        delay(50);
                    }
                }
                else
                {
                readimagefile("model/character/monyet_kiri_01.jpg", 0+(ScreenWidth()/32)*j,0+(ScreenHeight()/18)*i,(ScreenWidth()/32)+(ScreenHeight()/18)*j,(ScreenWidth()/32)+(ScreenHeight()/18)*i);
                delay(50);
                readimagefile("model/environmental/blank.bmp", 0+(ScreenWidth()/32)*j,0+(ScreenHeight()/18)*i,(ScreenWidth()/32)+(ScreenHeight()/18)*j,(ScreenWidth()/32)+(ScreenHeight()/18)*i);

                readimagefile("model/character/monyet_kiri_02.jpg", 0+(ScreenWidth()/32)*j,0+(ScreenHeight()/18)*i,(ScreenWidth()/32)+(ScreenHeight()/18)*j,(ScreenWidth()/32)+(ScreenHeight()/18)*i);
                //delay(50);
                readimagefile("model/environmental/blank.bmp", 0+(ScreenWidth()/32)*j,0+(ScreenHeight()/18)*i,(ScreenWidth()/32)+(ScreenHeight()/18)*j,(ScreenWidth()/32)+(ScreenHeight()/18)*i);

               // readimagefile("model/character/monyet_kiri_03.jpg", 0+(ScreenWidth()/32)*j,0+(ScreenHeight()/18)*i,(ScreenWidth()/32)+(ScreenHeight()/18)*j,(ScreenWidth()/32)+(ScreenHeight()/18)*i);
               // delay(50);
               // readimagefile("model/environmental/blank.bmp",  0+(ScreenWidth()/32)*j,0+(ScreenHeight()/18)*i,(ScreenWidth()/32)+(ScreenHeight()/18)*j,(ScreenWidth()/32)+(ScreenHeight()/18)*i);

               // readimagefile("model/character/monyet_kiri_04.jpg", 0+(ScreenWidth()/32)*j,0+(ScreenHeight()/18)*i,(ScreenWidth()/32)+(ScreenHeight()/18)*j,(ScreenWidth()/32)+(ScreenHeight()/18)*i);
               // delay(50);
               // readimagefile("model/environmental/blank.bmp",  0+(ScreenWidth()/32)*j,0+(ScreenHeight()/18)*i,(ScreenWidth()/32)+(ScreenHeight()/18)*j,(ScreenWidth()/32)+(ScreenHeight()/18)*i);

                readimagefile("model/character/monyet_kiri.jpg",  0+(ScreenWidth()/32)*j,0+(ScreenHeight()/18)*i,(ScreenWidth()/32)+(ScreenHeight()/18)*j,(ScreenWidth()/32)+(ScreenHeight()/18)*i);
                }
    }
    if(panjat==1){
            if (map[i-1][j]==1 && map[i+1][j]==3){
                readimagefile("model/character/monyet_kanan.jpg", 0+(ScreenWidth()/32)*j,0+(ScreenHeight()/18)*i,(ScreenWidth()/32)+(ScreenHeight()/18)*j,(ScreenWidth()/32)+(ScreenHeight()/18)*i);
            }/*else if(map[i-0][j]==1 && map[i+1][j]==3 && map[i][j+1]==1 || map[i][j-1]==0)
            {
             readimagefile("model/character/monyet_kanan.jpg", 0+40*j,0+40*i,40+40*j,40+40*i);
            }*/
            else
            {
            readimagefile("model/character/monyet_panjat.gif", 0+(ScreenWidth()/32)*j,0+(ScreenHeight()/18)*i,(ScreenWidth()/32)+(ScreenHeight()/18)*j,(ScreenWidth()/32)+(ScreenHeight()/18)*i);
            }
        }
    if(fall==1){                                        // memberi jeda saat jatuh
        delay(200);
    }

    if (map[i][j]==4){                                                                              // jika posisi = player
        if(map[i-1][j]==3 || map[i+1][j]==3){                                                       // jika atas = tangga atau bawah = tangga
            if(map[i+1][j]==3 && (map[i+1][j+1]==1 || map[i+1][j-1]==1)){                           // jika bawah = tangga dan (kanan bawah = tanah atau kiri bawah = tanah
                map[i][j]=0;                                                                        // posisi diisi kosong
            }else //baris][kolom]
            {
                map[i][j]=3;                                                                        // lain, posisi diisi tangga
            }
        }else{
            if(map[i][j+1]==2 || map[i][j-1]==2){                                                   // lain, jika kanan = tali atau kiri = tali
                map[i][j]=2;                                                                        // posisi diisi tali
            }else{
                map[i][j]=0;                                                                        // lain, posisi diisi = kosong
            }
        }
    }
    if (KEY_RIGHT==5)
    {
        readimagefile("model/character/monyet_kanan.jpg",  0+(ScreenWidth()/32)*j,0+(ScreenHeight()/18)*i,(ScreenWidth()/32)+(ScreenHeight()/18)*j,(ScreenWidth()/32)+(ScreenHeight()/18)*i);
    }
}

void jatuh(int map[16][33], int *i, int *j){                // player terjatuh
    while(map[(*i)+1][(*j)]==0 || map[(*i)+1][*j]==5){       // ketika bawah = kosong atau pisang
        fall=1;                                             // jatuh = true
        (*i)=(*i)+1;                                        // baris = baris + 1
        draw_sprite(map);                       // gambar sprite jatuh
        obj(map, (*i), (*j));                              // timpa gambar map
    }
}

void cursor(int map[16][33], int *i , int *j, int *pisang, char key){      // key untuk menggerakkan player
    switch(key)
    {
        case KEY_UP : {
            if (map[(*i)-1][(*j)]==3 || map[(*i)][(*j)]==3){    // jika atas = tangga atau posisi = tangga
                (*i)=(*i)-1;
                panjat=1;
                kanan=0;
                kiri=0;
                fall=0;
            }else
            {
                i=i;
            }
            //k=1;
            break;
        }
        case KEY_DOWN : {
            if (map [(*i)+1][(*j)]==3 || map[(*i)+1][(*j)]==0 || map[(*i)+1][(*j)]==2){   // jika bawah = tangga atau bawah = kosong atau bawah = tali
                (*i)=(*i)+1;
                panjat=1;
                kanan=0;
                kiri=0;
                fall=0;
            }else
            {
                i=i;
            }
            //k=2;
            break;
        }
        case KEY_RIGHT : {
            if(map[(*i)][(*j)+1]!=1 && (map[(*i)+1][(*j)]==1 || map[(*i)+1][(*j)]==3 || map[(*i)][(*j)+1]==2 || map[(*i)][(*j)-1]==2) && (*j)<31 )           // jika kanan bukan tanah dan (bawah = tanah atau bawah = tangga atau kanan = tanah atau kiri = tanah) dan kolom kurang dari 19)
            {
            panjat=1;
            kanan=0;
            kiri=0;
            fall=0;
                (*j)=(*j)+1;
                if(map[(*i)][(*j)]!=2){                                                                                              // jika posisi bukan tali
                    panjat=0;
                    kanan=1;
                }
            }else
            {
                j=j;
            }
            break;
        }
        case KEY_LEFT : {
            if(map[(*i)][(*j)-1]!=1 && (map[(*i)+1][(*j)]==1 || map[(*i)+1][(*j)]==3 || map[(*i)][(*j)-1]==2 || map[(*i)][(*j)+1]==2) && (*j)>1)             // jika kiri bukan tanah dan (bawah tanah = atau bawah = tangga atau kiri = tali) dan kolom lebih dari 0
            {
            panjat=1;
            kanan=0;
            kiri=0;
            fall=0;
                (*j)=(*j)-1;
                if(map[(*i)][(*j)]!=2){                                                                                               // posisi bukan tali
                panjat=0;
                kiri=1;
                }
            //k=4;
            }else
            {
                j=j;
            }
            break;
        }
    }

    // KONDISI SPRITE

    if ((map [(*i)+1][(*j)]==0 || map [(*i)+1][(*j)]==5) && map[(*i)][(*j)]!=2)
    {
        jatuh(map, &(*i) , &(*j));
    }
    if (map [(*i)+1][(*j)]==2)
    {
        (*i)=(*i)+1;
        panjat=1;
        kanan=0;
        kiri=0;
        fall=0;
    }
    if(map[(*i)][(*j)] == 5)        // ambil pisang
    {
        (*pisang)=(*pisang)+1;
    }
}
