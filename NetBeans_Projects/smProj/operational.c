/* 
 * File:	 operational.c
 * Author: @DaniloGraca
 * Created on 15 de Abril de 2016, 18:59
 */

#include"util.h"

static UINT_16 us_Mode; /* Store Mode */
static UINT_16 b_Panel; /* Store Panel state */
static SINT_16 ss_Position; /* Store panel position */

/* Panel close waiting */
static void panelClose(void);

/* Panel open waiting */
static void panelOpen(void);

/* Change panel to open */
static void extend(UINT_16 b_Fail);

/* Change panel to close */
static void retract(UINT_16 b_Fail);

/* 
 * Initialize variables
 * return: void
 */
void operational_init(void) {

    /* Panel start Close */
    b_Panel = 0U;

    /* Mode start on Waiting panel */
    us_Mode = 1U;

    /* Initial panel position ZERO / Close */
    ss_Position = 0;
}

/* 
 * Define main procedute
 * return: void
 */
void operational(UINT_16 FAIL) {

    /* If active mode is 1 */
    if (us_Mode == 1U) 
    {
        /* Call procedure panelClose */
        panelClose();
    }        /* If active mode is 2 */
    else if (us_Mode == 2U) 
    {
        /* Call procedure panelClose */
        extend(FAIL);
    }        /* If active mode is 3 */
    else if (us_Mode == 3U) 
    {
        /* Call procedure panelClose */
        panelOpen();
    }        /* If active mode is 4 */
    else if (us_Mode == 4U) 
    {
        /* Call procedure panelClose */
        retract(FAIL);
    }
}

/* 
 * Mode to open the panel
 * return: void
 */
static void extend(UINT_16 b_Fail) 
{

    /* If fail is active */
    if (b_Fail == 1U) 
    {
        /* Mode EXTEND on REDUCED STATE */
        ss_Position += 1;
    } 
    else 
    {
        /* Mode EXTEND on OPERATIONAL STATE */
        ss_Position += 2;
    }

    /* If panel position is less than 20 */
    if (ss_Position > 20) 
    {
        /* Change to mode PANEL OPEN */
        us_Mode = 3U;
    }
}

/* 
 * Mode to close the panel
 * return: void
 */
static void retract(UINT_16 b_Fail) {

    if (b_Fail == 1U) 
    {
        /* Mode RETRACT on REDUCED state */
        ss_Position -= 1;
    }
    else 
    {
        /*  Mode RETRACT on OPERATIONAL state */
        ss_Position -= 2;
    }

    if (ss_Position < 0) 
    {
        /* Change to mode PANEL CLOSED */
        us_Mode = 1U;
    }
}

/*
 * Waiting with PANEL CLOSED
 * return: void
 */
static void panelClose(void) {

    /* If set panel to OPEN  */
    if (b_Panel == 1U) 
    {
        /* Change to mode EXTEND */
        us_Mode = 2U;
    }
}

/* 
 * Mode WAITING with PANEL OPENED 
 * return: void
 */
static void panelOpen(void) {

    /* Mode PANEL OPEN */
    if (b_Panel == 0U) 
    {
        /* Change to mode RETRACT */
        us_Mode = 4U;
    }
}

/* 
 * Shutdown system safely
 * return: void
 */
void shutdown(UINT_16 FAIL) {

    while (ss_Position > 0) 
    {
        if (FAIL == 1U) 
        {
            /* Close panel on REDUCED STATE */
            ss_Position -= 1;
        }
        else 
        {
            /* Close panel on OPERATIONAL STATE */
            ss_Position -= 2;
        }
    }

    /* Set panel to CLOSED */
    b_Panel = 0U;

    /* Set Mode to WAITING with PANEL CLOSED */
    us_Mode = 1U;
}
