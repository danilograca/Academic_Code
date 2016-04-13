/*
C++ TESTBED VERSION  : 9.5.1
FILE UNDER TEST  : "C:\_WorkSpace\Academic_Code\sMachine\sMachine.cpp"
DATE OF ANALYSIS : Mon Mar 21 17:24:14 2016
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
#undef QQQdialect 
#undef QQQ146
#undef QQQ148
#undef QQQbndchk
#define QQQ294
#undef QQQEMBEDDEDICE
 /* Note: for BITMAP execution histories QQQthreaded is not defined */
#undef QQQthreaded 
#undef QQQdo178b
#undef QQQfixbra
#define QQQswitch3
#undef QQQternary
#define QQQswitch
#undef QQQmacrof
#undef QQQMULTIPROCESSEXH
#undef QQFLUSH
#undef QQNEWBS
#define qqqMaxBranchDepth     20
#undef QQQstructbitmap
 static int zzfileid =     46;
#undef QQQALGONE
#undef QQQVCLFLG
#undef QQQFORKFL
#undef QQQIADDRF
#undef QQQRTI
#undef QQQPERFA
#undef QQQADRMOD
#undef QQQDCAPFL
#undef QQQTEMPLATEONLY
#define QQQNOATEXIT
#undef QQQUPLOADATEND
#define QQQNOSTDIO
#undef QQQASHLINGVITRA
#define QQQBITMAP 
#undef QQQBITMAPMCDC 
#undef QQQTIC2XSERIALIO
#undef QQQTIC2XFLASH
#undef QQQCOMPRESSED_EXH
#define QQQMAINFL
#undef QQQSINGLEFILE
#undef QQQFILEID
#define QQQseparate
static int QQQindicator=0;
static int QQQfirstmcdc=1;
 static int sMachine_46zzopen                                                                                    = 0;
#ifndef QQQLDRA_PORT                                                                                                                                                                                                                                                
#define FILEPOINT FILE * f,                                                                                                                                                                                                                                         
#if !defined(QQQTEMPLATEONLY) && !defined(FILE) && !defined(QQQNOSTDIO) && !defined(QQQLDRA_PORT)                                                                                                                                                                   
#include <stdio.h>                                                                                                                                                                                                                                                  
    /* ----------------------------------------------------------------------* 100 *                                                                                                                                                                                
     * If stdio.h is not available then insert:                                                                                                                                                                                                                     
     *      typedef int * FILE;                                                                                                                                                                                                                                     
     * -----------------------------------------------------------------------------                                                                                                                                                                                
     */                                                                                                                                                                                                                                                             
#endif  /* !defined(QQQTEMPLATEONLY) && !defined(FILE) && !defined(QQQNOSTDIO) && !defined(QQQLDRA_PORT) */                                                                                                                                                         
#else                                                                                                                                                                                                                                                               
#define FILEPOINT                                                                                                                                                                                                                                                   
#ifdef __cplusplus                                                                                                                                                                                                                                                  
extern "C" {                                                                                                                                                                                                                                                        
#endif                                                                                                                                                                                                                                                              
                                                                                                                                                                                                                                                                    
/* Define the maximum number of instrumented files */                                                                                                                                                                                                               
/* Each file requires 6 bytes of RAM.              */                                                                                                                                                                                                               
/* Will be used to set QQQnumfil in cinstr.dat     */                                                                                                                                                                                                               
#define LDRA_MAX_INSTRUMENTED_FILES 40                                                                                                                                                                                                                              
                                                                                                                                                                                                                                                                    
extern char ldra_buffer[];                                                                                                                                                                                                                                          
                                                                                                                                                                                                                                                                    
extern int ldra_open (void);                                                                                                                                                                                                                                        
extern void ldra_close (void);                                                                                                                                                                                                                                      
                                                                                                                                                                                                                                                                    
/* initialise the port */                                                                                                                                                                                                                                           
extern void ldra_port_init(void);                                                                                                                                                                                                                                   
                                                                                                                                                                                                                                                                    
/* write a zero terminated string to the port */                                                                                                                                                                                                                    
extern void ldra_port_write(const char* pMsg);                                                                                                                                                                                                                      
                                                                                                                                                                                                                                                                    
/* Check to see if the port has already been configured */                                                                                                                                                                                                          
/* Ensures that the port is not initialised twice       */                                                                                                                                                                                                          
extern int ldra_port_is_configured (void);                                                                                                                                                                                                                          
                                                                                                                                                                                                                                                                    
/* Functions used to avoid including stdio */                                                                                                                                                                                                                       
extern char* ldra_sprintf1 (char* str, const char* format, const int);                                                                                                                                                                                              
extern char* ldra_sprintf2 (char* str, const char* format, const int, const int);                                                                                                                                                                                   
extern char* ldra_sprintf3 (char* str, const char* format, const int, const int, const int);                                                                                                                                                                        
extern char* ldra_sprintf4 (char* str, const char* format, const int, const int, const int, const int);                                                                                                                                                             
                                                                                                                                                                                                                                                                    
/* Add include for ITM_SendChar */                                                                                                                                                                                                                                  
#ifdef USE_LPC17XX                                                                                                                                                                                                                                                  
#include "lpc17xx.h"                                                                                                                                                                                                                                                
#endif                                                                                                                                                                                                                                                              
                                                                                                                                                                                                                                                                    
#ifdef STM32F40_41xxx                                                                                                                                                                                                                                               
#include "stm32f4xx.h"                                                                                                                                                                                                                                              
#endif                                                                                                                                                                                                                                                              
                                                                                                                                                                                                                                                                    
#ifdef STM32F429xx                                                                                                                                                                                                                                                  
#include "stm32f4xx.h"                                                                                                                                                                                                                                              
#endif                                                                                                                                                                                                                                                              
                                                                                                                                                                                                                                                                    
#ifdef __cplusplus                                                                                                                                                                                                                                                  
}                                                                                                                                                                                                                                                                   
#endif                                                                                                                                                                                                                                                              
                                                                                                                                                                                                                                                                    
/* Avoid adding all this code for both black and white box */                                                                                                                                                                                                       
#ifndef QQQ_SHLAYOUT                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                                    
#ifdef QQQMAINFL                                                                                                                                                                                                                                                    
#define LDRA_MSG_SIZE 64                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                                                    
char ldra_buffer[LDRA_MSG_SIZE];                  /* Buffer used for each write to the port */                                                                                                                                                                      
static int ldra_fileid=0;                         /* Host File id */                                                                                                                                                                                                
static volatile int Configured=0;                 /* Used to avoid re-initialising */                                                                                                                                                                               
                                                                                                                                                                                                                                                                    
/* Simple delay */                                                                                                                                                                                                                                                  
static void ldra_delay(const int aDelay) {                                                                                                                                                                                                                          
  int loop;                                                                                                                                                                                                                                                         
  for ( loop=0; loop < aDelay; loop++ ) {                                                                                                                                                                                                                           
    if ( !ldra_port_is_configured() ) {                                                                                                                                                                                                                             
      break;                                                                                                                                                                                                                                                        
    }                                                                                                                                                                                                                                                               
  }                                                                                                                                                                                                                                                                 
}                                                                                                                                                                                                                                                                   
                                                                                                                                                                                                                                                                    
/* write a zero terminated string */                                                                                                                                                                                                                                
void ldra_port_write(const char* pMsg) {                                                                                                                                                                                                                            
  if ( pMsg != 0 ) {                                                                                                                                                                                                                                                
    /* Output characters in string until 0 terminator */                                                                                                                                                                                                            
    while ( *pMsg != 0 ) {                                                                                                                                                                                                                                          
      /* write next character */                                                                                                                                                                                                                                    
      /* make sure that ITM_SendChar does not get instrumented! */                                                                                                                                                                                                  
      (void)ITM_SendChar (*pMsg);                                                                                                                                                                                                                                   
      /* allow time for the ITM port to capture the data */                                                                                                                                                                                                         
      ldra_delay(5000);                                                                                                                                                                                                                                             
      /* Point to next character */                                                                                                                                                                                                                                 
      pMsg++;                                                                                                                                                                                                                                                       
    }                                                                                                                                                                                                                                                               
  }                                                                                                                                                                                                                                                                 
}                                                                                                                                                                                                                                                                   
                                                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                                                    
