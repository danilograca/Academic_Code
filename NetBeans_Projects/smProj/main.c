/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: usuário
 *
 * Created on 20 de Abril de 2016, 16:43
 */

#include <stdio.h>
#include <stdlib.h>
#include "util.h"
#include "stateMachine.h"
/*
 * 
 */
int main(int argc, char** argv) {

    sm_init();
    sm_run();
            
    return (EXIT_SUCCESS);
}

