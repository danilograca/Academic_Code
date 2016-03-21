/*
C++ TESTBED VERSION  : 9.5.1
FILE UNDER TEST  : "C:\_WorkSpace\sMachine\sMachine.cpp"
DATE OF ANALYSIS : Thu Feb 18 20:42:26 2016
*/
 
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/*
 * File: sMachine.cpp
 * Author: usuário
 *
 * Created on 18 de Fevereiro de 2016, 15:24
 */
#include <cstdlib>
#include <iostream>
#define QQQdialect GCC                                                                             
#undef QQQ146
#undef QQQ148
#undef QQQbndchk
#define QQQ294
#undef QQQEMBEDDEDICE
 /* Note: for BITMAP execution histories QQQthreaded is not defined */
#undef QQQthreaded 
#undef QQQdo178b
#undef QQQfixbra
#undef QQQswitch3
#undef QQQternary
#define QQQswitch
#undef QQQmacrof
#undef QQQMULTIPROCESSEXH
#undef QQFLUSH
#undef QQNEWBS
#define qqqMaxBranchDepth      2
#undef QQQstructbitmap
 static int zzfileid =     38;
#undef QQQALGONE
#undef QQQVCLFLG
#undef QQQFORKFL
#undef QQQIADDRF
#undef QQQRTI
#undef QQQPERFA
#undef QQQADRMOD
#undef QQQDCAPFL
#undef QQQTEMPLATEONLY
#undef QQQNOATEXIT
#undef QQQUPLOADATEND
#undef QQQNOSTDIO
#undef QQQASHLINGVITRA
#undef QQQBITMAPMCDC 
#undef QQQTIC2XSERIALIO
#undef QQQTIC2XFLASH
#undef QQQCOMPRESSED_EXH
#define QQQMAINFL
#undef QQQSINGLEFILE
#undef QQQFILEID
#undef QQQseparate
 static int sMachine_38zzopen                                                                                    = 0;
#ifndef QQQLDRA_PORT                                                                                                                                                                                                                                                
#define FILEPOINT FILE * f,                                                                                                                                                                                                                                         
#if !defined(QQQTEMPLATEONLY) && !defined(FILE) && !defined(QQQNOSTDIO)                                                                                                                                                                                             
#include <stdio.h>                                                                                                                                                                                                                                                  
    /* ----------------------------------------------------------------------* 100 *                                                                                                                                                                                
     * If stdio.h is not available then insert:                                                                                                                                                                                                                     
     *      typedef int * FILE;                                                                                                                                                                                                                                     
     * -----------------------------------------------------------------------------                                                                                                                                                                                
     */                                                                                                                                                                                                                                                             
#endif  /* !(QQQTEMPLATEONLY) && !(FILE) && !(QQQNOSTDIO) */                                                                                                                                                                                                        
#else  /* QQQLDRA_PORT */                                                                                                                                                                                                                                           
#define FILEPOINT                                                                                                                                                                                                                                                   
#include "ldra_port.h"        /* Generic header file for LDRA_PORT */                                                                                                                                                                                               
#ifdef inc_ldra_port_instr                                                                                                                                                                                                                                          
#include "ldra_port_instr.h"  /* Communication definitions and ldra_port common code */                                                                                                                                                                             
#endif  /* inc_ldra_port_instr */                                                                                                                                                                                                                                   
#endif /* QQQLDRA_PORT */                                                                                                                                                                                                                                           
#ifndef QQQnumfil                                                                                                                                                                                                                                                   
#define QQQnumfil 40  /* default setting */                                                                                                                                                                                                                         
#endif  /* QQQnumfil */                                                                                                                                                                                                                                             
#if defined(QQQstructbitmap) && defined(QQQSINGLEFILE)                                                                                                                                                                                                              
#if defined(QQQMAINFL)                                                                                                                                                                                                                                              
        /* Set qqqshell_upload to 1 if you want to call the qqqtotalupload separately. Although                                                                                                                                                                     
           through the target you would have to set this to 0 before calling the qqqupload.                                                                                                                                                                         
           Move this into ldra_port mechanism. */                                                                                                                                                                                                                   
       int qqqshell_upload = 0;                                                                                                                                                                                                                                     
       int QQQfcn_ptr_num = 0;                                                                                                                                                                                                                                      
       typedef void(*VoidFunction)();                                                                                                                                                                                                                               
       VoidFunction qqqaccumupload[QQQnumfil];                                                                                                                                                                                                                      
       void qqqtotalupload(void);                                                                                                                                                                                                                                   
       void qqpopulate_array_fcn_ptrQQ(int x, VoidFunction y)                                                                                                                                                                                                       
       {                                                                                                                                                                                                                                                            
         qqqaccumupload[x]=y;                                                                                                                                                                                                                                       
         QQQfcn_ptr_num++;                                                                                                                                                                                                                                          
       }                                                                                                                                                                                                                                                            
#else  /* defined(QQQMAINFL) */                                                                                                                                                                                                                                     
        extern int QQQfcn_ptr_num;                                                                                                                                                                                                                                  
        typedef void(*VoidFunction)();                                                                                                                                                                                                                              
        extern VoidFunction qqqaccumupload[QQQnumfil];                                                                                                                                                                                                              
        extern void qqpopulate_array_fcn_ptrQQ(int x, VoidFunction y);                                                                                                                                                                                              
        static int qqqstructzzopen = 0;                                                                                                                                                                                                                             