/*                                                                                                                                                                                                                                                                  
 * Perform any initialisation that is necessary                                                                                                                                                                                                                     
 * A breakpoint will get set on this function                                                                                                                                                                                                                       
 * to create a file                                                                                                                                                                                                                                                 
 */                                                                                                                                                                                                                                                                 
void ldra_port_init (void) {                                                                                                                                                                                                                                        
  /* Save info indicating that the init is done */                                                                                                                                                                                                                  
  Configured = 1;                                                                                                                                                                                                                                                   
}                                                                                                                                                                                                                                                                   
                                                                                                                                                                                                                                                                    
/*                                                                                                                                                                                                                                                                  
 * Check to see if the initialisation has already been done                                                                                                                                                                                                         
 */                                                                                                                                                                                                                                                                 
int ldra_port_is_configured (void) {                                                                                                                                                                                                                                
  return Configured;                                                                                                                                                                                                                                                
}                                                                                                                                                                                                                                                                   
                                                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                                                    
/*                                                                                                                                                                                                                                                                  
 * Routine to convert an integer to a decimal string                                                                                                                                                                                                                
 */                                                                                                                                                                                                                                                                 
static void ldra_int_to_dec (char* str, int val) {                                                                                                                                                                                                                  
  /* handle negative numbers. */                                                                                                                                                                                                                                    
  int neg = (val < 0);                                                                                                                                                                                                                                              
  if (neg) {                                                                                                                                                                                                                                                        
    val = -val;                                                                                                                                                                                                                                                     
  }                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                    
  /* add a decimal digit to the output string. */                                                                                                                                                                                                                   
  do {                                                                                                                                                                                                                                                              
    *(--str) = (val % 10) + '0';                                                                                                                                                                                                                                    
    val /= 10;                                                                                                                                                                                                                                                      
  } while (val);                                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                                                    
  if (neg) {                                                                                                                                                                                                                                                        
    *(--str) = '-';                                                                                                                                                                                                                                                 
  }                                                                                                                                                                                                                                                                 
}                                                                                                                                                                                                                                                                   
                                                                                                                                                                                                                                                                    
/*                                                                                                                                                                                                                                                                  
 * Routine to print a formatted string -> when sprintf is not available.                                                                                                                                                                                            
 */                                                                                                                                                                                                                                                                 
static void ldra_sprintf (char* str, const char* format, int cnt, const int d1, const int d2, const int d3, const int d4) {                                                                                                                                         
  int width = 0;                                                                                                                                                                                                                                                    
  int d[4];                                                                                                                                                                                                                                                         
  int max = cnt;                                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                                                    
  d[0] = d1;                                                                                                                                                                                                                                                        
  d[1] = d2;                                                                                                                                                                                                                                                        
  d[2] = d3;                                                                                                                                                                                                                                                        
  d[3] = d4;                                                                                                                                                                                                                                                        
  if (format != 0) {                                                                                                                                                                                                                                                
    do {                                                                                                                                                                                                                                                            
      /* expected format (in regex notation) %[1-9][0-9]?[xdh] */                                                                                                                                                                                                   
      /* else print char */                                                                                                                                                                                                                                         
      if ((*format == '%') && cnt) {                                                                                                                                                                                                                                
        ++format;                                                                                                                                                                                                                                                   
        /* The next char must be in 1..9 */                                                                                                                                                                                                                         
        if ((*format >= '1') && (*format <= '9')) {                                                                                                                                                                                                                 
          width = *format - '0';                                                                                                                                                                                                                                    
          ++format;                                                                                                                                                                                                                                                 
          /* The width might have two chars for a total range of 1-99 */                                                                                                                                                                                            
          if ((*format >= '0') && (*format <= '9')) {                                                                                                                                                                                                               
            width *= 10;                                                                                                                                                                                                                                            
            width += *format - '0';                                                                                                                                                                                                                                 
            ++format;                                                                                                                                                                                                                                               
          }                                                                                                                                                                                                                                                         
        } else {                                                                                                                                                                                                                                                    
	        width = 1;                                                                                                                                                                                                                                                 
        }                                                                                                                                                                                                                                                           
        /* Advance the pointer beyond the number field. */                                                                                                                                                                                                          
        while (width!=0) {                                                                                                                                                                                                                                          
          *str++ = ' ';                                                                                                                                                                                                                                             
          --width;                                                                                                                                                                                                                                                  
        }                                                                                                                                                                                                                                                           
                                                                                                                                                                                                                                                                    
        if (*format == 'd') {                                                                                                                                                                                                                                       
          ++format;                                                                                                                                                                                                                                                 
          /* printf("\n\n-***-123456789012345\nstr:\"%s\"\nfmt:\"%s\"\n---\n", str, format); */                                                                                                                                                                     
          ldra_int_to_dec(str, d[max-cnt]);                                                                                                                                                                                                                         
          --cnt;                                                                                                                                                                                                                                                    
        } else {                                                                                                                                                                                                                                                    
          /* missing the number type. */                                                                                                                                                                                                                            
          *str++ = ' ';                                                                                                                                                                                                                                             
          *str++ = 'E';                                                                                                                                                                                                                                             
          *str++ = 'r';                                                                                                                                                                                                                                             
          *str++ = 'r';                                                                                                                                                                                                                                             
          *str++ = '2';                                                                                                                                                                                                                                             
          *str++ = ' ';                                                                                                                                                                                                                                             
        }                                                                                                                                                                                                                                                           
      } else {                                                                                                                                                                                                                                                      
        /* if not '%' the token for a number format. */                                                                                                                                                                                                             
        /* output the current character. */                                                                                                                                                                                                                         
        *str = *format;                                                                                                                                                                                                                                             
        ++str;                                                                                                                                                                                                                                                      
        ++format;                                                                                                                                                                                                                                                   
      }                                                                                                                                                                                                                                                             
    } while ((*format != '\0'));                                                                                                                                                                                                                                    
  }                                                                                                                                                                                                                                                                 
  *str = '\0';                                                                                                                                                                                                                                                      
}                                                                                                                                                                                                                                                                   
                                                                                                                                                                                                                                                                    
/*                                                                                                                                                                                                                                                                  
 * Routine to convert one argument to a formatted string                                                                                                                                                                                                            
 */                                                                                                                                                                                                                                                                 
char* ldra_sprintf1 (char* str, const char* format, const int d1) {                                                                                                                                                                                                 
  ldra_sprintf(str, format, 1, d1, d1, d1, d1);                                                                                                                                                                                                                     
  return str;                                                                                                                                                                                                                                                       
}                                                                                                                                                                                                                                                                   
                                                                                                                                                                                                                                                                    
/*                                                                                                                                                                                                                                                                  
 * Routine to convert two arguments to a formatted string                                                                                                                                                                                                           
 */                                                                                                                                                                                                                                                                 
char* ldra_sprintf2 (char* str, const char* format, const int d1, const int d2) {                                                                                                                                                                                   
  ldra_sprintf(str, format, 2, d1, d2, d2, d2);                                                                                                                                                                                                                     
  return str;                                                                                                                                                                                                                                                       
}                                                                                                                                                                                                                                                                   
                                                                                                                                                                                                                                                                    
/*                                                                                                                                                                                                                                                                  
 * Routine to convert three arguments to a formatted string                                                                                                                                                                                                         
 */                                                                                                                                                                                                                                                                 
char* ldra_sprintf3 (char* str, const char* format, const int d1, const int d2, const int d3) {                                                                                                                                                                     
  ldra_sprintf(str, format, 3, d1, d2, d3, d3);                                                                                                                                                                                                                     
  return str;                                                                                                                                                                                                                                                       
}                                                                                                                                                                                                                                                                   
                                                                                                                                                                                                                                                                    
