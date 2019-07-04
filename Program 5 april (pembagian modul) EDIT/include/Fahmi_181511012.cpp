#include "Fahmi_181511012.h"

int kanan, kiri,panjat,fall,bom1,bom2;


void matriks(address level, int i, int j){  // menggambar map
            for(i=0;i<16;i++)
                {
                for (j=0;j<32;j++)
                {
                    if (level->map[i][j]==0)
                    {
                        readimagefile("model/environmental/blank.bmp", 0+(Screen('x')/32)*j,0+(Screen('y' )/18)*i,(Screen('x')/32)+(Screen('x')/32)*j,(Screen('y' )/18)+(Screen('y' )/18)*i);
                    }
                    if (level->map[i][j]==3)
                    {
                        readimagefile("model/environmental/tangga.bmp",0+(Screen('x')/32)*j,0+(Screen('y' )/18)*i,(Screen('x')/32)+(Screen('x')/32)*j,(Screen('y' )/18)+(Screen('y' )/18)*i);
                    }
                    if (level->map[i][j]==1)
                    {
                        readimagefile("model/environmental/tanah.bmp",0+(Screen('x')/32)*j,0+(Screen('y' )/18)*i,(Screen('x')/32)+(Screen('x')/32)*j,(Screen('y' )/18)+(Screen('y' )/18)*i);
                    }
                    if (level->map[i][j]==2)
                    {
                        readimagefile("model/environmental/tali.bmp",0+(Screen('x')/32)*j,0+(Screen('y' )/18)*i,(Screen('x')/32)+(Screen('x')/32)*j,(Screen('y' )/18)+(Screen('y' )/18)*i);
                    }
                    if (level->map[i][j]==4)
                    {
                        readimagefile("model/character/monyet_kanan.jpg",0+(Screen('x')/32)*j,0+(Screen('y' )/18)*i,(Screen('x')/32)+(Screen('x')/32)*j,(Screen('y' )/18)+(Screen('y' )/18)*i);
                    }
                    if (level->map[i][j]==5)
                    {
                        readimagefile("model/environmental/pisang.bmp",0+(Screen('x')/32)*j,0+(Screen('y' )/18)*i,(Screen('x')/32)+(Screen('x')/32)*j,(Screen('y' )/18)+(Screen('y' )/18)*i);
                    }
                    if (level->map[i][j]==7)
                    {
                        readimagefile("model/environmental/bata.bmp",0+(Screen('x')/32)*j,0+(Screen('y' )/18)*i,(Screen('x')/32)+(Screen('x')/32)*j,(Screen('y' )/18)+(Screen('y' )/18)*i);
                    }
                }
            }

}
void obj(address level,int i, int j){                                                 // menyalin map saat sprite bergerak
            if (level->map[i][j]==0)
                    {
                        readimagefile("model/environmental/blank.bmp",0+(Screen('x')/32)*j,0+(Screen('y' )/18)*i,(Screen('x')/32)+(Screen('x')/32)*j,(Screen('y' )/18)+(Screen('y' )/18)*i);
                    }
            if (level->map[i][j]==3)
                    {
                        readimagefile("model/environmental/tangga.bmp",0+(Screen('x')/32)*j,0+(Screen('y' )/18)*i,(Screen('x')/32)+(Screen('x')/32)*j,(Screen('y' )/18)+(Screen('y' )/18)*i);
                    }
            if (level->map[i][j]==1)
                    {

                        readimagefile("model/environmental/tanah.bmp",0+(Screen('x')/32)*j,0+(Screen('y' )/18)*i,(Screen('x')/32)+(Screen('x')/32)*j,(Screen('y' )/18)+(Screen('y' )/18)*i);
                    }
            if (level->map[i][j]==2)
                    {
                        readimagefile("model/environmental/tali.bmp",0+(Screen('x')/32)*j,0+(Screen('y' )/18)*i,(Screen('x')/32)+(Screen('x')/32)*j,(Screen('y' )/18)+(Screen('y' )/18)*i);
                    }
            if (level->map[i][j]== 5)
                    {
                        readimagefile("model/environmental/pisang.bmp",0+(Screen('x')/32)*j,0+(Screen('y' )/18)*i,(Screen('x')/32)+(Screen('x')/32)*j,(Screen('y' )/18)+(Screen('y' )/18)*i);
                    }
            if (level->map[i][j]== 6)
                    readimagefile("model/environmental/portal.bmp",0+(Screen('x')/32)*j,0+(Screen('y' )/18)*i,(Screen('x')/32)+(Screen('x')/32)*j,(Screen('y' )/18)+(Screen('y' )/18)*i);

}