#endif  /* defined(QQQMAINFL) */                                                                                                                                                                                                                                    
#endif  /* defined(QQQstructbitmap) && defined(QQQSINGLEFILE) */                                                                                                                                                                                                    
#ifdef QQQ_KEEPCOMMENTS                                                                                                                                                                                                                                             
  /* -----------------------------------------------------------------------* 101 *                                                                                                                                                                                 
  *            Special settings for systems lacking standard functions.                                                                                                                                                                                             
  * To include code for fprintf define ldra_fprintf                                                                                                                                                                                                                 
  * To include code for sscanf  define ldra_sscanf                                                                                                                                                                                                                  
  * -----------------------------------------------------------------------------                                                                                                                                                                                   
  */                                                                                                                                                                                                                                                                
#endif  /* QQQ_KEEPCOMMENTS */                                                                                                                                                                                                                                      
#if !defined(QQQSUPPRESS_UNDEF)                                                                                                                                                                                                                                     
#undef ldra_fprintf                                                                                                                                                                                                                                                 
#undef ldra_sscanf                                                                                                                                                                                                                                                  
#endif  /* !defined(QQQSUPPRESS_UNDEF) */                                                                                                                                                                                                                           
  /*  #define ldra_fprintf */                                                                                                                                                                                                                                       
  /*  #define ldra_sscanf */                                                                                                                                                                                                                                        
#undef QQQHITMAP_STORAGE                                                                                                                                                                                                                                            
#undef qqnull_params                                                                                                                                                                                                                                                
#define qqnull_params void                                                                                                                                                                                                                                          
#define QQQ_PROTOTYPE_DEF                                                                                                                                                                                                                                           
  /* Conventional Instrumentation */                                                                                                                                                                                                                                
#undef QQ_ANSI_PROTOTYPE                                                                                                                                                                                                                                            
#define QQ_ANSI_PROTOTYPE 1                                                                                                                                                                                                                                         
    static int qqxxswitch = 0;                                                                                                                                                                                                                                      
    static int qqyyswitch = 0;                                                                                                                                                                                                                                      
  static void qqoutput(FILEPOINT char * s,int i);                                                                                                                                                                                                                   
  static void qqoutput0(FILEPOINT char * s);                                                                                                                                                                                                                        
    static int qqswitchxx(qqnull_params);                                                                                                                                                                                                                           
    static int qqswitchyy(qqnull_params);                                                                                                                                                                                                                           
    static int uuswitchqq(qqnull_params);                                                                                                                                                                                                                           
  static int sMachine_38zqqzqz(qqnull_params);                                                                                                                                                                                                                      
  static int sMachine_38zqqzqz1(qqnull_params);                                                                                                                                                                                                                     
  static int sMachine_38zzqqzz (int qqqi);                                                                                                                                                                                                                          
  static int sMachine_38zqzqzq (int qqqi);                                                                                                                                                                                                                          
  static int sMachine_38zqfqzz (int qqqi);                                                                                                                                                                                                                          
  static int sMachine_38zzzqtz (int qqqa, int qqqb);                                                                                                                                                                                                                
  static int sMachine_38zzzqfz (int qqqa, int qqqb);                                                                                                                                                                                                                
/* ------------------------------ END OF TESTBED PROTOTYPES -------------------------------- */                                                                                                                                                                     
using namespace std ;
namespace variables {
 
bool
  b_On ;
 
bool
  b_Fail ;
 
bool
  b_Panel ;
 
bool
  b_Shutdown ;
 
bool
  b_Maintenance ;
 
signed short
  sshort_Position ;
 
unsigned short
  ushort_Mode ;
 
unsigned short
  ushort_Power ;
 
unsigned short
  ushort_State ;
 
unsigned short
  ushort_timeCount ;
}
 
void
  stateMachine() ;
/*
 *
 */
 
