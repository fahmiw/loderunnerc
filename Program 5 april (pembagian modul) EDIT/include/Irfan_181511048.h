#ifndef IRFAN_181511048_H_INCLUDED
#define IRFAN_181511048_H_INCLUDED
#define MAKS_PISANG_01 9                    // maksimal pisang yang dibutuhkan pada level 1
#define MAKS_PISANG_02 21					// maksimal pisang yang dibutuhkan pada level 2 (21 = 9 + 12)

#include <graphics.h>
#include <conio.h>
#include <stdio.h>

#include "Fahmi_181511012.h"
#include "Abdul_181511001.h"
#include "Nadia_181511058.h"

int ARRAY(int level, int baris, int kolom);
void cek(int map[16][33], int level);
void start(int map[16][33]);
void spawn_portal(int map[16][33], int banana,int pisang);
void rusak();
void goyang(void *arg);

#endif // IRFAN_181511048_H_INCLUDED
