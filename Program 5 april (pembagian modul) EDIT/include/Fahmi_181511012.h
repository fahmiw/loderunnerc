#ifndef FAHMI_181511012_H_INCLUDED
#define FAHMI_181511012_H_INCLUDED


#include "header.h"
#include "Agung_181511036.h"
#include "Nadia_181511058.h"


void matriks(int map[16][33]);                            // menggambar map
void cursor(int map[16][33], int *i, int *j, int *pisang, char key);
void jatuh(int map[16][33], int *i, int *j);
void draw_sprite(int map[16][33]);                        // menggambar sprite
void obj(int map[16][33], int baris, int kolom);                                // menyalin map saat sprite bergerak



#endif // FAHMI_181511012_H_INCLUDED