void draw_sprite(address level, int i, int j){                                     // menggambar sprite
    level->map[i][j]=4;
    if(kanan==1){
                if (level->map[i][j+1]==3 || level->map[i-1][j]==3)
                {
                    if (j%2==0)
                    {
                    readimagefile("model/character/monyet_panjat_1.gif", 0+(Screen('x')/32)*j,0+(Screen('y' )/18)*i,(Screen('x')/32)+(Screen('x')/32)*j,(Screen('y' )/18)+(Screen('y' )/18)*i);
                    }else
                    {
                    readimagefile("model/character/monyet_panjat_2.gif", 0+(Screen('x')/32)*j,0+(Screen('y' )/18)*i,(Screen('x')/32)+(Screen('x')/32)*j,(Screen('y' )/18)+(Screen('y' )/18)*i);
                    }
                if (level->map [i][j+1]==3)
                    {
                        readimagefile("model/character/monyet_kanan.jpg", 0+(Screen('x')/32)*j,0+(Screen('y' )/18)*i,(Screen('x')/32)+(Screen('x')/32)*j,(Screen('y' )/18)+(Screen('y' )/18)*i);

                    }
                }
                else if(j%2==0)
                {
                readimagefile("model/character/monyet_kanan_01.jpg", 0+(Screen('x')/32)*j,0+(Screen('y' )/18)*i,(Screen('x')/32)+(Screen('y' )/18)*j,(Screen('x')/32)+(Screen('y' )/18)*i);

                }else
                {
                readimagefile("model/character/monyet_kanan.jpg", 0+(Screen('x')/32)*j,0+(Screen('y' )/18)*i,(Screen('x')/32)+(Screen('y' )/18)*j,(Screen('x')/32)+(Screen('y' )/18)*i);

                }
    }
    if(kiri==1){
        if (level->map[i][j-1]==3 || level->map[i-1][j]==3)
                {
                    if (j%2==0)
                    {
                    readimagefile("model/character/monyet_panjat_1.gif", 0+(Screen('x')/32)*j,0+(Screen('y' )/18)*i,(Screen('x')/32)+(Screen('x')/32)*j,(Screen('y' )/18)+(Screen('y' )/18)*i);
                    }else
                    {
                    readimagefile("model/character/monyet_panjat_2.gif", 0+(Screen('x')/32)*j,0+(Screen('y' )/18)*i,(Screen('x')/32)+(Screen('x')/32)*j,(Screen('y' )/18)+(Screen('y' )/18)*i);
                    }
                if (level->map [i][j-1]==3)
                    {
                        readimagefile("model/character/monyet_kiri.jpg", 0+(Screen('x')/32)*j,0+(Screen('y' )/18)*i,(Screen('x')/32)+(Screen('x')/32)*j,(Screen('y' )/18)+(Screen('y' )/18)*i);

                    }
                }
                else if(j%2==0)
                {
                readimagefile("model/character/monyet_kiri_01.jpg", 0+(Screen('x')/32)*j,0+(Screen('y' )/18)*i,(Screen('x')/32)+(Screen('y' )/18)*j,(Screen('x')/32)+(Screen('y' )/18)*i);

                }else
                {
                readimagefile("model/character/monyet_kiri_02.jpg", 0+(Screen('x')/32)*j,0+(Screen('y' )/18)*i,(Screen('x')/32)+(Screen('y' )/18)*j,(Screen('x')/32)+(Screen('y' )/18)*i);
                }
    }
    if(panjat==1){
        if (level->map[i-1][j]==1 && level->map[i+1][j]==3){
             readimagefile("model/character/monyet_kanan.jpg", 0+(Screen('x')/32)*j,0+(Screen('y' )/18)*i,(Screen('x')/32)+(Screen('x')/32)*j,(Screen('y' )/18)+(Screen('y' )/18)*i);
        }
        else if (i%2==0)
        {
            readimagefile("model/character/monyet_panjat_1.gif", 0+(Screen('x')/32)*j,0+(Screen('y' )/18)*i,(Screen('x')/32)+(Screen('x')/32)*j,(Screen('y' )/18)+(Screen('y' )/18)*i);
        }else
        {
            readimagefile("model/character/monyet_panjat_2.gif", 0+(Screen('x')/32)*j,0+(Screen('y' )/18)*i,(Screen('x')/32)+(Screen('x')/32)*j,(Screen('y' )/18)+(Screen('y' )/18)*i);
        }

    }
    if (fall==1)
            {

                readimagefile("model/character/monyet_jatuh_kanan.jpg", 0+(Screen('x')/32)*j,0+(Screen('y' )/18)*i,(Screen('x')/32)+(Screen('x')/32)*j,(Screen('y' )/18)+(Screen('y' )/18)*i);
                delay(200);
            }
    if (bom1==1)
            {
                readimagefile("model/character/monyet_bom_kiri.jpg", 0+(Screen('x')/32)*j,0+(Screen('y' )/18)*i,(Screen('x')/32)+(Screen('x')/32)*j,(Screen('y' )/18)+(Screen('y' )/18)*i);
            }
    if (bom2==1)
            {
                readimagefile("model/character/monyet_bom_kanan.jpg", 0+(Screen('x')/32)*j,0+(Screen('y' )/18)*i,(Screen('x')/32)+(Screen('x')/32)*j,(Screen('y' )/18)+(Screen('y' )/18)*i);
            }

        //Kondisi disaat perubahan nilai dalam matriks
        if (level->map[i][j]==4){
        // jika posisi = player
        if(level->map[i-1][j]==3 || level->map[i+1][j]==3){
            // jika atas = tangga atau bawah = tangga
            if(level->map[i+1][j]==3 && (level->map[i+1][j+1]==1 || level->map[i+1][j-1]==1)){
                // jika bawah = tangga dan (kanan bawah = tanah atau kiri bawah = tanah
                level->map[i][j]=0;
                // posisi diisi kosong
            }else
            {
                level->map[i][j]=3;
                // lain, posisi diisi tangga
            }
        }else{
            if(level->map[i][j+1]==2 || level->map[i][j-1]==2){
                // lain, jika kanan = tali atau kiri = tali
                level->map[i][j]=2;
                // posisi diisi tali
            }else{
                level->map[i][j]=0;
                // lain, posisi diisi = kosong
            }
        }
    }
    if (KEY_RIGHT==5)
            {
                readimagefile("model/character/monyet_kanan.jpg", 0+(Screen('x')/32)*j,0+(Screen('y' )/18)*i,(Screen('x')/32)+(Screen('x')/32)*j,(Screen('y' )/18)+(Screen('y' )/18)*i);
            }
}



