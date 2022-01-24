#ifndef __DELAY_H__
#define __DELAY_H__

// Dumb delay code (doesn't use timers)
/**
Delay function.
*/
void delay(unsigned int c, unsigned int d);
void delay_ms( unsigned int ms );
void delay_s(unsigned int seconds);

#endif // __DELAY_H__