/*                                                                                                                                                                                                                                                                  
 * Routine to convert four arguments to a formatted string                                                                                                                                                                                                          
 */                                                                                                                                                                                                                                                                 
char* ldra_sprintf4 (char* str, const char* format, const int d1, const int d2, const int d3, const int d4) {                                                                                                                                                       
  ldra_sprintf(str, format, 4, d1, d2, d3, d4);                                                                                                                                                                                                                     
  return str;                                                                                                                                                                                                                                                       
}                                                                                                                                                                                                                                                                   
                                                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                                                    
/*                                                                                                                                                                                                                                                                  
 * Used to set a breakpoint at the end of execution                                                                                                                                                                                                                 
 */                                                                                                                                                                                                                                                                 
void ldra_exit (void) {                                                                                                                                                                                                                                             
  /* Stop the function from being optimised out */                                                                                                                                                                                                                  
  if ( ldra_port_is_configured() != 0 ) {                                                                                                                                                                                                                           
    Configured = 0;                                                                                                                                                                                                                                                 
  }                                                                                                                                                                                                                                                                 
}                                                                                                                                                                                                                                                                   
                                                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                                                    
/* Open a file on the host */                                                                                                                                                                                                                                       
int ldra_open (void) {                                                                                                                                                                                                                                              
  ldra_fileid = 1;                                                                                                                                                                                                                                                  
  /*                                                                                                                                                                                                                                                                
   * Protect against the case with just a single main and in white box                                                                                                                                                                                              
   * where the port can get initialised twice                                                                                                                                                                                                                       
   */                                                                                                                                                                                                                                                               
  if ( ldra_port_is_configured() == 0 ) {                                                                                                                                                                                                                           
    ldra_port_init();                   /* Initialise the port */                                                                                                                                                                                                   
  }                                                                                                                                                                                                                                                                 
  /* Need to stop ldra_close from being optimised out */                                                                                                                                                                                                            
  if ( ldra_port_is_configured() == 0 ) {                                                                                                                                                                                                                           
    ldra_close();                                                                                                                                                                                                                                                   
  }                                                                                                                                                                                                                                                                 
  return ldra_fileid;                                                                                                                                                                                                                                               
}                                                                                                                                                                                                                                                                   
                                                                                                                                                                                                                                                                    
/* Close the file on the host */                                                                                                                                                                                                                                    
void ldra_close (void) {                                                                                                                                                                                                                                            
  /* Stop the function from being optimised out */                                                                                                                                                                                                                  
  if ( ldra_port_is_configured() != 0 ) {                                                                                                                                                                                                                           
    ldra_exit();                                                                                                                                                                                                                                                    
  }                                                                                                                                                                                                                                                                 
}                                                                                                                                                                                                                                                                   
                                                                                                                                                                                                                                                                    
#endif /* QQQMAINFL */                                                                                                                                                                                                                                              
#endif /* QQQ_SHLAYOUT */                                                                                                                                                                                                                                           
#endif /* QQQLDRA_PORT */                                                                                                                                                                                                                                           
                                                                                                                                                                                                                                                                    
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
  static unsigned char qqqzzglobflag = 0;                                                                                                                                                                                                                           
  static void qqoutput(FILEPOINT char * s,int i);                                                                                                                                                                                                                   
  static void qqoutput2(FILEPOINT char * s,int i, int j);                                                                                                                                                                                                           
  static void qqoutput3(FILEPOINT char * s,int i,int j,int k);                                                                                                                                                                                                      
  static void qqoutput4(FILEPOINT char * s,int i,int j,int k,int l);                                                                                                                                                                                                
  static void qqoutput0(FILEPOINT char * s);                                                                                                                                                                                                                        
  static int qqswitchxx(qqnull_params);                                                                                                                                                                                                                             
  static int qqswitchyy(qqnull_params);                                                                                                                                                                                                                             
  static int uuswitchqq(qqnull_params);                                                                                                                                                                                                                             
  static int swzzqqzz (int qqqi, int onoff);                                                                                                                                                                                                                        
  static int sMachine_46zqqzqz(qqnull_params);                                                                                                                                                                                                                      
  static int sMachine_46zqqzqz1(qqnull_params);                                                                                                                                                                                                                     
  static int sMachine_46zzqqzz (int qqqi);                                                                                                                                                                                                                          
  static int sMachine_46zqendz (int qqqi);                                                                                                                                                                                                                          
  static int sMachine_46zqzqzq (int qqqi);                                                                                                                                                                                                                          
  static int sMachine_46zqfqzz (int qqqi);                                                                                                                                                                                                                          
  static int sMachine_46zzzqtz (int qqqa, int qqqb);                                                                                                                                                                                                                
  static int sMachine_46zzzqfz (int qqqa, int qqqb);                                                                                                                                                                                                                
  void sMachine_46zzdump (qqnull_params) ;                                                                                                                                                                                                                          
  static void qqqupload (qqnull_params);                                                                                                                                                                                                                            
  static void upload_execution_history (void) __attribute__((used));                                                                                                                                                                                                
  static int sMachine_46zscanf (char * qqscan_str);                                                                                                                                                                                                                 
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
  int mainzz = sMachine_46zqqzqz1                                                                                   (); /* 46 */
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
    sMachine_46zzqqzz                                                                                    (      1 ) ; /* 1 */
          {
            switch (
  ( ( int )(  /* 29 */
              in1
 ))* swzzqqzz (       2,1 ) /* 19 */
              )
              {
              case 1U :
  swzzqqzz(       3,0 ) ; /* 41 */
                std::cout << " | ========================= |\n | Please, Enter Value:      |\n   -->> " ;
                std::cin >> variables::b_On ;
 sMachine_46zzqqzz                                                                                    (       4 ) ; 
goto l100125 ; /* 16 */
              case 2U :
  swzzqqzz(       5,0 ) ; /* 41 */
                std::cout << " | ========================= |\n | Please, Enter Value:      |\n   -->> " ;
                std::cin >> variables::ushort_Power ;
 sMachine_46zzqqzz                                                                                    (       6 ) ; 
goto l100125 ; /* 16 */
              case 3U :
  swzzqqzz(       7,0 ) ; /* 41 */
                std::cout << " | ========================= |\n | Please, Enter Value:      |\n   -->> " ;
                std::cin >> variables::b_Maintenance ;
 sMachine_46zzqqzz                                                                                    (       8 ) ; 
goto l100125 ; /* 16 */
              case 4U :
  swzzqqzz(       9,0 ) ; /* 41 */
                std::cout << " | ========================= |\n | Please, Enter Value:      |\n   -->> " ;
                std::cin >> variables::b_Shutdown ;
 sMachine_46zzqqzz                                                                                    (      10 ) ; 
goto l100125 ; /* 16 */
              case 5U :
  swzzqqzz(      11,0 ) ; /* 41 */
                std::cout << " | ========================= |\n | ===== Running Again ===== |" ;
 sMachine_46zzqqzz                                                                                    (      12 ) ; /* 23 */
 
                stateMachine ( ) ;
 sMachine_46zzqqzz                                                                                    (      13 ) ; 
goto l100125 ; /* 16 */
              default :
  swzzqqzz(      14,0 ) ; /* 41 */
                std::cout << " | ========================= |\n | ===== Running Again ===== |" ;
 sMachine_46zzqqzz                                                                                    (      15 ) ; 
goto l100125 ; /* 16 */
              }
l100125 : 
 ; /* 18 */
          }
 }                                                                                                   
else                                                                                                
  sMachine_46zzqqzz                                                                                    (     16 ) ; /* 4 */
      }
    while
 (  /* 50 */
      (
      in1 != 0U
           ) &&                                                                                                  
sMachine_46zzqqzz                                                                                    (      17 ) /* 24 */
      || !sMachine_46zzqqzz                                                                                    (      18 ) /* 24A */
      ) ;
    sMachine_46zqzqzq                                                                                    (      19 ) ; /* 48 */
    return
    0 ;
  }
 
