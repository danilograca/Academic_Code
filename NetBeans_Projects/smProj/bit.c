/* 
 * File:	 ibit.c
 * Author: @DaniloGraca
 * Created on 15 de Abril de 2016, 18:59
 */
#include"util.h"

static UINT_16 us_timeCount = 0U; /* Time count */
static UINT_16 us_state; /* Storage State to return */

/*
 * Perform the Built-in Test
 * return: Next State
 */
UINT_16 bit(void) {

    /* If power less than 200w change to FAIL state */
    if (getPower() <= 200U) 
    {
        /* Change State to EMERGENCY */
        us_state = 9U;
    }        /* If power less than 500w change to	state */
    else if (getPower() <= 500U) 
    {
        /* Change State to FAIL */
        us_state = 3U;
    } 
    else 
    {
        /* Iterate time counter */
        us_timeCount++;

        /* Timer count to Check e change to Operational mode*/
        if (us_timeCount > 50U) 
        {
            /* Change State to READY */
            us_state = 4U;
            /* ReStart Counter */
            us_timeCount = 0U;
        }
    }
    /* Return state updated */
    return us_state;
}
