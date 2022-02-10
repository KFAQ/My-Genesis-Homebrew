#include <genesis.h>

int main(u16 hard)
{
    int i = 1;
    char vtext[20];
    int vx = 1;

    while(i <= 10){
        i = i + 1;
        SYS_doVBlankProcess();
        VDP_drawText("Hello Genny World!", vx, 10);
        waitMs(20);
        VDP_resetScreen();
        VDP_drawText("Hello Genesis World!!", 15, 5);
        waitMs(20);
        VDP_resetScreen();
        sprintf(vtext, "%i", i);
        VDP_drawText(vtext , 10 , 10);
        waitMs(20);
        VDP_resetScreen();
        vx = vx +1;
        // read input
        // move sprite
        // update score
        // draw current screen (logo, start screen, settings, game, gameover, credits...)

        // wait for screen refresh

    }

    return 0;
}