void
  stateMachine()
  {
   int isMachine_46zzqqzz                                                                                   
 = sMachine_46zzqqzz                                                                                    (      20 ) ; /* 37 */
    if
      (
      variables::ushort_State == 9U
      )
 {
    sMachine_46zzqqzz                                                                                    (     21 ) ; /* 1 */
      {
        /*EMERGENCY STATE*/
        variables::ushort_State = 1U ;
        /*System on STANDBY*/
        variables::b_On = false ;
      }
    sMachine_46zzqqzz                                                                                    (     22 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
sMachine_46zzqqzz                                                                                    (     23 ); /* 2 */
      {
        if
          (
          variables::ushort_State == 7U
          )
 {
    sMachine_46zzqqzz                                                                                    (     24 ) ; /* 1 */
          {
            if
              (
              variables::ushort_Mode == 2U
              )
 {
    sMachine_46zzqqzz                                                                                    (     25 ) ; /* 1 */
              {
                if
                  (
                  variables::b_Fail == true
                  )
 {
    sMachine_46zzqqzz                                                                                    (     26 ) ; /* 1 */
                  {
                // Mode EXTEND on REDUCED STATE
                    variables::sshort_Position += 1U ;
                  }
    sMachine_46zzqqzz                                                                                    (     27 ) ; /* 3 */
 }
                else
 {                                                                                                    ;
sMachine_46zzqqzz                                                                                    (     28 ); /* 2 */
                  {
                    variables::sshort_Position += 2U ;
                  }
 }
                if
                  (
                  variables::sshort_Position > 20U
                  )
 {
    sMachine_46zzqqzz                                                                                    (     29 ) ; /* 1 */
                  {
                // Change to mode PANEL OPEN
                    variables::ushort_Mode = 3U ;
                  }
 }                                                                                                   
else                                                                                                
  sMachine_46zzqqzz                                                                                    (     30 ) ; /* 4 */
              }
    sMachine_46zzqqzz                                                                                    (     31 ) ; /* 3 */
 }
            else
 {                                                                                                    ;
sMachine_46zzqqzz                                                                                    (     32 ); /* 2 */
              {
                if
                  (
                  variables::ushort_Mode == 4U
                  )
 {
    sMachine_46zzqqzz                                                                                    (     33 ) ; /* 1 */
                  {
                    if
                      (
                      variables::b_Fail == true
                      )
 {
    sMachine_46zzqqzz                                                                                    (     34 ) ; /* 1 */
                      {
                // Mode RETRACT
                        variables::sshort_Position -= 1U ;
                      }
    sMachine_46zzqqzz                                                                                    (     35 ) ; /* 3 */
 }
                    else
 {                                                                                                    ;
sMachine_46zzqqzz                                                                                    (     36 ); /* 2 */
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
    sMachine_46zzqqzz                                                                                    (     37 ) ; /* 1 */
                      {
                //*Change to mode PANEL CLOSE
                        variables::ushort_Mode = 1U ;
                        cout << "PANEL CLOSE" ;
                      }
 }                                                                                                   
else                                                                                                
  sMachine_46zzqqzz                                                                                    (     38 ) ; /* 4 */
                  }
    sMachine_46zzqqzz                                                                                    (     39 ) ; /* 3 */
 }
                else
 {                                                                                                    ;
sMachine_46zzqqzz                                                                                    (     40 ); /* 2 */
                  {
                    if
                      (
                      variables::ushort_Mode == 1U
                      )
 {
    sMachine_46zzqqzz                                                                                    (     41 ) ; /* 1 */
                      {
            //* Mode PANEL CLOSE
                        if
                          (
                          variables::b_Panel == true
                          )
 {
    sMachine_46zzqqzz                                                                                    (     42 ) ; /* 1 */
                          {
                //* Change to mode EXTEND
                            variables::ushort_Mode = 2U ;
                          }
 }                                                                                                   
else                                                                                                
  sMachine_46zzqqzz                                                                                    (     43 ) ; /* 4 */
                      }
    sMachine_46zzqqzz                                                                                    (     44 ) ; /* 3 */
 }
                    else
 {                                                                                                    ;
sMachine_46zzqqzz                                                                                    (     45 ); /* 2 */
                      {
                        if
                          (
                          variables::ushort_Mode == 3U
                          )
 {
    sMachine_46zzqqzz                                                                                    (     46 ) ; /* 1 */
                          {
            //*Mode PANEL OPEN
                            if
                              (
                              variables::b_Panel == false
                              )
 {
    sMachine_46zzqqzz                                                                                    (     47 ) ; /* 1 */
                              {
                //*Change to mode RETRACT
                                variables::ushort_Mode = 4U ;
                                cout << "PANEL OPEN" ;
                              }
 }                                                                                                   
else                                                                                                
  sMachine_46zzqqzz                                                                                    (     48 ) ; /* 4 */
                          }
    sMachine_46zzqqzz                                                                                    (     49 ) ; /* 3 */
 }
                        else
 {                                                                                                    ;
sMachine_46zzqqzz                                                                                    (     50 ); /* 2 */
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
    sMachine_46zzqqzz                                                                                    (     51 ) ; /* 3 */
 }
        else
 {                                                                                                    ;
sMachine_46zzqqzz                                                                                    (     52 ); /* 2 */
          {
            if
              (
              variables::ushort_State == 1U
              )
 {
    sMachine_46zzqqzz                                                                                    (     53 ) ; /* 1 */
              {
                if
                  (
                  variables::b_On == true
                  )
 {
    sMachine_46zzqqzz                                                                                    (     54 ) ; /* 1 */
                  {
                  /*Change State to IBIT*/
                    variables::ushort_State = 2U ;
                    variables::ushort_timeCount = 0U ;
                  }
 }                                                                                                   
else                                                                                                
  sMachine_46zzqqzz                                                                                    (     55 ) ; /* 4 */
                if
                  (
                  variables::b_Shutdown == true
                  )
 {
    sMachine_46zzqqzz                                                                                    (     56 ) ; /* 1 */
                  {
                    std::cout << "|SHUTDOWN|" ;
                  }
 }                                                                                                   
else                                                                                                
  sMachine_46zzqqzz                                                                                    (     57 ) ; /* 4 */
              }
    sMachine_46zzqqzz                                                                                    (     58 ) ; /* 3 */
 }
            else
 {                                                                                                    ;
sMachine_46zzqqzz                                                                                    (     59 ); /* 2 */
              {
                if
                  (
                  variables::ushort_State == 2U
                  )
 {
    sMachine_46zzqqzz                                                                                    (     60 ) ; /* 1 */
                  {
                    if
                      (
                      variables::ushort_Power <= 200U
                      )
 {
    sMachine_46zzqqzz                                                                                    (     61 ) ; /* 1 */
                      {
                      /*Change State to EMERGENCY*/
                        variables::ushort_State = 9U ;
                      }
    sMachine_46zzqqzz                                                                                    (     62 ) ; /* 3 */
 }
                    else
 {                                                                                                    ;
sMachine_46zzqqzz                                                                                    (     63 ); /* 2 */
                      {
                        if
                          (
                          variables::ushort_Power <= 500U
                          )
 {
    sMachine_46zzqqzz                                                                                    (     64 ) ; /* 1 */
                          {
                          /*Change State to FAIL*/
                            variables::ushort_State = 3U ;
                          }
    sMachine_46zzqqzz                                                                                    (     65 ) ; /* 3 */
 }
                        else
 {                                                                                                    ;
sMachine_46zzqqzz                                                                                    (     66 ); /* 2 */
                          {
                            variables::ushort_timeCount ++ ;
                            if
                              (
                              variables::ushort_timeCount > 5U
                              )
 {
    sMachine_46zzqqzz                                                                                    (     67 ) ; /* 1 */
                              {
                              /*Change State to READY*/
                                variables::ushort_State = 4U ;
                              }
 }                                                                                                   
else                                                                                                
  sMachine_46zzqqzz                                                                                    (     68 ) ; /* 4 */
                          }
 }
                      }
 }
                  }
    sMachine_46zzqqzz                                                                                    (     69 ) ; /* 3 */
 }
                else
 {                                                                                                    ;
sMachine_46zzqqzz                                                                                    (     70 ); /* 2 */
                  {
                    if
                      (
                      variables::ushort_State == 3U
                      )
 {
    sMachine_46zzqqzz                                                                                    (     71 ) ; /* 1 */
                      {
                      /*Change State to OPERATIONAL REDUCED*/
                        variables::ushort_State = 7U ;
                        variables::ushort_Mode = 1U ;
                        variables::b_Fail = true ;
                        cout << "REDUCED MODE" ;
                      }
    sMachine_46zzqqzz                                                                                    (     72 ) ; /* 3 */
 }
                    else
 {                                                                                                    ;
sMachine_46zzqqzz                                                                                    (     73 ); /* 2 */
                      {
                        if
                          (
                          variables::ushort_State == 4U
                          )
 {
    sMachine_46zzqqzz                                                                                    (     74 ) ; /* 1 */
                          {
                            if
                              (
                              variables::b_Maintenance == true
                              )
 {
    sMachine_46zzqqzz                                                                                    (     75 ) ; /* 1 */
                              {
                              /*Change State to MAINTENANCE*/
                                variables::ushort_State = 6U ;
                              }
    sMachine_46zzqqzz                                                                                    (     76 ) ; /* 3 */
 }
                            else
 {                                                                                                    ;
sMachine_46zzqqzz                                                                                    (     77 ); /* 2 */
                              {
                              /*Change State to Operational*/
                                variables::ushort_State = 7U ;
                              }
 }
                          }
    sMachine_46zzqqzz                                                                                    (     78 ) ; /* 3 */
 }
                        else
 {                                                                                                    ;
sMachine_46zzqqzz                                                                                    (     79 ); /* 2 */
                          {
                            if
                              (
                              variables::ushort_State == 6U
                              )
 {
    sMachine_46zzqqzz                                                                                    (     80 ) ; /* 1 */
                              {
                              /*State MAINTENANCE*/
                              }
 }                                                                                                   
else                                                                                                
  sMachine_46zzqqzz                                                                                    (     81 ) ; /* 4 */
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
    sMachine_46zzqqzz                                                                                    (      82 ) ; /* 30 */  
  }
#define qqqbranches     82
#define QQQMAXMCDCSIZE      2
#define ldra_fprintf                                                                                                                                                                                                                                                
#define ldra_sscanf                                                                                                                                                                                                                                                 
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
  /* uncompressed  bitmap */                                                                                                                                                                                                                                        
#define QQQFIXEDSIZE                                                                                                                                                                                                                                                
  static int qqqlast = 0;                                                                                                                                                                                                                                           
  static unsigned int bitmaparr[(qqqbranches/8)+1];                                                                                                                                                                                                                 
  /* Not single file */                                                                                                                                                                                                                                             
  static int qqupload_registered = 0;                                                                                                                                                                                                                               
  static int sMachine_46zqqzqz(qqnull_params);                                                                                                                                                                                                                      
  static int sMachine_46zqqzqz1(qqnull_params);                                                                                                                                                                                                                     
  static int sMachine_46zqfqzz (int qqqi);                                                                                                                                                                                                                          
    /* ----------------------------------------------------------------------* 179 *                                                                                                                                                                                
     *            Procedures                                                                                                                                                                                                                                        
     * -----------------------------------------------------------------------------                                                                                                                                                                                
     */                                                                                                                                                                                                                                                             
  /* ----------- zscanf ---------------------------------------------------* 180 *                                                                                                                                                                                  
   *        Returns an integer extracted from a string                                                                                                                                                                                                              
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int sMachine_46zscanf(char * qqscan_str)                                                                                                                                                                                                                   
  {                                                                                                                                                                                                                                                                 
    int qqvalue;                                                                                                                                                                                                                                                    
    int qqisign;                                                                                                                                                                                                                                                    
    char * qqcptr;                                                                                                                                                                                                                                                  
    qqvalue = 0;                                                                                                                                                                                                                                                    
    qqisign = 1;                                                                                                                                                                                                                                                    
    qqcptr  = qqscan_str;                                                                                                                                                                                                                                           
    /* Skip spaces */                                                                                                                                                                                                                                               
    while (qqcptr[0] == ' ')                                                                                                                                                                                                                                        
    {                                                                                                                                                                                                                                                               
      qqcptr++;                                                                                                                                                                                                                                                     
    }                                                                                                                                                                                                                                                               
    /* Check for a leading ---                                                                                                                                                                                                                                      
    */                                                                                                                                                                                                                                                              
    if (qqcptr[0] == '-')                                                                                                                                                                                                                                           
    {                                                                                                                                                                                                                                                               
      qqisign = -1;                                                                                                                                                                                                                                                 
      qqcptr++;                                                                                                                                                                                                                                                     
    }                                                                                                                                                                                                                                                               
    /* Extract digits */                                                                                                                                                                                                                                            
    while ((qqcptr[0] >= '0') && (qqcptr[0] <= '9'))                                                                                                                                                                                                                
    {                                                                                                                                                                                                                                                               
      qqvalue = 10 * qqvalue;                                                                                                                                                                                                                                       
      qqvalue = qqvalue + (qqcptr[0] - '0');                                                                                                                                                                                                                        
      qqcptr++;                                                                                                                                                                                                                                                     
    }                                                                                                                                                                                                                                                               
    qqvalue = qqisign * qqvalue;                                                                                                                                                                                                                                    
    return qqvalue;                                                                                                                                                                                                                                                 
  } /* End of zscanf */                                                                                                                                                                                                                                             
  static int qqswitchgetxx(qqnull_params)                                                                                                                                                                                                                           
  {                                                                                                                                                                                                                                                                 
    int ret = 0;                                                                                                                                                                                                                                                    
  ret = qqxxswitch;                                                                                                                                                                                                                                                 
  return ret;                                                                                                                                                                                                                                                       
  }                                                                                                                                                                                                                                                                 
  static int qqswitchgetyy(qqnull_params)                                                                                                                                                                                                                           
  {                                                                                                                                                                                                                                                                 
    int ret = 0;                                                                                                                                                                                                                                                    
  ret = qqyyswitch;                                                                                                                                                                                                                                                 
  return ret;                                                                                                                                                                                                                                                       
  }                                                                                                                                                                                                                                                                 
  /* ----------------------------------------------------------------------* 181 *                                                                                                                                                                                  
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
  /* ----------------------------------------------------------------------* 182 *                                                                                                                                                                                  
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
  /* ----------------------------------------------------------------------* 183 *                                                                                                                                                                                  
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
  /* ----------------------------------------------------------------------* 186 *                                                                                                                                                                                  
   *    C System utilities in use:                                                                                                                                                                                                                                  
   *        fprintf                                                                                                                                                                                                                                                 
   *        fclose                                                                                                                                                                                                                                                  
   *        sscanf                                                                                                                                                                                                                                                  
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 189 *                                                                                                                                                                                  
   *            qqoutput* suite                                                                                                                                                                                                                                     
   *      Main output routines. These may require modification.                                                                                                                                                                                                     
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 190 *                                                                                                                                                                                  
   *            qqoutput                                                                                                                                                                                                                                            
   *    This is the principle output routine.                                                                                                                                                                                                                       
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
    static void qqoutput(FILEPOINT char * s,int i)                                                                                                                                                                                                                  
  /* f - file pointer, s - format string, i - integer for probe value */                                                                                                                                                                                            
  {                                                                                                                                                                                                                                                                 
    /* printing to a file */                                                                                                                                                                                                                                        
    char outline[30] = "";                                                                                                                                                                                                                                          
    sprintf(outline,s,i);                                                                                                                                                                                                                                           
    fwrite(outline,13,1,f);                                                                                                                                                                                                                                         
  } /* end of qqoutput */                                                                                                                                                                                                                                           
    /* ----------------------------------------------------------------------* 191 *                                                                                                                                                                                
     *            qqoutput0                                                                                                                                                                                                                                         
     * -----------------------------------------------------------------------------                                                                                                                                                                                
     */                                                                                                                                                                                                                                                             
    static void qqoutput0(FILEPOINT char * s)                                                                                                                                                                                                                       
    {                                                                                                                                                                                                                                                               
      char outline[30] = "";                                                                                                                                                                                                                                        
      sprintf(outline,s);                                                                                                                                                                                                                                           
      fwrite(outline,13,1,f);                                                                                                                                                                                                                                       
    } /* end of qqoutput0 */                                                                                                                                                                                                                                        
  /* ----------------------------------------------------------------------* 192 *                                                                                                                                                                                  
   *            qqoutput2                                                                                                                                                                                                                                           
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
    static void qqoutput2(FILEPOINT char * s,int i, int j)                                                                                                                                                                                                          
  {                                                                                                                                                                                                                                                                 
    char outline[30] = "";                                                                                                                                                                                                                                          
    sprintf(outline,s,i,j);                                                                                                                                                                                                                                         
    fwrite(outline,13,1,f);                                                                                                                                                                                                                                         
  } /* end of qqoutput2 */                                                                                                                                                                                                                                          
  /* ----------------------------------------------------------------------* 193 *                                                                                                                                                                                  
   *            qqoutput3                                                                                                                                                                                                                                           
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
    static void qqoutput3(FILEPOINT char * s,int i,int j,int k)                                                                                                                                                                                                     
  {                                                                                                                                                                                                                                                                 
    char outline[30] = "";                                                                                                                                                                                                                                          
    sprintf(outline,s,i,j,k);                                                                                                                                                                                                                                       
    fwrite(outline,13,1,f);                                                                                                                                                                                                                                         
  } /* end of qqoutput3 */                                                                                                                                                                                                                                          
  /* ----------------------------------------------------------------------* 194 *                                                                                                                                                                                  
   *            qqoutput4                                                                                                                                                                                                                                           
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static void qqoutput4(FILEPOINT char * s,int i,int j,int k,int l)                                                                                                                                                                                                 
  {                                                                                                                                                                                                                                                                 
    char outline[30] = "";                                                                                                                                                                                                                                          
    sprintf(outline,s,i,j,k,l);                                                                                                                                                                                                                                     
    fwrite(outline,13,1,f);                                                                                                                                                                                                                                         
  } /* end of qqoutput4 */                                                                                                                                                                                                                                          
  /* ----------------------------------------------------------------------* 195 *                                                                                                                                                                                  
   *            end of qqoutput* suite                                                                                                                                                                                                                              
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 198 *                                                                                                                                                                                  
   *            qqqqinitialise                                                                                                                                                                                                                                      
   * This procedure initialises the structures for                                                                                                                                                                                                                  
   * compressed execution histories.                                                                                                                                                                                                                                
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static void qqqqinitialise(int ii)                                                                                                                                                                                                                                
  {                                                                                                                                                                                                                                                                 
    unsigned int i;                                                                                                                                                                                                                                                 
    /* First time through. */                                                                                                                                                                                                                                       
    /* bitmap */                                                                                                                                                                                                                                                    
    for (i=0;i<(qqqbranches/8)+1;i++)                                                                                                                                                                                                                               
    {                                                                                                                                                                                                                                                               
      bitmaparr[i] = 0;                                                                                                                                                                                                                                             
    }                                                                                                                                                                                                                                                               
    /* And so we don't optimise qqqupload() away */                                                                                                                                                                                                                 
    if (bitmaparr[0] != 0)                                                                                                                                                                                                                                          
    {                                                                                                                                                                                                                                                               
      qqqupload();                                                                                                                                                                                                                                                  
      upload_execution_history();                                                                                                                                                                                                                                   
    }                                                                                                                                                                                                                                                               
    /* bitmap separate */                                                                                                                                                                                                                                           
    qqqlast = 1; /* stops qqfun() calling initialise again */                                                                                                                                                                                                       
    /* bitmap */                                                                                                                                                                                                                                                    
  } /* end of qqqqinitialise */                                                                                                                                                                                                                                     
#undef QQQTEMP1                                                                                                                                                                                                                                                     
#define QQQTEMP1                                                                                                                                                                                                                                                    
  /* ----------- zqqzqz ---------------------------------------------------* 285 *                                                                                                                                                                                  
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 287 *                                                                                                                                                                                  
   * This routine opens the execution history file. It is instrumented at the                                                                                                                                                                                       
   * start of the main program if one exists in the file. In general this is                                                                                                                                                                                        
   * superceded by sMachine_46zqqzqz1 below.                                                                                                                                                                                                                        
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int sMachine_46zqqzqz(qqnull_params)                                                                                                                                                                                                                       
  {                                                                                                                                                                                                                                                                 
    if ( sMachine_46zzopen != 1 )                                                                                                                                                                                                                                   
    {                                                                                                                                                                                                                                                               
      /* ----------------------------------------------------------------------* 288 *                                                                                                                                                                              
       *    The following text may be uncommented if the file must be opened                                                                                                                                                                                        
       * -----------------------------------------------------------------------------                                                                                                                                                                              
       */                                                                                                                                                                                                                                                           
      /* ----------------------------------------------------------------------* 289 *                                                                                                                                                                              
      if ( sMachine_46zzopen == 0 )                                                                                                                                                                                                                                 
      {                                                                                                                                                                                                                                                             
        sMachine_46zzhfil =                                                                                                                                                                                                                                         
                 fopen( "sMachine_46.exh","w");                                                                                                                                                                                                                     
      }                                                                                                                                                                                                                                                             
      else                                                                                                                                                                                                                                                          
      {                                                                                                                                                                                                                                                             
        sMachine_46zzhfil =                                                                                                                                                                                                                                         
                 fopen( "sMachine_46.exh","a");                                                                                                                                                                                                                     
      }                                                                                                                                                                                                                                                             
       * -----------------------------------------------------------------------------                                                                                                                                                                              
       */                                                                                                                                                                                                                                                           
      sMachine_46zzopen = 1;                                                                                                                                                                                                                                        
    }                                                                                                                                                                                                                                                               
    return(1);                                                                                                                                                                                                                                                      
  }                                                                                                                                                                                                                                                                 
  /* ----------- zqqzqz1 --------------------------------------------------* 291 *                                                                                                                                                                                  
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 293 *                                                                                                                                                                                  
   * This routine also opens the execution history file.  It is called                                                                                                                                                                                              
   * automatically if a probe fires and the execution history is not already                                                                                                                                                                                        
   * opened (sMachine_46zzopen = 0 ).                                                                                                                                                                                                                               
   * Because this always works ( it was intended for files with no main program                                                                                                                                                                                     
   * it is now the de facto common way to open the execution history.                                                                                                                                                                                               
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int sMachine_46zqqzqz1(qqnull_params)                                                                                                                                                                                                                      
  {                                                                                                                                                                                                                                                                 
    if ( sMachine_46zzopen != 1 )                                                                                                                                                                                                                                   
    {                                                                                                                                                                                                                                                               
      if ( sMachine_46zzopen == 0 )                                                                                                                                                                                                                                 
      {                                                                                                                                                                                                                                                             
        sMachine_46zzhfil =                                                                                                                                                                                                                                         
             fopen( "sMachine_46.exh","w");  /* 12 */                                                                                                                                                                                                               
      }                                                                                                                                                                                                                                                             
      else                                                                                                                                                                                                                                                          
      {                                                                                                                                                                                                                                                             
          sMachine_46zzhfil =                                                                                                                                                                                                                                       
               fopen( "sMachine_46.exh","a");  /* 13 */                                                                                                                                                                                                             
      }                                                                                                                                                                                                                                                             
      qqqqinitialise(0);                                                                                                                                                                                                                                            
      sMachine_46zzopen = 1;                                                                                                                                                                                                                                        
    }                                                                                                                                                                                                                                                               
    return(1);                                                                                                                                                                                                                                                      
  }                                                                                                                                                                                                                                                                 
  /* ----------- zzqqzz ---------------------------------------------------* 297 *                                                                                                                                                                                  
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 299 *                                                                                                                                                                                  
   *            This is the routine which usually puts an integer into                                                                                                                                                                                              
   * the execution history file and returns unity.                                                                                                                                                                                                                  
   * This routine is the primary routine for gathering                                                                                                                                                                                                              
   * the execution history. Note that the last entry                                                                                                                                                                                                                
   * is usually inserted by sMachine_46zqzqzq.                                                                                                                                                                                                                      
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int sMachine_46zzqqzz(int qqqi)                                                                                                                                                                                                                            
  {                                                                                                                                                                                                                                                                 
    if ( qqswitchgetxx () == 0 )                                                                                                                                                                                                                                    
    {                                                                                                                                                                                                                                                               
    if ( sMachine_46zzopen != 1 )                                                                                                                                                                                                                                   
    {                                                                                                                                                                                                                                                               
      sMachine_46zqqzqz1();                                                                                                                                                                                                                                         
    }                                                                                                                                                                                                                                                               
    if ( sMachine_46zzopen )                                                                                                                                                                                                                                        
    {                                                                                                                                                                                                                                                               
      /* bitmap   */                                                                                                                                                                                                                                                
      if ( qqqi > 0 )                                                                                                                                                                                                                                               
      {                                                                                                                                                                                                                                                             
         /* Standard probe */                                                                                                                                                                                                                                       
        bitmaparr[((qqqi-1) >> 3)] |= (1<<((qqqi-1) & 0x07));                                                                                                                                                                                                       
      }                                                                                                                                                                                                                                                             
      else                                                                                                                                                                                                                                                          
      {                                                                                                                                                                                                                                                             
      }                                                                                                                                                                                                                                                             
    }                                                                                                                                                                                                                                                               
  }                                                                                                                                                                                                                                                                 
    return(1);                                                                                                                                                                                                                                                      
  } /* End of zzqqzz */                                                                                                                                                                                                                                             
  /* ----------- zqendz ---------------------------------------------------* 306 *                                                                                                                                                                                  
   * This routine is called on exiting a routine in a                                                                                                                                                                                                               
   * module. It closes the execution history.                                                                                                                                                                                                                       
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
static int sMachine_46zqendz(int qqqi)                                                                                                                                                                                                                              
  {                                                                                                                                                                                                                                                                 
  if ( qqswitchgetxx () == 0 )                                                                                                                                                                                                                                      
    {                                                                                                                                                                                                                                                               
      if ( sMachine_46zzopen != 1 )                                                                                                                                                                                                                                 
      {                                                                                                                                                                                                                                                             
        sMachine_46zqqzqz1();                                                                                                                                                                                                                                       
      }                                                                                                                                                                                                                                                             
      /* ----------------------------------------------------------------------* 307 *                                                                                                                                                                              
       * this is the one which puts an integer into                                                                                                                                                                                                                 
       * the execution history file and returns unity.                                                                                                                                                                                                              
       * The format of each field consists of six columns,                                                                                                                                                                                                          
       * the number is right justified in this field.                                                                                                                                                                                                               
       * -----------------------------------------------------------------------------                                                                                                                                                                              
       */                                                                                                                                                                                                                                                           
      if ( sMachine_46zzopen )                                                                                                                                                                                                                                      
      {                                                                                                                                                                                                                                                             
        /* uncompressed */                                                                                                                                                                                                                                          
        /* uncompressed unbuffered */                                                                                                                                                                                                                               
      /* uncompressed unbuffered bitmap  */                                                                                                                                                                                                                         
        if ( qqqi > 0 )                                                                                                                                                                                                                                             
        {                                                                                                                                                                                                                                                           
          bitmaparr[((qqqi-1) >> 3)] |= (1<<((qqqi-1) & 0x07));                                                                                                                                                                                                     
        }                                                                                                                                                                                                                                                           
        else                                                                                                                                                                                                                                                        
        {                                                                                                                                                                                                                                                           
        }                                                                                                                                                                                                                                                           
      }                                                                                                                                                                                                                                                             
    }                                                                                                                                                                                                                                                               
    /* unbuffered nonsinglefile or mainfl */                                                                                                                                                                                                                        
    /* unbuffered (nonsinglefile or mainfl) bitmap */                                                                                                                                                                                                               
    /* upload the bit map after inserting final entry */                                                                                                                                                                                                            
    if ( qqqi > 0 )                                                                                                                                                                                                                                                 
    {                                                                                                                                                                                                                                                               
      bitmaparr[((qqqi-1) >> 3)] |= (1<<((qqqi-1) & 0x07));                                                                                                                                                                                                         
    }                                                                                                                                                                                                                                                               
    else                                                                                                                                                                                                                                                            
    {                                                                                                                                                                                                                                                               
    }                                                                                                                                                                                                                                                               
    /*  clear qqqlast for reentry */                                                                                                                                                                                                                                
  qqqlast = 0;                                                                                                                                                                                                                                                      
    /* If not using atexit to register the bitmap upload function must call upload function here */                                                                                                                                                                 
    if ( ! qqupload_registered )                                                                                                                                                                                                                                    
    {                                                                                                                                                                                                                                                               
      qqqupload();                                                                                                                                                                                                                                                  
    }                                                                                                                                                                                                                                                               
    /* ----------------------------------------------------------------------* 310 *                                                                                                                                                                                
     * fclose(sMachine_46zzhfil);                                                                                                                                                                                                                                   
     * sMachine_46zzopen = 0;                                                                                                                                                                                                                                       
     * -----------------------------------------------------------------------------                                                                                                                                                                                
     */                                                                                                                                                                                                                                                             
    return(1);                                                                                                                                                                                                                                                      
  } /* end of zqendz */                                                                                                                                                                                                                                             
                                                                                                                                                                                                                                                                    
/* Function that is invoked from a script to force upload of execution history */                                                                                                                                                                                   
#define UPLOAD_EXECUTION_HISTORY                                                                                                                                                                                                                                    
  static void upload_execution_history(qqnull_params) {                                                                                                                                                                                                             
    qqqupload();                                                                                                                                                                                                                                                    
    ldra_close();                                                                                                                                                                                                                                                   
  }                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                    
 /* ----------------------------------------------------------------------* 311 *                                                                                                                                                                                   
  *            qqqupload                                                                                                                                                                                                                                            
  * This routine loops through the stored bitmap and                                                                                                                                                                                                                
  * outputs it. It then uploads the stored mcdc.                                                                                                                                                                                                                    
  * -----------------------------------------------------------------------------                                                                                                                                                                                   
  */                                                                                                                                                                                                                                                                
  static void qqqupload(qqnull_params)                                                                                                                                                                                                                              
  {                                                                                                                                                                                                                                                                 
    int i;                                                                                                                                                                                                                                                          
    /* uncompressed  bitmap (!singlefile or mainfl) separate */                                                                                                                                                                                                     
  for (i=0;i<(qqqbranches/8)+1;i++)                                                                                                                                                                                                                                 
    {                                                                                                                                                                                                                                                               
      qqoutput(sMachine_46zzhfil,                                                                                                                                                                                                                                   
        "%8d\n", bitmaparr[i]);                                                                                                                                                                                                                                     
    }                                                                                                                                                                                                                                                               
     /* bitmap separate */                                                                                                                                                                                                                                          
    qqqlast = 1; /* stops qqfun() calling initialise again */                                                                                                                                                                                                       
    fclose(sMachine_46zzhfil);                                                                                                                                                                                                                                      
    sMachine_46zzopen = 2;                                                                                                                                                                                                                                          
  } /* End of qqqupload */                                                                                                                                                                                                                                          
  /* ----------- zqzqzq ---------------------------------------------------* 318 *                                                                                                                                                                                  
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 320 *                                                                                                                                                                                  
   * This routine should be called before the program                                                                                                                                                                                                               
   * terminates. It closes the execution history                                                                                                                                                                                                                    
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int sMachine_46zqzqzq(int qqqi)                                                                                                                                                                                                                            
  {                                                                                                                                                                                                                                                                 
  if ( qqswitchgetxx () == 0 )                                                                                                                                                                                                                                      
    {                                                                                                                                                                                                                                                               
      if ( sMachine_46zzopen != 1 )                                                                                                                                                                                                                                 
      {                                                                                                                                                                                                                                                             
        sMachine_46zqqzqz1();                                                                                                                                                                                                                                       
      }                                                                                                                                                                                                                                                             
      /* not compressed */                                                                                                                                                                                                                                          
      /* do nothing for bitmap*/                                                                                                                                                                                                                                    
      /* upload the history */                                                                                                                                                                                                                                      
      /* bitmap */                                                                                                                                                                                                                                                  
      /* uncompressed  bitmap */                                                                                                                                                                                                                                    
      sMachine_46zqendz(qqqi);                                                                                                                                                                                                                                      
        /* qqqupload closes the execution history file */                                                                                                                                                                                                           
    }                                                                                                                                                                                                                                                               
    return(1);                                                                                                                                                                                                                                                      
  } /* end of zqzqzq */                                                                                                                                                                                                                                             
  /*   the following routines should be left alone */                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 330 *                                                                                                                                                                                  
   *            sMachine_46zqfqzz                                                                                                                                                                                                                                   
   *        This routine is used for switches.                                                                                                                                                                                                                      
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int sMachine_46zqfqzz(int qqqi)                                                                                                                                                                                                                            
  {                                                                                                                                                                                                                                                                 
    if ( qqswitchgetxx () == 0 )                                                                                                                                                                                                                                    
      {                                                                                                                                                                                                                                                             
      int qqql;                                                                                                                                                                                                                                                     
      qqql = qqqi - 1;                                                                                                                                                                                                                                              
      sMachine_46zzqqzz(qqql);                                                                                                                                                                                                                                      
      sMachine_46zzqqzz(qqqi);                                                                                                                                                                                                                                      
    }                                                                                                                                                                                                                                                               
    return (1);                                                                                                                                                                                                                                                     
  } /* end of zqfqzz */                                                                                                                                                                                                                                             
  /* ----------------------------------------------------------------------* 331 *                                                                                                                                                                                  
   *            sMachine_46zzzqtz                                                                                                                                                                                                                                   
   * This routine captures the value of an expression                                                                                                                                                                                                               
   * and then returns a jump if the value is not 0.                                                                                                                                                                                                                 
   *                                                                                                                                                                                                                                                                
   *   qqqa - value of expression                                                                                                                                                                                                                                   
   *   qqqb - jump table index.                                                                                                                                                                                                                                     
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int sMachine_46zzzqtz(int qqqa, int qqqb)                                                                                                                                                                                                                  
  {                                                                                                                                                                                                                                                                 
  if ( qqswitchgetxx () == 0 )                                                                                                                                                                                                                                      
  {                                                                                                                                                                                                                                                                 
      if (qqqa)                                                                                                                                                                                                                                                     
      {                                                                                                                                                                                                                                                             
        sMachine_46zzqqzz(qqqb) ;                                                                                                                                                                                                                                   
      }                                                                                                                                                                                                                                                             
      else                                                                                                                                                                                                                                                          
      {                                                                                                                                                                                                                                                             
        /* straight on jump */                                                                                                                                                                                                                                      
        sMachine_46zzqqzz(qqqb-1);                                                                                                                                                                                                                                  
      }                                                                                                                                                                                                                                                             
    }                                                                                                                                                                                                                                                               
    return(qqqa);                                                                                                                                                                                                                                                   
  } /* end of zzzqtz */                                                                                                                                                                                                                                             
  /* ----------------------------------------------------------------------* 332 *                                                                                                                                                                                  
   *            sMachine_46zzzqfz                                                                                                                                                                                                                                   
   * This routine captures the value of an expression                                                                                                                                                                                                               
   * and then returns a jump if the value is 0.                                                                                                                                                                                                                     
   *                                                                                                                                                                                                                                                                
   *  qqqa - value of expression                                                                                                                                                                                                                                    
   *  qqqb - jump table index.                                                                                                                                                                                                                                      
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int sMachine_46zzzqfz(int qqqa,int qqqb)                                                                                                                                                                                                                   
  {                                                                                                                                                                                                                                                                 
  if ( qqswitchgetxx () == 0 )                                                                                                                                                                                                                                      
    {                                                                                                                                                                                                                                                               
      if (qqqa)                                                                                                                                                                                                                                                     
      {                                                                                                                                                                                                                                                             
        /* straight on jump */                                                                                                                                                                                                                                      
        sMachine_46zzqqzz(qqqb-1);                                                                                                                                                                                                                                  
        return(qqqa);                                                                                                                                                                                                                                               
      }                                                                                                                                                                                                                                                             
      else                                                                                                                                                                                                                                                          
      {                                                                                                                                                                                                                                                             
        sMachine_46zzqqzz(qqqb);                                                                                                                                                                                                                                    
      }                                                                                                                                                                                                                                                             
    }                                                                                                                                                                                                                                                               
    return(qqqa);                                                                                                                                                                                                                                                   
  } /* zzzqfz */                                                                                                                                                                                                                                                    
  /* ----------------------------------------------------------------------* 336 *                                                                                                                                                                                  
   *            swzzqqzz                                                                                                                                                                                                                                            
   *  The purpose of this routine is to handle empty cases in switch statements                                                                                                                                                                                     
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int swzzqqzz(int qqqi, int onoff)                                                                                                                                                                                                                          
  {                                                                                                                                                                                                                                                                 
  if ( qqqzzglobflag == 1 || onoff == 1)                                                                                                                                                                                                                            
  {                                                                                                                                                                                                                                                                 
    if ( sMachine_46zzopen != 1 )                                                                                                                                                                                                                                   
    {                                                                                                                                                                                                                                                               
      sMachine_46zqqzqz1();                                                                                                                                                                                                                                         
    }                                                                                                                                                                                                                                                               
    if ( sMachine_46zzopen )                                                                                                                                                                                                                                        
    {                                                                                                                                                                                                                                                               
      if ( qqqi > 0 )                                                                                                                                                                                                                                               
      {                                                                                                                                                                                                                                                             
        bitmaparr[((qqqi-1) >> 3)] |= (1<<((qqqi-1) & 0x07));                                                                                                                                                                                                       
      }                                                                                                                                                                                                                                                             
    }                                                                                                                                                                                                                                                               
    if ( qqqzzglobflag == 1 )                                                                                                                                                                                                                                       
    {                                                                                                                                                                                                                                                               
      qqqzzglobflag = 0;                                                                                                                                                                                                                                            
    }                                                                                                                                                                                                                                                               
    else                                                                                                                                                                                                                                                            
    {                                                                                                                                                                                                                                                               
      qqqzzglobflag = 1;                                                                                                                                                                                                                                            
    }                                                                                                                                                                                                                                                               
  }                                                                                                                                                                                                                                                                 
    return(1);                                                                                                                                                                                                                                                      
  } /* end of swzzqqzz */                                                                                                                                                                                                                                           
                                                                                                                                                                                                                                                                    
/* END OF TESTBED INSTRUMENTATION */                                                                                                                                                                                                                                
 