void jatuh(address level, int *i, int *j){              // player terjatuh
    while(cek_bawah(level, &(*i), &(*j)) || cek_pisang(level, &(*i), &(*j))){              // ketika bawah = kosong
        obj(level,(*i) ,(*j));                          // timpa gambar map
        fall=1;                                         // jatuh = true
        (*i)=(*i)+1;                                    // baris = baris + 1
        draw_sprite(level, (*i), (*j));                 // gambar sprite jatuh
        kondisi(level, &(*i), &(*j));
    }
}

bool cek_bawah(address level, int *i, int *j){
    if (level->map[(*i)+1][(*j)]==0)
        {
        return true;
        }
        else
        {
        return false;
        }
}

void button_up(address level, int *i, int *j){

            if (level->map[(*i)-1][(*j)]==3 || level->map[(*i)][(*j)]==3){
                // jika atas = tangga atau posisi = tangga
                (*i)=(*i)-1;
                panjat=1;
                kanan=0;
                kiri=0;
                fall=0;
                bom1=0;
                bom2=0;
                printf("%d\n", *i);
            }else
            {
                i=i;
            }
}

void button_down(address level, int *i, int *j){
            if (level->map [(*i)+1][(*j)]==3 || level->map[(*i)+1][(*j)]==0 || level->map[(*i)+1][(*j)]==2){
                // jika bawah = tangga atau bawah = kosong atau bawah = tali
                (*i)=(*i)+1;
                panjat=1;
                kanan=0;
                kiri=0;
                fall=0;
                bom1=0;
                bom2=0;
                printf("%d\n", *i);
            }else
            {
                i=i;
            }
}

void button_right(address level, int *i, int *j){
            if(level->map[(*i)][(*j)+1]!=1 && (level->map[(*i)+1][(*j)]==1 || level->map[(*i)+1][(*j)]==7|| level->map[(*i)+1][(*j)]==3 || level->map[(*i)][(*j)+1]==2 || level->map[(*i)][(*j)-1]==2) && (*j)<31){
            // jika kanan bukan tanah dan (bawah = tanah atau bawah = tangga atau kanan = tanah atau kiri = tanah) dan kolom kurang dari 19)
            panjat=1;
            kanan=0;
            kiri=0;
            fall=0;
            bom1=0;
            bom2=0;
            (*j)=(*j)+1;
            }
                if(level->map[(*i)][(*j)]!=2){
                // jika posisi bukan tali
                    panjat=0;
                    kanan=1;
                }

            else{
                j=j;
            }
}

