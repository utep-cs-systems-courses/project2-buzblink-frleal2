#ifndef switches_included
#define switches_included

#define SW1 BIT0
#define SW2 BIT1
#define SW3 BIT2
#define SW4 BIT3
       /* switch1 is p1.3 */
#define SWITCHES SW1 | SW2 | SW3 | SW4    /* only 1 switch on this board */

void switch_init();
char switch_interrupt_handler();

extern char sw1_state_down, sw2_state_down, sw3_state_down, sw4_state_down; /* effectively boolean */

#endif // included
