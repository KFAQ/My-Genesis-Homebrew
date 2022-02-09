#include <genesis.h>

int main(u16 hard)
void myJoyHandler( u16 joy, u16 changed, u16 state)
{
    if (joy == JOY_1)
    {
        if (state & BUTTON_START)
        {
            //player 1 press start button
        }
        else if (changed & BUTTON_START)
        {
            //player 1 released start button
        }

        }
    }
}
{
    JOY_init();
    JOY_setEventHandler( &myJoyHandler );
    VDP_drawText("Hello Genny World!", 10, 13);
    waitMs(1000);
    VDP_resetScreen();
    waitMs(750);
    VDP_drawText("Hello Genesis World!!", 13, 10);
    while(TRUE)
    {
        // read input
        // move sprite
        // update score
        // draw current screen (logo, start screen, settings, game, gameover, credits...)

        // wait for screen refresh
        SYS_doVBlankProcess();

    }

    return 0;
}