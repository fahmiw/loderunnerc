#ifndef FAHMI_181511012_H_INCLUDED
#define FAHMI_181511012_H_INCLUDED

#include "header.h"
#include "Agung_181511036.h"
#include "Abdul_181511001.h"
#include "Nadia_181511058.h"


void matriks(address level, int i, int j);
/* Tujuan       : Modul digunakan untuk menggambar map dengan gambar */

void cursor(address level, int *i, int *j, char key);
/* Tujuan       : Modul digunakan untuk menggerakan karakter dalam game */

void jatuh(address level, int *i, int *j);
/* Tujuan       : Modul digunakan untuk mengetahui kondisi jika jatuh */

bool cek_bawah(address level, int *i, int *j);
/* Mengecek dibawah kosong */

bool cek_pisang(address level, int *i, int *j);
/* Mengecek bawah mengambil pisang */

void draw_sprite(address level, int i, int j);
/* Tujuan       : Modul digunakan untuk menggambar karakter & animasi karakter bergerak */

void obj(address level, int i, int j);
/* Tujuan       : Modul digunakan untuk menyalin map saat sprite bergerak */

void kondisi(address level, int *i, int *j);
/* Tujuan       : Modul digunakan ketika ada kondisi-kondisi tertentu dalam game*/

void hole_rule(address level, int *i , int *j, char key, Queue *Q, lubang A);

// Pergerakan player
void button_up(address level, int *i);
void button_down(address level, int *i, int *j);
void button_right(address level, int *i);
void button_left(address level, int *i, int *j);

//int FAHMI (void **, int, size_t);

#endif // FAHMI_181511012_H_INCLUDED