void button_left(address level, int *i, int *j){
            if(level->map[(*i)][(*j)-1]!=1 && (level->map[(*i)+1][(*j)]==1 || level->map[(*i)+1][(*j)]==7 || level->map[(*i)+1][(*j)]==3 || level->map[(*i)][(*j)-1]==2 || level->map[(*i)][(*j)+1]==2) && (*j)>0)
            // jika kiri bukan tanah dan (bawah tanah = atau bawah = tangga atau kiri = tali) dan kolom lebih dari 0
            {
            panjat=1;
            kanan=0;
            kiri=0;
            fall=0;
            bom1=0;
            bom2=0;
            (*j)=(*j)-1;
                if(level->map[(*i)][(*j)]!=2){
                // posisi bukan tali
                panjat=0;
                kiri=1;
                }
            }
            else{
                j=j;
            }
}

void cursor(address level, int *i , int *j, char key){ // key untuk menggerakkan player

    switch(key)
    {
        case KEY_UP : {
                button_up(level, i, j);
                break;
        }

        case KEY_DOWN : {

            button_down(level, i, j);

            break;
        }
        case KEY_RIGHT : {

            button_right(level, i, j);

            break;
        }
        case KEY_LEFT : {

            button_left(level, i, j);

            break;
        }
    }
}

void hole_rule(address level, int *i , int *j, char key, Queue *Q, lubang A){
        int brsA, brsS, klmA, klmS;

        switch(key){
        case 'A':
            {
            if (level->map[(*i)+1][(*j)-1]==1)
                {
                    bom1=1;
                    brsS=(*i+1);
                    klmS=(*j-1);

					level->map[brsS][klmS] = 0;
                    readimagefile("model/environmental/blank.bmp",0+(Screen('x')/32)*klmS,0+(Screen('y' )/18)*brsS,(Screen('x')/32)+(Screen('x')/32)*klmS,(Screen('y' )/18)+(Screen('y' )/18)*brsS);
                    assign_arr(&A,*i+1,*j-1,clock());
                    delay(2000);
                    //delay(200);
                    level->map[brsS][klmS] = 1;
                    readimagefile("model/environmental/tanah.bmp",0+(Screen('x')/32)*klmS,0+(Screen('y' )/18)*brsS,(Screen('x')/32)+(Screen('x')/32)*klmS,(Screen('y' )/18)+(Screen('y' )/18)*brsS);

                    enqueue(Q,A);
                }
            break;
            }

        case 'S':
            {
            if (level->map[(*i)+1][(*j)+1]==1)
                {
                    bom2=1;
                    brsS=*i+1;
                    klmS=*j+1;

					level->map[brsS][klmS] = 0;
                    readimagefile("model/environmental/blank.bmp",0+(Screen('x')/32)*klmS,0+(Screen('y' )/18)*brsS,(Screen('x')/32)+(Screen('x')/32)*klmS,(Screen('y' )/18)+(Screen('y' )/18)*brsS);
                    delay(2000);
                    level->map[brsS][klmS] = 1;
                    readimagefile("model/environmental/tanah.bmp",0+(Screen('x')/32)*klmS,0+(Screen('y' )/18)*brsS,(Screen('x')/32)+(Screen('x')/32)*klmS,(Screen('y' )/18)+(Screen('y' )/18)*brsS);
        			assign_arr(&A,*i+1,*j+1,clock());
                    enqueue(Q,A);
                }
            break;
            }
        }
}

bool cek_pisang(address level, int *i, int *j)
    {
    if (level->map[*i][*j]==5 || level->map[*i+1][*j]==5){
            return true;
            }
        else{
            return false;
            }
    }

void kondisi(address level, int *i, int *j){


    // Kondisi apa saja ketika karakter akan jatuh
    if ((level->map[(*i)+1][(*j)]==0 || level->map[(*i)+1][(*j)]==5) && level->map[(*i)][(*j)]!=2)
    {
        jatuh(level, &(*i) , &(*j));
    }

    // Jika ketika jatuh dibawah ada tali

    if (level->map[(*i)+1][(*j)]==2)
    {
        (*i)=(*i)+1;

        panjat=1;
        kanan=0;
        kiri=0;
        fall=0;
        bom1=0;
        bom2=0;
    }

    // jika mengambil pisang ambil pisang
}