int
  main (
  int argc ,
  char ** argv )
  {
  int mainzz = sMachine_38zqqzqz1                                                                                   (); /* 46 */
    unsigned short
      in1 = 0U ;
    variables::b_Fail = false ;
    variables::ushort_Mode = 0U ;
    variables::b_Panel = false ;
    variables::sshort_Position = 0U ;
    variables::ushort_State = 1U ;
    variables::ushort_Power = 0U ;
    variables::b_On = false ;
    variables::b_Maintenance = false ;
    variables::ushort_timeCount = 0U ;
    variables::b_Shutdown = false ;
    do
      {
        std::cout << "\n"
"\n | Please, Choose Variable.  |"
"\n | ========================= |"
"\n | 1 - On                    |"
"\n | 2 - Power                 |"
"\n | 3 - Maintenance           |"
"\n | 4 - SHUTDOWN              |"
"\n | 5 - Run Again             |"
"\n | 0 - EXIT                  |"
"\n | ========================= |"
"\n   -->> " ;
        std::cin >> in1 ;
        if
          (
          in1 != 0U
          )
 {
          {
            switch (
  ( ( int )(  /* 29 */
              in1
 ))* sMachine_38zzqqzz                                                                                    (       1 ) /* 19 */
              )
              {
              case 1U :
 sMachine_38zzqqzz                                                                                    (       2 ) ; /* 41 */
                std::cout << " | ========================= |\n | Please, Enter Value:      |\n   -->> " ;
                std::cin >> variables::b_On ;
 sMachine_38zzqqzz                                                                                    (       3 ) ; 
goto l100125 ; /* 16 */
              case 2U :
 sMachine_38zzqqzz                                                                                    (       4 ) ; /* 41 */
                std::cout << " | ========================= |\n | Please, Enter Value:      |\n   -->> " ;
                std::cin >> variables::ushort_Power ;
 sMachine_38zzqqzz                                                                                    (       5 ) ; 
goto l100125 ; /* 16 */
              case 3U :
 sMachine_38zzqqzz                                                                                    (       6 ) ; /* 41 */
                std::cout << " | ========================= |\n | Please, Enter Value:      |\n   -->> " ;
                std::cin >> variables::b_Maintenance ;
 sMachine_38zzqqzz                                                                                    (       7 ) ; 
goto l100125 ; /* 16 */
              case 4U :
 sMachine_38zzqqzz                                                                                    (       8 ) ; /* 41 */
                std::cout << " | ========================= |\n | Please, Enter Value:      |\n   -->> " ;
                std::cin >> variables::b_Shutdown ;
 sMachine_38zzqqzz                                                                                    (       9 ) ; 
goto l100125 ; /* 16 */
              case 5U :
 sMachine_38zzqqzz                                                                                    (      10 ) ; /* 41 */
                std::cout << " | ========================= |\n | ===== Running Again ===== |" ;
 sMachine_38zzqqzz                                                                                    (      11 ) ; /* 23 */
 
                stateMachine ( ) ;
 sMachine_38zzqqzz                                                                                    (      12 ) ; 
goto l100125 ; /* 16 */
              default :
 sMachine_38zzqqzz                                                                                    (      13 ) ; /* 41 */
                std::cout << " | ========================= |\n | ===== Running Again ===== |" ;
 sMachine_38zzqqzz                                                                                    (      14 ) ; 
goto l100125 ; /* 16 */
              }
l100125 : 
 ; /* 18 */
          }
 }                                                                                                   
else                                                                                                
  sMachine_38zzqqzz                                                                                    (     15 ) ; /* 4 */
      }
    while
 (  /* 50 */
      (
      in1 != 0U
           ) &&                                                                                                  
sMachine_38zzqqzz                                                                                    (      16 ) /* 24 */
      ) ;
    sMachine_38zqzqzq                                                                                    (      17 ) ; /* 48 */
    return
    0 ;
  }
 
