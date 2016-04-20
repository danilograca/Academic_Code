/* 
 * File:	 monitoring.c
 * Author: @DaniloGraca
 * Created on 17 de Abril de 2016, 02:40
 */

#include"util.h"

/* Storage Power from panel */
static UINT_16 us_Power = 100U;

/*
 * Manage power
 * return: power
 */
UINT_16 getPower(void) {

    /* Return power */
    return us_Power;
}

/*
 * Monitoring the power from panel
 * param: State from stateMachine
 * return: State value updated
 */
UINT_16 powerMonitoring(UINT_16 state) {

    /* Testing power */
    if (getPower() < 200U) 
    {
        /* Return to EMERGENCY state */
        state = 9U;
    }

    /* Return State updated or received */
    return state;
}
