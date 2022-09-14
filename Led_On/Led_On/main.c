/*
 * Led_On.c
 *
 * Created: 28/08/2022 00:01:11
 * Author : moham
 */ 

#include "Types.h"
#include "BIT_MATH.h"
#define PORTD *(u8 *) 0x32
#define DDRD *(u8 *)0x30



int main(void)
{
    /* Replace with your application code */
	SET_BIT(DDRD,3);
	SET_BIT(PORTD,3);
    while (1) 
    {
		
    }
}

