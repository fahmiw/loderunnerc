#include "include/Abdul_181511001.h"
#include "include/Agung_181511036.h"
#include "include/Fahmi_181511012.h"
#include "include/Irfan_181511048.h"
#include "include/Nadia_181511058.h"

main()
{
    _beginthread(sound,0,NULL);
    Initialize();
    menu();
    readimagefile("model/gambar_otw.jpg",0,0,1366,768);
    getch();
    return 0;
}