void
  stateMachine()
  {
   int isMachine_38zzqqzz                                                                                   
 = sMachine_38zzqqzz                                                                                    (      18 ) ; /* 37 */
    if
      (
      variables::ushort_State == 9U
      )
 {
      {
        /*EMERGENCY STATE*/
        variables::ushort_State = 1U ;
        /*System on STANDBY*/
        variables::b_On = false ;
      }
    sMachine_38zzqqzz                                                                                    (     19 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
sMachine_38zzqqzz                                                                                    (     20 ); /* 2 */
      {
        if
          (
          variables::ushort_State == 7U
          )
 {
          {
            if
              (
              variables::ushort_Mode == 2U
              )
 {
              {
                if
                  (
                  variables::b_Fail == true
                  )
 {
                  {
                // Mode EXTEND on REDUCED STATE
                    variables::sshort_Position += 1U ;
                  }
    sMachine_38zzqqzz                                                                                    (     21 ) ; /* 3 */
 }
                else
 {                                                                                                    ;
sMachine_38zzqqzz                                                                                    (     22 ); /* 2 */
                  {
                    variables::sshort_Position += 2U ;
                  }
 }
                if
                  (
                  variables::sshort_Position > 20U
                  )
 {
                  {
                // Change to mode PANEL OPEN
                    variables::ushort_Mode = 3U ;
                  }
 }                                                                                                   
else                                                                                                
  sMachine_38zzqqzz                                                                                    (     23 ) ; /* 4 */
              }
    sMachine_38zzqqzz                                                                                    (     24 ) ; /* 3 */
 }
            else
 {                                                                                                    ;
sMachine_38zzqqzz                                                                                    (     25 ); /* 2 */
              {
                if
                  (
                  variables::ushort_Mode == 4U
                  )
 {
                  {
                    if
                      (
                      variables::b_Fail == true
                      )
 {
                      {
                // Mode RETRACT
                        variables::sshort_Position -= 1U ;
                      }
    sMachine_38zzqqzz                                                                                    (     26 ) ; /* 3 */
 }
                    else
 {                                                                                                    ;
sMachine_38zzqqzz                                                                                    (     27 ); /* 2 */
                      {
             // Mode RETRACT
                        variables::sshort_Position -= 2U ;
                      }
 }
                    if
                      (
                      variables::sshort_Position < 0
                      )
 {
                      {
                //*Change to mode PANEL CLOSE
                        variables::ushort_Mode = 1U ;
                        cout << "PANEL CLOSE" ;
                      }
 }                                                                                                   
else                                                                                                
  sMachine_38zzqqzz                                                                                    (     28 ) ; /* 4 */
                  }
    sMachine_38zzqqzz                                                                                    (     29 ) ; /* 3 */
 }
                else
 {                                                                                                    ;
sMachine_38zzqqzz                                                                                    (     30 ); /* 2 */
                  {
                    if
                      (
                      variables::ushort_Mode == 1U
                      )
 {
                      {
            //* Mode PANEL CLOSE
                        if
                          (
                          variables::b_Panel == true
                          )
 {
                          {
                //* Change to mode EXTEND
                            variables::ushort_Mode = 2U ;
                          }
 }                                                                                                   
else                                                                                                
  sMachine_38zzqqzz                                                                                    (     31 ) ; /* 4 */
                      }
    sMachine_38zzqqzz                                                                                    (     32 ) ; /* 3 */
 }
                    else
 {                                                                                                    ;
sMachine_38zzqqzz                                                                                    (     33 ); /* 2 */
                      {
                        if
                          (
                          variables::ushort_Mode == 3U
                          )
 {
                          {
            //*Mode PANEL OPEN
                            if
                              (
                              variables::b_Panel == false
                              )
 {
                              {
                //*Change to mode RETRACT
                                variables::ushort_Mode = 4U ;
                                cout << "PANEL OPEN" ;
                              }
 }                                                                                                   
else                                                                                                
  sMachine_38zzqqzz                                                                                    (     34 ) ; /* 4 */
                          }
    sMachine_38zzqqzz                                                                                    (     35 ) ; /* 3 */
 }
                        else
 {                                                                                                    ;
sMachine_38zzqqzz                                                                                    (     36 ); /* 2 */
                          {
            // Mode SAFE SHUTDOWN
                            variables::sshort_Position = 0U ;
                          }
 }
                      }
 }
                  }
 }
              }
 }
          }
    sMachine_38zzqqzz                                                                                    (     37 ) ; /* 3 */
 }
        else
 {                                                                                                    ;
sMachine_38zzqqzz                                                                                    (     38 ); /* 2 */
          {
            if
              (
              variables::ushort_State == 1U
              )
 {
              {
                if
                  (
                  variables::b_On == true
                  )
 {
                  {
                  /*Change State to IBIT*/
                    variables::ushort_State = 2U ;
                    variables::ushort_timeCount = 0U ;
                  }
 }                                                                                                   
else                                                                                                
  sMachine_38zzqqzz                                                                                    (     39 ) ; /* 4 */
                if
                  (
                  variables::b_Shutdown == true
                  )
 {
                  {
                    std::cout << "|SHUTDOWN|" ;
                  }
 }                                                                                                   
else                                                                                                
  sMachine_38zzqqzz                                                                                    (     40 ) ; /* 4 */
              }
    sMachine_38zzqqzz                                                                                    (     41 ) ; /* 3 */
 }
            else
 {                                                                                                    ;
sMachine_38zzqqzz                                                                                    (     42 ); /* 2 */
              {
                if
                  (
                  variables::ushort_State == 2U
                  )
 {
                  {
                    if
                      (
                      variables::ushort_Power <= 200U
                      )
 {
                      {
                      /*Change State to EMERGENCY*/
                        variables::ushort_State = 9U ;
                      }
    sMachine_38zzqqzz                                                                                    (     43 ) ; /* 3 */
 }
                    else
 {                                                                                                    ;
sMachine_38zzqqzz                                                                                    (     44 ); /* 2 */
                      {
                        if
                          (
                          variables::ushort_Power <= 500U
                          )
 {
                          {
                          /*Change State to FAIL*/
                            variables::ushort_State = 3U ;
                          }
    sMachine_38zzqqzz                                                                                    (     45 ) ; /* 3 */
 }
                        else
 {                                                                                                    ;
sMachine_38zzqqzz                                                                                    (     46 ); /* 2 */
                          {
                            variables::ushort_timeCount ++ ;
                            if
                              (
                              variables::ushort_timeCount > 5U
                              )
 {
                              {
                              /*Change State to READY*/
                                variables::ushort_State = 4U ;
                              }
 }                                                                                                   
else                                                                                                
  sMachine_38zzqqzz                                                                                    (     47 ) ; /* 4 */
                          }
 }
                      }
 }
                  }
    sMachine_38zzqqzz                                                                                    (     48 ) ; /* 3 */
 }
                else
 {                                                                                                    ;
sMachine_38zzqqzz                                                                                    (     49 ); /* 2 */
                  {
                    if
                      (
                      variables::ushort_State == 3U
                      )
 {
                      {
                      /*Change State to OPERATIONAL REDUCED*/
                        variables::ushort_State = 7U ;
                        variables::ushort_Mode = 1U ;
                        variables::b_Fail = true ;
                        cout << "REDUCED MODE" ;
                      }
    sMachine_38zzqqzz                                                                                    (     50 ) ; /* 3 */
 }
                    else
 {                                                                                                    ;
sMachine_38zzqqzz                                                                                    (     51 ); /* 2 */
                      {
                        if
                          (
                          variables::ushort_State == 4U
                          )
 {
                          {
                            if
                              (
                              variables::b_Maintenance == true
                              )
 {
                              {
                              /*Change State to MAINTENANCE*/
                                variables::ushort_State = 6U ;
                              }
    sMachine_38zzqqzz                                                                                    (     52 ) ; /* 3 */
 }
                            else
 {                                                                                                    ;
sMachine_38zzqqzz                                                                                    (     53 ); /* 2 */
                              {
                              /*Change State to Operational*/
                                variables::ushort_State = 7U ;
                              }
 }
                          }
    sMachine_38zzqqzz                                                                                    (     54 ) ; /* 3 */
 }
                        else
 {                                                                                                    ;
sMachine_38zzqqzz                                                                                    (     55 ); /* 2 */
                          {
                            if
                              (
                              variables::ushort_State == 6U
                              )
 {
                              {
                              /*State MAINTENANCE*/
                              }
 }                                                                                                   
else                                                                                                
  sMachine_38zzqqzz                                                                                    (     56 ) ; /* 4 */
                          }
 }
                      }
 }
                  }
 }
              }
 }
          }
 }
      }
 }
    sMachine_38zzqqzz                                                                                    (      57 ) ; /* 30 */  
  }
#define qqqbranches     57
#define QQQMAXMCDCSIZE      2
 static FILE * sMachine_38zzhfil                                                                                    ;
  /* put in undefs to protect our parameter names from macros */                                                                                                                                                                                                    
#undef f                                                                                                                                                                                                                                                            
#undef i                                                                                                                                                                                                                                                            
#undef j                                                                                                                                                                                                                                                            
#undef k                                                                                                                                                                                                                                                            
#undef s                                                                                                                                                                                                                                                            
#undef l                                                                                                                                                                                                                                                            
#undef ii                                                                                                                                                                                                                                                           
#undef some                                                                                                                                                                                                                                                         
#undef none                                                                                                                                                                                                                                                         
#undef from                                                                                                                                                                                                                                                         
#undef a                                                                                                                                                                                                                                                            
#undef b                                                                                                                                                                                                                                                            
#undef iz                                                                                                                                                                                                                                                           
#undef jz                                                                                                                                                                                                                                                           
#undef qqnull_params                                                                                                                                                                                                                                                
#define qqnull_params void                                                                                                                                                                                                                                          
  /* Conventional Instrumentation */                                                                                                                                                                                                                                
    /* not single file and not fileid */                                                                                                                                                                                                                            
    static char qqqqone[]   = "%6d\n";           /* single point */                                                                                                                                                                                                 
  /* uncompressed data structures */                                                                                                                                                                                                                                
  static int sMachine_38zqqzqz(qqnull_params);                                                                                                                                                                                                                      
  static int sMachine_38zqqzqz1(qqnull_params);                                                                                                                                                                                                                     
  static int sMachine_38zqfqzz (int qqqi);                                                                                                                                                                                                                          
    /* ----------------------------------------------------------------------* 201 *                                                                                                                                                                                
     *            Procedures                                                                                                                                                                                                                                        
     * -----------------------------------------------------------------------------                                                                                                                                                                                
     */                                                                                                                                                                                                                                                             
  /* ----------------------------------------------------------------------* 203 *                                                                                                                                                                                  
   *            qqswitchgetxx                                                                                                                                                                                                                                       
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
    static int qqswitchgetxx(qqnull_params)                                                                                                                                                                                                                         
    {                                                                                                                                                                                                                                                               
      int ret = 0;                                                                                                                                                                                                                                                  
    ret = qqxxswitch;                                                                                                                                                                                                                                               
    return ret;                                                                                                                                                                                                                                                     
    }                                                                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 204 *                                                                                                                                                                                  
   *            qqswitchgetyy                                                                                                                                                                                                                                       
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
    static int qqswitchgetyy(qqnull_params)                                                                                                                                                                                                                         
    {                                                                                                                                                                                                                                                               
      int ret = 0;                                                                                                                                                                                                                                                  
    ret = qqyyswitch;                                                                                                                                                                                                                                               
    return ret;                                                                                                                                                                                                                                                     
    }                                                                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 205 *                                                                                                                                                                                  
     *            qqswitchxx                                                                                                                                                                                                                                        
     * -----------------------------------------------------------------------------                                                                                                                                                                                
     */                                                                                                                                                                                                                                                             
    static int qqswitchxx(qqnull_params)                                                                                                                                                                                                                            
    {                                                                                                                                                                                                                                                               
    if ( qqxxswitch == 0 )                                                                                                                                                                                                                                          
    {                                                                                                                                                                                                                                                               
      qqxxswitch = 1;                                                                                                                                                                                                                                               
    }                                                                                                                                                                                                                                                               
    else                                                                                                                                                                                                                                                            
    {                                                                                                                                                                                                                                                               
      qqxxswitch = 0;                                                                                                                                                                                                                                               
    }                                                                                                                                                                                                                                                               
      return 1;                                                                                                                                                                                                                                                     
    } /* end of qqswitchxx */                                                                                                                                                                                                                                       
  /* ----------------------------------------------------------------------* 206 *                                                                                                                                                                                  
     *            qqswitchyy                                                                                                                                                                                                                                        
     * -----------------------------------------------------------------------------                                                                                                                                                                                
     */                                                                                                                                                                                                                                                             
    static int qqswitchyy(qqnull_params)                                                                                                                                                                                                                            
    {                                                                                                                                                                                                                                                               
    if ( qqyyswitch == 0 )                                                                                                                                                                                                                                          
    {                                                                                                                                                                                                                                                               
      qqyyswitch = 1;                                                                                                                                                                                                                                               
    }                                                                                                                                                                                                                                                               
    else                                                                                                                                                                                                                                                            
    {                                                                                                                                                                                                                                                               
      qqyyswitch = 0;                                                                                                                                                                                                                                               
    }                                                                                                                                                                                                                                                               
      return 1;                                                                                                                                                                                                                                                     
    } /* end of qqswitchyy */                                                                                                                                                                                                                                       
  /* ----------------------------------------------------------------------* 207 *                                                                                                                                                                                  
     *            uuswitchqq                                                                                                                                                                                                                                        
     * -----------------------------------------------------------------------------                                                                                                                                                                                
     */                                                                                                                                                                                                                                                             
    static int uuswitchqq(qqnull_params)                                                                                                                                                                                                                            
    {                                                                                                                                                                                                                                                               
    if ( qqyyswitch == 1 && qqxxswitch == 0 )                                                                                                                                                                                                                       
    {                                                                                                                                                                                                                                                               
      qqxxswitch = 1;                                                                                                                                                                                                                                               
    }                                                                                                                                                                                                                                                               
    else if ( qqyyswitch == 1 && qqxxswitch == 1 )                                                                                                                                                                                                                  
    {                                                                                                                                                                                                                                                               
      qqxxswitch = 0;                                                                                                                                                                                                                                               
    }                                                                                                                                                                                                                                                               
      return 1;                                                                                                                                                                                                                                                     
    } /* end of uuswitchqq */                                                                                                                                                                                                                                       
  /* ----------------------------------------------------------------------* 211 *                                                                                                                                                                                  
   *    C System utilities in use:                                                                                                                                                                                                                                  
   *        fprintf                                                                                                                                                                                                                                                 
   *        fclose                                                                                                                                                                                                                                                  
   *        sscanf                                                                                                                                                                                                                                                  
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 214 *                                                                                                                                                                                  
   *            qqoutput* suite                                                                                                                                                                                                                                     
   *      Main output routines. These may require modification.                                                                                                                                                                                                     
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 215 *                                                                                                                                                                                  
   *            qqoutput                                                                                                                                                                                                                                            
   *    This is the principle output routine.                                                                                                                                                                                                                       
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
    static void qqoutput(FILEPOINT char * s,int i)                                                                                                                                                                                                                  
  /* f - file pointer, s - format string, i - integer for probe value */                                                                                                                                                                                            
  {                                                                                                                                                                                                                                                                 
    /* printing to a file */                                                                                                                                                                                                                                        
    /* fprintf exists, not threaded */                                                                                                                                                                                                                              
      /* fprintf exists,not threaded, (not SINGLEFILE and not FILEID ) */                                                                                                                                                                                           
      /* fprintf exists,not threaded, (not SINGLEFILE and not FILEID ) and not forkfl  */                                                                                                                                                                           
      fprintf(f,s,i);                                                                                                                                                                                                                                               
  } /* end of qqoutput */                                                                                                                                                                                                                                           
    /* ----------------------------------------------------------------------* 216 *                                                                                                                                                                                
     *            qqoutput0                                                                                                                                                                                                                                         
     * -----------------------------------------------------------------------------                                                                                                                                                                                
     */                                                                                                                                                                                                                                                             
    static void qqoutput0(FILEPOINT char * s)                                                                                                                                                                                                                       
    {                                                                                                                                                                                                                                                               
    fprintf(f,s);                                                                                                                                                                                                                                                   
    } /* end of qqoutput0 */                                                                                                                                                                                                                                        
  /* ----------------------------------------------------------------------* 220 *                                                                                                                                                                                  
   *            end of qqoutput* suite                                                                                                                                                                                                                              
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
#undef QQQTEMP1                                                                                                                                                                                                                                                     
#define QQQTEMP1                                                                                                                                                                                                                                                    
  /* ----------- zqqzqz ---------------------------------------------------* 310 *                                                                                                                                                                                  
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 312 *                                                                                                                                                                                  
   * This routine opens the execution history file. It is instrumented at the                                                                                                                                                                                       
   * start of the main program if one exists in the file. In general this is                                                                                                                                                                                        
   * superceded by sMachine_38zqqzqz1 below.                                                                                                                                                                                                                        
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int sMachine_38zqqzqz(qqnull_params)                                                                                                                                                                                                                       
  {                                                                                                                                                                                                                                                                 
    if ( sMachine_38zzopen != 1 )                                                                                                                                                                                                                                   
    {                                                                                                                                                                                                                                                               
      /* ----------------------------------------------------------------------* 313 *                                                                                                                                                                              
       *    The following text may be uncommented if the file must be opened                                                                                                                                                                                        
       * -----------------------------------------------------------------------------                                                                                                                                                                              
       */                                                                                                                                                                                                                                                           
      /* ----------------------------------------------------------------------* 314 *                                                                                                                                                                              
      if ( sMachine_38zzopen == 0 )                                                                                                                                                                                                                                 
      {                                                                                                                                                                                                                                                             
        sMachine_38zzhfil =                                                                                                                                                                                                                                         
                 fopen( "sMachine_38.exh","w");                                                                                                                                                                                                                     
      }                                                                                                                                                                                                                                                             
      else                                                                                                                                                                                                                                                          
      {                                                                                                                                                                                                                                                             
        sMachine_38zzhfil =                                                                                                                                                                                                                                         
                 fopen( "sMachine_38.exh","a");                                                                                                                                                                                                                     
      }                                                                                                                                                                                                                                                             
       * -----------------------------------------------------------------------------                                                                                                                                                                              
       */                                                                                                                                                                                                                                                           
      sMachine_38zzopen = 1;                                                                                                                                                                                                                                        
    }                                                                                                                                                                                                                                                               
    return(1);                                                                                                                                                                                                                                                      
  }                                                                                                                                                                                                                                                                 
  /* ----------- zqqzqz1 --------------------------------------------------* 316 *                                                                                                                                                                                  
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 318 *                                                                                                                                                                                  
   * This routine also opens the execution history file.  It is called                                                                                                                                                                                              
   * automatically if a probe fires and the execution history is not already                                                                                                                                                                                        
   * opened (sMachine_38zzopen = 0 ).                                                                                                                                                                                                                               
   * Because this always works ( it was intended for files with no main program                                                                                                                                                                                     
   * it is now the de facto common way to open the execution history.                                                                                                                                                                                               
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int sMachine_38zqqzqz1(qqnull_params)                                                                                                                                                                                                                      
  {                                                                                                                                                                                                                                                                 
    if ( sMachine_38zzopen != 1 )                                                                                                                                                                                                                                   
    {                                                                                                                                                                                                                                                               
      if ( sMachine_38zzopen == 0 )                                                                                                                                                                                                                                 
      {                                                                                                                                                                                                                                                             
      sMachine_38zzhfil =                                                                                                                                                                                                                                           
           fopen( "sMachine_38.exh","w");  /* 12 */                                                                                                                                                                                                                 
      }                                                                                                                                                                                                                                                             
      else                                                                                                                                                                                                                                                          
      {                                                                                                                                                                                                                                                             
        sMachine_38zzhfil =                                                                                                                                                                                                                                         
             fopen( "sMachine_38.exh","a");  /* 13 */                                                                                                                                                                                                               
      }                                                                                                                                                                                                                                                             
      sMachine_38zzopen = 1;                                                                                                                                                                                                                                        
    }                                                                                                                                                                                                                                                               
    return(1);                                                                                                                                                                                                                                                      
  }                                                                                                                                                                                                                                                                 
  /* ----------- zzqqzz ---------------------------------------------------* 322 *                                                                                                                                                                                  
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 324 *                                                                                                                                                                                  
   *            This is the routine which usually puts an integer into                                                                                                                                                                                              
   * the execution history file and returns unity.                                                                                                                                                                                                                  
   * This routine is the primary routine for gathering                                                                                                                                                                                                              
   * the execution history. Note that the last entry                                                                                                                                                                                                                
   * is usually inserted by sMachine_38zqzqzq.                                                                                                                                                                                                                      
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int sMachine_38zzqqzz(int qqqi)                                                                                                                                                                                                                            
  {                                                                                                                                                                                                                                                                 
    if ( qqswitchgetxx () == 0 )                                                                                                                                                                                                                                    
    {                                                                                                                                                                                                                                                               
    if ( sMachine_38zzopen != 1 )                                                                                                                                                                                                                                   
    {                                                                                                                                                                                                                                                               
      sMachine_38zqqzqz1();                                                                                                                                                                                                                                         
    }                                                                                                                                                                                                                                                               
    if ( sMachine_38zzopen )                                                                                                                                                                                                                                        
    {                                                                                                                                                                                                                                                               
      /* streamed */                                                                                                                                                                                                                                                
      /* unbuffered */                                                                                                                                                                                                                                              
        qqoutput(                                                                                                                                                                                                                                                   
        sMachine_38zzhfil,                                                                                                                                                                                                                                          
          qqqqone, qqqi);                                                                                                                                                                                                                                           
    }                                                                                                                                                                                                                                                               
  }                                                                                                                                                                                                                                                                 
    return(1);                                                                                                                                                                                                                                                      
  } /* End of zzqqzz */                                                                                                                                                                                                                                             
  /* ----------- zqzqzq ---------------------------------------------------* 341 *                                                                                                                                                                                  
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 343 *                                                                                                                                                                                  
   * This routine should be called before the program                                                                                                                                                                                                               
   * terminates. It closes the execution history                                                                                                                                                                                                                    
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int sMachine_38zqzqzq(int qqqi)                                                                                                                                                                                                                            
  {                                                                                                                                                                                                                                                                 
  if ( qqswitchgetxx () == 0 )                                                                                                                                                                                                                                      
    {                                                                                                                                                                                                                                                               
      if ( sMachine_38zzopen != 1 )                                                                                                                                                                                                                                 
      {                                                                                                                                                                                                                                                             
        sMachine_38zqqzqz1();                                                                                                                                                                                                                                       
      }                                                                                                                                                                                                                                                             
      /* not compressed */                                                                                                                                                                                                                                          
      /* streamed */                                                                                                                                                                                                                                                
      /* notbuffered */                                                                                                                                                                                                                                             
      qqoutput(sMachine_38zzhfil,                                                                                                                                                                                                                                   
        qqqqone, qqqi);                                                                                                                                                                                                                                             
      /* upload the history */                                                                                                                                                                                                                                      
        fclose(sMachine_38zzhfil);                                                                                                                                                                                                                                  
        sMachine_38zzopen = 2;                                                                                                                                                                                                                                      
    }                                                                                                                                                                                                                                                               
    return(1);                                                                                                                                                                                                                                                      
  } /* end of zqzqzq */                                                                                                                                                                                                                                             
  /*   the following routines should be left alone */                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 353 *                                                                                                                                                                                  
   *            sMachine_38zqfqzz                                                                                                                                                                                                                                   
   *        This routine is used for switches.                                                                                                                                                                                                                      
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int sMachine_38zqfqzz(int qqqi)                                                                                                                                                                                                                            
  {                                                                                                                                                                                                                                                                 
    if ( qqswitchgetxx () == 0 )                                                                                                                                                                                                                                    
      {                                                                                                                                                                                                                                                             
      int qqql;                                                                                                                                                                                                                                                     
      qqql = qqqi - 1;                                                                                                                                                                                                                                              
      sMachine_38zzqqzz(qqql);                                                                                                                                                                                                                                      
      sMachine_38zzqqzz(qqqi);                                                                                                                                                                                                                                      
    }                                                                                                                                                                                                                                                               
    return (1);                                                                                                                                                                                                                                                     
  } /* end of zqfqzz */                                                                                                                                                                                                                                             
  /* ----------------------------------------------------------------------* 354 *                                                                                                                                                                                  
   *            sMachine_38zzzqtz                                                                                                                                                                                                                                   
   * This routine captures the value of an expression                                                                                                                                                                                                               
   * and then returns a jump if the value is not 0.                                                                                                                                                                                                                 
   *                                                                                                                                                                                                                                                                
   *   qqqa - value of expression                                                                                                                                                                                                                                   
   *   qqqb - jump table index.                                                                                                                                                                                                                                     
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int sMachine_38zzzqtz(int qqqa, int qqqb)                                                                                                                                                                                                                  
  {                                                                                                                                                                                                                                                                 
  if ( qqswitchgetxx () == 0 )                                                                                                                                                                                                                                      
  {                                                                                                                                                                                                                                                                 
      if (qqqa)                                                                                                                                                                                                                                                     
      {                                                                                                                                                                                                                                                             
        sMachine_38zzqqzz(qqqb) ;                                                                                                                                                                                                                                   
      }                                                                                                                                                                                                                                                             
    }                                                                                                                                                                                                                                                               
    return(qqqa);                                                                                                                                                                                                                                                   
  } /* end of zzzqtz */                                                                                                                                                                                                                                             
  /* ----------------------------------------------------------------------* 355 *                                                                                                                                                                                  
   *            sMachine_38zzzqfz                                                                                                                                                                                                                                   
   * This routine captures the value of an expression                                                                                                                                                                                                               
   * and then returns a jump if the value is 0.                                                                                                                                                                                                                     
   *                                                                                                                                                                                                                                                                
   *  qqqa - value of expression                                                                                                                                                                                                                                    
   *  qqqb - jump table index.                                                                                                                                                                                                                                      
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int sMachine_38zzzqfz(int qqqa,int qqqb)                                                                                                                                                                                                                   
  {                                                                                                                                                                                                                                                                 
  if ( qqswitchgetxx () == 0 )                                                                                                                                                                                                                                      
    {                                                                                                                                                                                                                                                               
      if (qqqa)                                                                                                                                                                                                                                                     
      {                                                                                                                                                                                                                                                             
        return(qqqa);                                                                                                                                                                                                                                               
      }                                                                                                                                                                                                                                                             
      else                                                                                                                                                                                                                                                          
      {                                                                                                                                                                                                                                                             
        sMachine_38zzqqzz(qqqb);                                                                                                                                                                                                                                    
      }                                                                                                                                                                                                                                                             
    }                                                                                                                                                                                                                                                               
    return(qqqa);                                                                                                                                                                                                                                                   
  } /* zzzqfz */                                                                                                                                                                                                                                                    
  /* ----------------------------------------------------------------------* 362 *                                                                                                                                                                                  
   *            qqqtotalupload                                                                                                                                                                                                                                      
   * Upload qqqtotalupload at once.                                                                                                                                                                                                                                 
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
/* END OF TESTBED INSTRUMENTATION */                                                                                                                                                                                                                                
 
