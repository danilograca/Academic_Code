/*
C TESTBED VERSION  : 9.5.1
FILE UNDER TEST  : "C:\_WorkSpace\Keil_Projects\Codigo Teste Placa E2294\Arm\CAN\main.c"
DATE OF ANALYSIS : Mon Mar 21 17:00:27 2016
*/
 
#include <LPC22xx.H>
#include <primitivetypes.h>
#include <init.h>
#include <global.h>
#include <LdraTest.h>
#undef QQQdialect 
#undef QQQ146
#undef QQQ148
#undef QQQbndchk
#undef QQQ294
#undef QQQEMBEDDEDICE
 /* Note: for BITMAP execution histories QQQthreaded is not defined */
#undef QQQthreaded 
#define QQQdo178b
#undef QQQfixbra
#define QQQswitch3
#undef QQQternary
#undef QQQswitch
#undef QQQmacrof
#undef QQQMULTIPROCESSEXH
#undef QQFLUSH
#undef QQNEWBS
#define qqqMaxBranchDepth     20
#undef QQQstructbitmap
 static int zzfileid =     44;
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
#define QQQSINGLEFILE
#define QQQFILEID
#define QQQseparate
int QQQindicator=0;
int QQQfirstmcdc=1;
#define main_44zzopen                                                                                         zzopen
 int main_44zzopen                                                                                        = 0;
#define main_44zqqzqz1                                                                                        zqqzqz1
#define QQQLDRA_PORT 
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
#define QQQHITMAP_STORAGE                                                                                                                                                                                                                                           
#undef qqnull_params                                                                                                                                                                                                                                                
#define qqnull_params void                                                                                                                                                                                                                                          
#define QQQ_PROTOTYPE_DEF                                                                                                                                                                                                                                           
  /* Conventional Instrumentation */                                                                                                                                                                                                                                
#undef QQ_ANSI_PROTOTYPE                                                                                                                                                                                                                                            
#ifdef __STDC__                                                                                                                                                                                                                                                     
#define QQ_ANSI_PROTOTYPE 1                                                                                                                                                                                                                                         
#else                                                                                                                                                                                                                                                               
#ifdef VAXC                                                                                                                                                                                                                                                         
#define QQ_ANSI_PROTOTYPE 1                                                                                                                                                                                                                                         
#endif  /* VAXC */                                                                                                                                                                                                                                                  
#endif  /* __STDC__ */                                                                                                                                                                                                                                              
#define QQQnumfil LDRA_MAX_INSTRUMENTED_FILES                                                                                                                                                                                                                       
  static unsigned char qqqzzglobflag = 0;                                                                                                                                                                                                                           
  static void qqoutput(FILEPOINT char * s,int i);                                                                                                                                                                                                                   
  static void qqoutput2(FILEPOINT char * s,int i, int j);                                                                                                                                                                                                           
  static void qqoutput3(FILEPOINT char * s,int i,int j,int k);                                                                                                                                                                                                      
  static void qqoutput4(FILEPOINT char * s,int i,int j,int k,int l);                                                                                                                                                                                                
  static void qqoutput0(FILEPOINT char * s);                                                                                                                                                                                                                        
  static int swzzqqzz (int qqqi, int onoff);                                                                                                                                                                                                                        
  int main_44zqqzqz(qqnull_params);                                                                                                                                                                                                                                 
  int main_44zqqzqz1(qqnull_params);                                                                                                                                                                                                                                
  static int main_44zzqqzz (int qqqi);                                                                                                                                                                                                                              
  static int main_44zqendz (int qqqi);                                                                                                                                                                                                                              
  static int main_44zqzqzq (int qqqi);                                                                                                                                                                                                                              
  static int main_44zzzqtz (int qqqa, int qqqb);                                                                                                                                                                                                                    
  static int main_44zzzqfz (int qqqa, int qqqb);                                                                                                                                                                                                                    
  static int main_44zzdo17 (int dummy,int a, int b);                                                                                                                                                                                                                
  void main_44zzdump (qqnull_params) ;                                                                                                                                                                                                                              
  void main_44zzzfun(int i);                                                                                                                                                                                                                                        
  void qqqupload (qqnull_params);                                                                                                                                                                                                                                   
  void upload_execution_history(qqnull_params);                                                                                                                                                                                                                     
/* ------------------------------ END OF TESTBED PROTOTYPES -------------------------------- */                                                                                                                                                                     
 
bool_t
  b_On ;
 
bool_t
  b_Fail ;
 
bool_t
  b_Panel ;
 
bool_t
  b_Shutdown ;
 
bool_t
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
 
void
  led()
  {
   int imain_44zzqqzz                                                                                       
 = main_44zzqqzz                                                                                        (       1 ) ; /* 37 */
    volatile static char
      x = 0 ;
    if
 (  /* 50 */
      (
      
  main_44zzdo17                                                                                        (    0,  /*  81 */ 
      
  main_44zzzqfz                                                                                        (     /*  52 */ 
      (
      ( flaggeral & 4 ) == 4
      )
   ? main_44zzdo17                                                                                       (    1, 1,      5) : 
main_44zzdo17                                                                                       (    1, 0,      5) ,       3  )  /*  54 */
      &&
      
  main_44zzdo17                                                                                        (    2, /*  72 */ 
      ( x == 1
      )
  ? 1 : 0  ,       7  )  /*  73 */
  ? 1 : 0  ,       9  )  /*  82 */
      )
  ) /* 1 */
 {
    main_44zzqqzz                                                                                        (     10 ) ; /* 1 */
      {
        flaggeral &= 0xFB ;
        x = 0 ;
        IO0SET = 0x00000004 ; // Turn on LED
      }
 }                                                                                                   
else                                                                                                
  main_44zzqqzz                                                                                        (     11 ) ; /* 4 */
    if
 (  /* 50 */
      (
      
  main_44zzdo17                                                                                        (    0,  /*  81 */ 
      
  main_44zzzqfz                                                                                        (     /*  52 */ 
      (
      ( flaggeral & 4 ) == 4
      )
   ? main_44zzdo17                                                                                       (    1, 1,     15) : 
main_44zzdo17                                                                                       (    1, 0,     15) ,      13  )  /*  54 */
      &&
      
  main_44zzdo17                                                                                        (    2, /*  72 */ 
      ( x == 0
      )
  ? 1 : 0  ,      17  )  /*  73 */
  ? 1 : 0  ,      19  )  /*  82 */
      )
  ) /* 1 */
 {
    main_44zzqqzz                                                                                        (     20 ) ; /* 1 */
      {
        flaggeral &= 0xFB ;
        x = 1 ;
        IO0CLR = 0x00000004 ; // Turn on LED
      }
 }                                                                                                   
else                                                                                                
  main_44zzqqzz                                                                                        (     21 ) ; /* 4 */
    main_44zzqqzz                                                                                        (      22 ) ; /* 30 */  
  }
 
int
  main ( void )
  {
  int mainzz = main_44zqqzqz1                                                                                       (); /* 46 */
    static volatile uint16_t
      count = 0 ;
    static volatile uint64_t
      count1 = 0xFFFFFFFFFFFFFFFF ;
    static volatile uint32_t
      countID = 0 ;
    b_Fail = 0 ;
    ushort_Mode = 0U ;
    b_Panel = 0 ;
    sshort_Position = 0U ;
    ushort_State = 1U ;
    ushort_Power = 0U ;
    b_On = 0 ;
    b_Maintenance = 0 ;
    ushort_timeCount = 0U ;
    b_Shutdown = 0 ;
    hardware_init () ;
    IO0CLR = 0x00000400 ;    //Liga Backlight do LCD
    while
      (
 (  /* 21 */ 
      1
  )  /* 7 */
      )
      {
 { /* 32 */
  int zzqqzs = main_44zzqqzz                                                                                        (     23 ) ; /* 32a */
         //LdraTest();
 main_44zzqqzz                                                                                        (      24 ) ; /* 23 */
 
        led ( ) ;
        if
          (
          ushort_State == 9U
          )
 {
    main_44zzqqzz                                                                                        (     25 ) ; /* 1 */
          {
          /*EMERGENCY STATE*/
            ushort_State = 1U ;
            /*System on STANDBY*/
            b_On = 0 ;
          }
    main_44zzqqzz                                                                                        (     26 ) ; /* 3 */
 }
        else
 {                                                                                                    ;
main_44zzqqzz                                                                                        (     27 ); /* 2 */
          {
            if
              (
              ushort_State == 7U
              )
 {
    main_44zzqqzz                                                                                        (     28 ) ; /* 1 */
              {
                if
                  (
                  ushort_Mode == 2U
                  )
 {
    main_44zzqqzz                                                                                        (     29 ) ; /* 1 */
                  {
                    if
                      (
                      b_Fail == 1
                      )
 {
    main_44zzqqzz                                                                                        (     30 ) ; /* 1 */
                      {
                // Mode EXTEND on REDUCED STATE
                        sshort_Position += 1U ;
                      }
    main_44zzqqzz                                                                                        (     31 ) ; /* 3 */
 }
                    else
 {                                                                                                    ;
main_44zzqqzz                                                                                        (     32 ); /* 2 */
                      {
                        sshort_Position += 2U ;
                      }
 }
                    if
                      (
                      sshort_Position > 20U
                      )
 {
    main_44zzqqzz                                                                                        (     33 ) ; /* 1 */
                      {
                // Change to mode PANEL OPEN
                        ushort_Mode = 3U ;
                      }
 }                                                                                                   
else                                                                                                
  main_44zzqqzz                                                                                        (     34 ) ; /* 4 */
                  }
    main_44zzqqzz                                                                                        (     35 ) ; /* 3 */
 }
                else
 {                                                                                                    ;
main_44zzqqzz                                                                                        (     36 ); /* 2 */
                  {
                    if
                      (
                      ushort_Mode == 4U
                      )
 {
    main_44zzqqzz                                                                                        (     37 ) ; /* 1 */
                      {
                        if
                          (
                          b_Fail == 1
                          )
 {
    main_44zzqqzz                                                                                        (     38 ) ; /* 1 */
                          {
                // Mode RETRACT
                            sshort_Position -= 1U ;
                          }
    main_44zzqqzz                                                                                        (     39 ) ; /* 3 */
 }
                        else
 {                                                                                                    ;
main_44zzqqzz                                                                                        (     40 ); /* 2 */
                          {
             // Mode RETRACT
                            sshort_Position -= 2U ;
                          }
 }
                        if
                          (
                          sshort_Position < 0
                          )
 {
    main_44zzqqzz                                                                                        (     41 ) ; /* 1 */
                          {
                //*Change to mode PANEL CLOSE
                            ushort_Mode = 1U ;
                          }
 }                                                                                                   
else                                                                                                
  main_44zzqqzz                                                                                        (     42 ) ; /* 4 */
                      }
    main_44zzqqzz                                                                                        (     43 ) ; /* 3 */
 }
                    else
 {                                                                                                    ;
main_44zzqqzz                                                                                        (     44 ); /* 2 */
                      {
                        if
                          (
                          ushort_Mode == 1U
                          )
 {
    main_44zzqqzz                                                                                        (     45 ) ; /* 1 */
                          {
            //* Mode PANEL CLOSE
                            if
                              (
                              b_Panel == 1
                              )
 {
    main_44zzqqzz                                                                                        (     46 ) ; /* 1 */
                              {
                //* Change to mode EXTEND
                                ushort_Mode = 2U ;
                              }
 }                                                                                                   
else                                                                                                
  main_44zzqqzz                                                                                        (     47 ) ; /* 4 */
                          }
    main_44zzqqzz                                                                                        (     48 ) ; /* 3 */
 }
                        else
 {                                                                                                    ;
main_44zzqqzz                                                                                        (     49 ); /* 2 */
                          {
                            if
                              (
                              ushort_Mode == 3U
                              )
 {
    main_44zzqqzz                                                                                        (     50 ) ; /* 1 */
                              {
            //*Mode PANEL OPEN
                                if
                                  (
                                  b_Panel == 0
                                  )
 {
    main_44zzqqzz                                                                                        (     51 ) ; /* 1 */
                                  {
                //*Change to mode RETRACT
                                    ushort_Mode = 4U ;
                                  }
 }                                                                                                   
else                                                                                                
  main_44zzqqzz                                                                                        (     52 ) ; /* 4 */
                              }
    main_44zzqqzz                                                                                        (     53 ) ; /* 3 */
 }
                            else
 {                                                                                                    ;
main_44zzqqzz                                                                                        (     54 ); /* 2 */
                              {
            // Mode SAFE SHUTDOWN
                                sshort_Position = 0U ;
                              }
 }
                          }
 }
                      }
 }
                  }
 }
              }
    main_44zzqqzz                                                                                        (     55 ) ; /* 3 */
 }
            else
 {                                                                                                    ;
main_44zzqqzz                                                                                        (     56 ); /* 2 */
              {
                if
                  (
                  ushort_State == 1U
                  )
 {
    main_44zzqqzz                                                                                        (     57 ) ; /* 1 */
                  {
                    if
                      (
                      b_On == 1
                      )
 {
    main_44zzqqzz                                                                                        (     58 ) ; /* 1 */
                      {
                      /*Change State to IBIT*/
                        ushort_State = 2U ;
                        ushort_timeCount = 0U ;
                      }
 }                                                                                                   
else                                                                                                
  main_44zzqqzz                                                                                        (     59 ) ; /* 4 */
                    if
                      (
                      b_Shutdown == 1
                      )
 {
    main_44zzqqzz                                                                                        (     60 ) ; /* 1 */
                      {
                      }
 }                                                                                                   
else                                                                                                
  main_44zzqqzz                                                                                        (     61 ) ; /* 4 */
                  }
    main_44zzqqzz                                                                                        (     62 ) ; /* 3 */
 }
                else
 {                                                                                                    ;
main_44zzqqzz                                                                                        (     63 ); /* 2 */
                  {
                    if
                      (
                      ushort_State == 2U
                      )
 {
    main_44zzqqzz                                                                                        (     64 ) ; /* 1 */
                      {
                        if
                          (
                          ushort_Power <= 200U
                          )
 {
    main_44zzqqzz                                                                                        (     65 ) ; /* 1 */
                          {
                          /*Change State to EMERGENCY*/
                            ushort_State = 9U ;
                          }
    main_44zzqqzz                                                                                        (     66 ) ; /* 3 */
 }
                        else
 {                                                                                                    ;
main_44zzqqzz                                                                                        (     67 ); /* 2 */
                          {
                            if
                              (
                              ushort_Power <= 500U
                              )
 {
    main_44zzqqzz                                                                                        (     68 ) ; /* 1 */
                              {
                              /*Change State to FAIL*/
                                ushort_State = 3U ;
                              }
    main_44zzqqzz                                                                                        (     69 ) ; /* 3 */
 }
                            else
 {                                                                                                    ;
main_44zzqqzz                                                                                        (     70 ); /* 2 */
                              {
                                ushort_timeCount ++ ;
                                if
                                  (
                                  ushort_timeCount > 5U
                                  )
 {
    main_44zzqqzz                                                                                        (     71 ) ; /* 1 */
                                  {
                                  /*Change State to READY*/
                                    ushort_State = 4U ;
                                  }
 }                                                                                                   
else                                                                                                
  main_44zzqqzz                                                                                        (     72 ) ; /* 4 */
                              }
 }
                          }
 }
                      }
    main_44zzqqzz                                                                                        (     73 ) ; /* 3 */
 }
                    else
 {                                                                                                    ;
main_44zzqqzz                                                                                        (     74 ); /* 2 */
                      {
                        if
                          (
                          ushort_State == 3U
                          )
 {
    main_44zzqqzz                                                                                        (     75 ) ; /* 1 */
                          {
                          /*Change State to OPERATIONAL REDUCED*/
                            ushort_State = 7U ;
                            ushort_Mode = 1U ;
                            b_Fail = 1 ;
                          }
    main_44zzqqzz                                                                                        (     76 ) ; /* 3 */
 }
                        else
 {                                                                                                    ;
main_44zzqqzz                                                                                        (     77 ); /* 2 */
                          {
                            if
                              (
                              ushort_State == 4U
                              )
 {
    main_44zzqqzz                                                                                        (     78 ) ; /* 1 */
                              {
                                if
                                  (
                                  b_Maintenance == 1
                                  )
 {
    main_44zzqqzz                                                                                        (     79 ) ; /* 1 */
                                  {
                                  /*Change State to MAINTENANCE*/
                                    ushort_State = 6U ;
                                  }
    main_44zzqqzz                                                                                        (     80 ) ; /* 3 */
 }
                                else
 {                                                                                                    ;
main_44zzqqzz                                                                                        (     81 ); /* 2 */
                                  {
                                  /*Change State to Operational*/
                                    ushort_State = 7U ;
                                  }
 }
                              }
    main_44zzqqzz                                                                                        (     82 ) ; /* 3 */
 }
                            else
 {                                                                                                    ;
main_44zzqqzz                                                                                        (     83 ); /* 2 */
                              {
                                if
                                  (
                                  ushort_State == 6U
                                  )
 {
    main_44zzqqzz                                                                                        (     84 ) ; /* 1 */
                                  {
                                  /*State MAINTENANCE*/
                                  }
 }                                                                                                   
else                                                                                                
  main_44zzqqzz                                                                                        (     85 ) ; /* 4 */
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
        if
          (
          ( flaggeral & 2 ) == 2
          )
 {
    main_44zzqqzz                                                                                        (     86 ) ; /* 1 */
          {
            flaggeral &= 0xFD ;
            while
              (
 (  /* 21 */ 
              ! ( C1SR & 0x00000004 )
  )  /* 7 */
              )
              {
 { /* 32 */
  int zzqqzs = main_44zzqqzz                                                                                        (     87 ) ; /* 32a */
    main_44zzqqzz                                                                                        (     88 ) ;} /* 6 */
              }                         //Verifica se Buffer esta livre para transmitir
    main_44zzqqzz                                                                                        (     89 ) ; /* 5 */
            C1TFI1 = 0x00020000 ;
                                //ID 11 Bits
            C1TID1 = 0x00000350 ;
                                //ID da mensagem
            C1TDA1 = count ;
            C1CMR = 0x00000001 ;
                               //Transmite a mensagem Self Reception
            while
              (
 (  /* 21 */ 
              ! ( C1SR & 0x00000004 )
  )  /* 7 */
              )
              {
 { /* 32 */
  int zzqqzs = main_44zzqqzz                                                                                        (     90 ) ; /* 32a */
    main_44zzqqzz                                                                                        (     91 ) ;} /* 6 */
              }                         //Verifica se Buffer esta livre para transmitir
    main_44zzqqzz                                                                                        (     92 ) ; /* 5 */
            C1TFI1 = 0x00020000 ;
                                //ID 11 Bits
            C1TID1 = 0x00000380 ;
                                //ID da mensagem
            C1TDA1 = count ;
            C1CMR = 0x00000001 ;
                               //Transmite a mensagem Self Reception
            while
              (
 (  /* 21 */ 
              ! ( C1SR & 0x00000004 )
  )  /* 7 */
              )
              {
 { /* 32 */
  int zzqqzs = main_44zzqqzz                                                                                        (     93 ) ; /* 32a */
    main_44zzqqzz                                                                                        (     94 ) ;} /* 6 */
              }                         //Verifica se Buffer esta livre para transmitir
    main_44zzqqzz                                                                                        (     95 ) ; /* 5 */
            C1TFI1 = 0x00020000 ;
                                //ID 11 Bits
            C1TID1 = 0x00000200 ;
                                //ID da mensagem
            C1TDA1 = count ;
            C1CMR = 0x00000001 ;
                               //Transmite a mensagem Self Reception
            while
              (
 (  /* 21 */ 
              ! ( C1SR & 0x00000004 )
  )  /* 7 */
              )
              {
 { /* 32 */
  int zzqqzs = main_44zzqqzz                                                                                        (     96 ) ; /* 32a */
    main_44zzqqzz                                                                                        (     97 ) ;} /* 6 */
              }                         //Verifica se Buffer esta livre para transmitir
    main_44zzqqzz                                                                                        (     98 ) ; /* 5 */
            C1TFI1 = 0x00020000 ;
                                //ID 11 Bits
            C1TID1 = 0x00000300 ;
                                //ID da mensagem
            C1TDA1 = count ;
            C1CMR = 0x00000001 ;
                               //Transmite a mensagem Self Reception
            while
              (
 (  /* 21 */ 
              ! ( C1SR & 0x00000004 )
  )  /* 7 */
              )
              {
 { /* 32 */
  int zzqqzs = main_44zzqqzz                                                                                        (     99 ) ; /* 32a */
    main_44zzqqzz                                                                                        (    100 ) ;} /* 6 */
              }                         //Verifica se Buffer esta livre para transmitir
    main_44zzqqzz                                                                                        (    101 ) ; /* 5 */
            C1TFI1 = 0x00020000 ;
                                //ID 11 Bits
            C1TID1 = 0x00000340 ;
                                //ID da mensagem
            C1TDA1 = count ;
            C1CMR = 0x00000001 ;
            count ++ ;
          }
 }                                                                                                   
else                                                                                                
  main_44zzqqzz                                                                                        (    102 ) ; /* 4 */
    main_44zzqqzz                                                                                        (    103 ) ;} /* 6 */
      }
    main_44zzqqzz                                                                                        (    104 ) ; /* 5 */
    main_44zqzqzq                                                                                        (     105 ) ; /* 34 */
  }
#define qqqbranches    105
#define QQQMAXMCDCSIZE     98
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
#define qqzzidfield 1                                                                                                                                                                                                                                               
    /* single file or fileid */                                                                                                                                                                                                                                     
    /* these have an extra field for the fileid */                                                                                                                                                                                                                  
    static char qqqqone[]   = "%6d%6d\n";           /* single point */                                                                                                                                                                                              
  /* MCDC nest level */                                                                                                                                                                                                                                             
  static int qqqmcdcnest = 0;                                                                                                                                                                                                                                       
  /* Temporary mcdc suppression when stack overflowed */                                                                                                                                                                                                            
  static int qqqmcdcsuppress = 0;                                                                                                                                                                                                                                   
#define QQQMCDCSTACKSIZE 200                                                                                                                                                                                                                                        
  /* uncompressed data structures */                                                                                                                                                                                                                                
  /* uncompressed  bitmap */                                                                                                                                                                                                                                        
#define QQQFIXEDSIZE                                                                                                                                                                                                                                                
  static int qqqlast = 0;                                                                                                                                                                                                                                           
  static int qqqlastmcdc = 0;                                                                                                                                                                                                                                       
  static int qqqstoreused=-1;                                                                                                                                                                                                                                       
  typedef struct qqqstacktag {                                                                                                                                                                                                                                      
                               int mcdctrace;                                                                                                                                                                                                                       
                               int mcdcstr;                                                                                                                                                                                                                         
                               int lastmcdc;                                                                                                                                                                                                                        
                             } * qqqstack;                                                                                                                                                                                                                          
  static struct qqqstacktag qqqmcdcstack[QQQMCDCSTACKSIZE];                                                                                                                                                                                                         
  static int aqqqmcdcstore[QQQMAXMCDCSIZE];                                                                                                                                                                                                                         
  static int aqqqmcdctrace[31];                                                                                                                                                                                                                                     
  static int paqqqmcdctrace = -1;                                                                                                                                                                                                                                   
  static int paqqqmcdctrace1 = -1; /* Start of range in mcdctrace */                                                                                                                                                                                                
  static int paqqqmcdcstr;                                                                                                                                                                                                                                          
#define qqqbranches1   (qqqbranches+1)                                                                                                                                                                                                                              
  static int aqqqmcdcstr[qqqbranches1];                                                                                                                                                                                                                             
  static unsigned int bitmaparr[(qqqbranches/8)+1];                                                                                                                                                                                                                 
  unsigned int * qqzzglobarrb[QQQnumfil]; /*a*/                                                                                                                                                                                                                     
  int * qqzzglobarrp[QQQnumfil];                                                                                                                                                                                                                                    
  int * qqzzglobarrs[QQQnumfil];                                                                                                                                                                                                                                    
  short qqzzglobmax[QQQnumfil];                                                                                                                                                                                                                                     
  short qqzzglobbrns[QQQnumfil];                                                                                                                                                                                                                                    
  short qqzzglobfileid[QQQnumfil];                                                                                                                                                                                                                                  
  int qqupload_registered = 0;                                                                                                                                                                                                                                      
  int main_44zqqzqz(qqnull_params);                                                                                                                                                                                                                                 
  int main_44zqqzqz1(qqnull_params);                                                                                                                                                                                                                                
    /* ----------------------------------------------------------------------* 179 *                                                                                                                                                                                
     *            Procedures                                                                                                                                                                                                                                        
     * -----------------------------------------------------------------------------                                                                                                                                                                                
     */                                                                                                                                                                                                                                                             
  /* ----------- zscanf ---------------------------------------------------* 180 *                                                                                                                                                                                  
   *        Returns an integer extracted from a string                                                                                                                                                                                                              
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int main_44zscanf(char * qqscan_str)                                                                                                                                                                                                                       
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
    /* fprintf exists, not threaded */                                                                                                                                                                                                                              
    /* fprintf exists, not threaded, ( SINGLEFILE or FILEID ) */                                                                                                                                                                                                    
    ldra_sprintf2 (&ldra_buffer[0], s,i,zzfileid);                                                                                                                                                                                                                  
    ldra_port_write (&ldra_buffer[0]);                                                                                                                                                                                                                              
  } /* end of qqoutput */                                                                                                                                                                                                                                           
    /* ----------------------------------------------------------------------* 191 *                                                                                                                                                                                
     *            qqoutput0                                                                                                                                                                                                                                         
     * -----------------------------------------------------------------------------                                                                                                                                                                                
     */                                                                                                                                                                                                                                                             
    static void qqoutput0(FILEPOINT char * s)                                                                                                                                                                                                                       
    {                                                                                                                                                                                                                                                               
      ldra_port_write(s);                                                                                                                                                                                                                                           
    } /* end of qqoutput0 */                                                                                                                                                                                                                                        
  /* ----------------------------------------------------------------------* 192 *                                                                                                                                                                                  
   *            qqoutput2                                                                                                                                                                                                                                           
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
    static void qqoutput2(FILEPOINT char * s,int i, int j)                                                                                                                                                                                                          
  {                                                                                                                                                                                                                                                                 
    ldra_sprintf2 (&ldra_buffer[0], s, i, j);                                                                                                                                                                                                                       
    ldra_port_write (&ldra_buffer[0]);                                                                                                                                                                                                                              
  } /* end of qqoutput2 */                                                                                                                                                                                                                                          
  /* ----------------------------------------------------------------------* 193 *                                                                                                                                                                                  
   *            qqoutput3                                                                                                                                                                                                                                           
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
    static void qqoutput3(FILEPOINT char * s,int i,int j,int k)                                                                                                                                                                                                     
  {                                                                                                                                                                                                                                                                 
    ldra_sprintf3 (&ldra_buffer[0], s, i, j, k);                                                                                                                                                                                                                    
    ldra_port_write (&ldra_buffer[0]);                                                                                                                                                                                                                              
  } /* end of qqoutput3 */                                                                                                                                                                                                                                          
  /* ----------------------------------------------------------------------* 194 *                                                                                                                                                                                  
   *            qqoutput4                                                                                                                                                                                                                                           
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static void qqoutput4(FILEPOINT char * s,int i,int j,int k,int l)                                                                                                                                                                                                 
  {                                                                                                                                                                                                                                                                 
    ldra_sprintf4 (&ldra_buffer[0], s, i, j, k, l);                                                                                                                                                                                                                 
    ldra_port_write (&ldra_buffer[0]);                                                                                                                                                                                                                              
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
    qqqstoreused = -1;                                                                                                                                                                                                                                              
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
    for (i=0;i<qqqbranches1;i++)                                                                                                                                                                                                                                    
    {                                                                                                                                                                                                                                                               
      aqqqmcdcstr[i] = (-1);                                                                                                                                                                                                                                        
    }                                                                                                                                                                                                                                                               
    /* bitmap */                                                                                                                                                                                                                                                    
    /* bitmap singlefile */                                                                                                                                                                                                                                         
    /* bitmap singlefile mainfl */                                                                                                                                                                                                                                  
    for (i=0;i<QQQnumfil;i++)                                                                                                                                                                                                                                       
    {                                                                                                                                                                                                                                                               
      qqzzglobarrp[i] = (int *)0;/*1*/                                                                                                                                                                                                                              
    }                                                                                                                                                                                                                                                               
    qqzzglobarrb[0] = &bitmaparr[0];/*a*/                                                                                                                                                                                                                           
    qqzzglobarrp[0] = &aqqqmcdcstr[0];                                                                                                                                                                                                                              
    qqzzglobarrs[0] = &aqqqmcdcstore[0];                                                                                                                                                                                                                            
    qqzzglobmax[0]  = QQQMAXMCDCSIZE;                                                                                                                                                                                                                               
    qqzzglobbrns[0] = qqqbranches;                                                                                                                                                                                                                                  
    qqzzglobfileid[0] = (0,zzfileid); /* deliberate */                                                                                                                                                                                                              
  } /* end of qqqqinitialise */                                                                                                                                                                                                                                     
  /* ----------- zzzfun ---------------------------------------------------* 201 *                                                                                                                                                                                  
   *  This routine handles hitmap storage of execution histories: this                                                                                                                                                                                              
   *  includes MC/DC storage for default bitmap.                                                                                                                                                                                                                    
   *                                                                                                                                                                                                                                                                
   *  It should not be possible for qqqstoreused to exceed                                                                                                                                                                                                          
   *  QQQMAXMCDCSIZE. However, it would be sensible to provide error                                                                                                                                                                                                
   *  traps at the marked locations if you are able to provide such                                                                                                                                                                                                 
   *  safety features.                                                                                                                                                                                                                                              
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  void main_44zzzfun(int ii)                                                                                                                                                                                                                                        
  {                                                                                                                                                                                                                                                                 
    int i;                                                                                                                                                                                                                                                          
    int iz;                                                                                                                                                                                                                                                         
    i = ii;                                                                                                                                                                                                                                                         
    if ( i <= 0 )                                                                                                                                                                                                                                                   
    {                                                                                                                                                                                                                                                               
      /* MC/DC entry */                                                                                                                                                                                                                                             
      if ( qqqlast == 0 && qqqlastmcdc == 0 )                                                                                                                                                                                                                       
      {                                                                                                                                                                                                                                                             
        qqqqinitialise(i);                                                                                                                                                                                                                                          
      }                                                                                                                                                                                                                                                             
      i = -i;                                                                                                                                                                                                                                                       
      if ( QQQfirstmcdc == 1 )                                                                                                                                                                                                                                      
      {                                                                                                                                                                                                                                                             
        /* ----------------------------------------------------------------------* 202 *                                                                                                                                                                            
         * This is the first entry for a particular expression.  The structure                                                                                                                                                                                      
         * stores the complete sequence for a given expression. Then each of the                                                                                                                                                                                    
         * different sequences are overlaid with the common ones from left to right.                                                                                                                                                                                
         * -----------------------------------------------------------------------------                                                                                                                                                                            
         */                                                                                                                                                                                                                                                         
        /* ----------------------------------------------------------------------* 203 *                                                                                                                                                                            
         *            tree model for the sequences:                                                                                                                                                                                                                 
         *    node1 node2 node4                                                                                                                                                                                                                                     
         *    node1 node2 node5                                                                                                                                                                                                                                     
         *    node1 node3 node6                                                                                                                                                                                                                                     
         *    node1 node3 node7                                                                                                                                                                                                                                     
         *        fill the upper path first. The tree                                                                                                                                                                                                               
         *        is not necessarily full.                                                                                                                                                                                                                          
         *                                                                                                                                                                                                                                                          
         *                  node4                                                                                                                                                                                                                                   
         *            node2                                                                                                                                                                                                                                         
         *                  node5                                                                                                                                                                                                                                   
         *    node1                                                                                                                                                                                                                                                 
         *                  node6                                                                                                                                                                                                                                   
         *            node3                                                                                                                                                                                                                                         
         *                  node7                                                                                                                                                                                                                                   
         *    Linearised as:                                                                                                                                                                                                                                        
         *    node1, node2, node4 | node5 | node3, node6| node7 |                                                                                                                                                                                                   
         *       |      |__________|        |  |__________|                                                                                                                                                                                                         
         *       |__________________________|                                                                                                                                                                                                                       
         *                                                                                                                                                                                                                                                          
         * there is effectively a vector for each exprsn:                                                                                                                                                                                                           
         * and for each node there is a count and the node index,                                                                                                                                                                                                   
         * ( note that the first is not actually needed because                                                                                                                                                                                                     
         * it is the same as the row index.                                                                                                                                                                                                                         
         * |count|increment|node,count|increment|node,count|....                                                                                                                                                                                                    
         * The up case is the continuation and the down case uses the increment.                                                                                                                                                                                    
         * -----------------------------------------------------------------------------                                                                                                                                                                            
         */                                                                                                                                                                                                                                                         
        /* Check whether the index into the above structure has been set up. */                                                                                                                                                                                     
        if ( aqqqmcdcstr[i] == (-1) )                                                                                                                                                                                                                               
        {                                                                                                                                                                                                                                                           
          /* the first use of this branch */                                                                                                                                                                                                                        
          aqqqmcdcstr[i] = qqqstoreused+1;                                                                                                                                                                                                                          
          paqqqmcdcstr   = qqqstoreused+1;                                                                                                                                                                                                                          
          /* Reset trace start to start of range */                                                                                                                                                                                                                 
          paqqqmcdctrace = paqqqmcdctrace1;                                                                                                                                                                                                                         
          /* ----------------------------------------------------------------------* 204 *                                                                                                                                                                          
           * Error Trap                                                                                                                                                                                                                                             
           * Check qqqstoreused + 4 <= QQQMAXMCDCSIZE                                                                                                                                                                                                               
           * -----------------------------------------------------------------------------                                                                                                                                                                          
           */                                                                                                                                                                                                                                                       
          aqqqmcdcstore[qqqstoreused+1] = i;                                                                                                                                                                                                                        
          aqqqmcdcstore[qqqstoreused+2] = 1; /* count of first node */                                                                                                                                                                                              
          aqqqmcdcstore[qqqstoreused+3] = 0; /* increment */                                                                                                                                                                                                        
          aqqqmcdcstore[qqqstoreused+4] = 0; /* terminator */                                                                                                                                                                                                       
          qqqlastmcdc  = i;                                                                                                                                                                                                                                         
          /* ----------------------------------------------------------------------* 205 *                                                                                                                                                                          
           * Error Trap                                                                                                                                                                                                                                             
           * Check qqqstoreused + 4 < QQQMAXMCDCSIZE                                                                                                                                                                                                                
           * -----------------------------------------------------------------------------                                                                                                                                                                          
           */                                                                                                                                                                                                                                                       
          qqqstoreused = qqqstoreused + 4;                                                                                                                                                                                                                          
        }                                                                                                                                                                                                                                                           
        else                                                                                                                                                                                                                                                        
        {                                                                                                                                                                                                                                                           
          /* second or subsequent use of this sequence start point. */                                                                                                                                                                                              
          /* ----------------------------------------------------------------------* 207 *                                                                                                                                                                          
           *    node1, node2, node4 | node5 | node3, node6| node7 |                                                                                                                                                                                                 
           *       |      |__________|        |  |__________|                                                                                                                                                                                                       
           *       |__________________________|                                                                                                                                                                                                                     
           *                                                                                                                                                                                                                                                        
           *       0      1       2      3     4      5       6     7     8     9    10                                                                                                                                                                             
           *     count  increm  node   count increm  node   count   0   node   count  0                                                                                                                                                                             
           *      for     to    index   for   to     index   for        index  for                                                                                                                                                                                  
           *     node1  node3   node2  node2 node5   node4  node4       node5  node5                                                                                                                                                                                
           *                                                                                                                                                                                                                                                        
           * There are two ways to get to the end of an expression:                                                                                                                                                                                                 
           *   1. follow each element along in succesion, never having an                                                                                                                                                                                           
           *      increment greater than 1.                                                                                                                                                                                                                         
           *   2. Having followed at least one increment.                                                                                                                                                                                                           
           * On the way remember the last node whose value is                                                                                                                                                                                                       
           * -----------------------------------------------------------------------------                                                                                                                                                                          
           */                                                                                                                                                                                                                                                       
          /* Save trace of increment locations */                                                                                                                                                                                                                   
          paqqqmcdctrace++;                                                                                                                                                                                                                                         
          aqqqmcdctrace[paqqqmcdctrace] = aqqqmcdcstr[i] + 1;                                                                                                                                                                                                       
          paqqqmcdcstr = aqqqmcdcstr[i];                                                                                                                                                                                                                            
          qqqlastmcdc  = i;                                                                                                                                                                                                                                         
        }                                                                                                                                                                                                                                                           
      }                                                                                                                                                                                                                                                             
      else                                                                                                                                                                                                                                                          
      {                                                                                                                                                                                                                                                             
        /* one of many which belong to one expression. */                                                                                                                                                                                                           
        int incposition;                                                                                                                                                                                                                                            
        /* look at the up branch first */                                                                                                                                                                                                                           
        /* ----------------------------------------------------------------------* 208 *                                                                                                                                                                            
         *            paqqqmcdcstr                                                                                                                                                                                                                                  
         * points to position of last node index of this                                                                                                                                                                                                            
         * expression. It may be in the middle of existing sequences or not                                                                                                                                                                                         
         * -----------------------------------------------------------------------------                                                                                                                                                                            
         */                                                                                                                                                                                                                                                         
        incposition = paqqqmcdcstr + 2; /* points to terminator/continuation */                                                                                                                                                                                     
        if( aqqqmcdcstore[incposition] == 0 )                                                                                                                                                                                                                       
        {                                                                                                                                                                                                                                                           
          /* first successor is empty, end of expression so insert entry. */                                                                                                                                                                                        
          /* Check for a repeated sequence */                                                                                                                                                                                                                       
          if (paqqqmcdctrace > paqqqmcdctrace1)                                                                                                                                                                                                                     
          {                                                                                                                                                                                                                                                         
            /* Increment each node traversed */                                                                                                                                                                                                                     
            for (iz = paqqqmcdctrace1 + 1; iz < paqqqmcdctrace + 1; iz++)                                                                                                                                                                                           
            {                                                                                                                                                                                                                                                       
              aqqqmcdcstore[aqqqmcdctrace[iz]]++;                                                                                                                                                                                                                   
            }                                                                                                                                                                                                                                                       
            /* Reinitialise */                                                                                                                                                                                                                                      
            paqqqmcdctrace = paqqqmcdctrace1;                                                                                                                                                                                                                       
          }                                                                                                                                                                                                                                                         
          aqqqmcdcstore[incposition] = qqqstoreused+1;                                                                                                                                                                                                              
          /* ----------------------------------------------------------------------* 209 *                                                                                                                                                                          
           * Error Trap                                                                                                                                                                                                                                             
           * Check qqqstoreused + 4 <= QQQMAXMCDCSIZE                                                                                                                                                                                                               
           * -----------------------------------------------------------------------------                                                                                                                                                                          
           */                                                                                                                                                                                                                                                       
          aqqqmcdcstore[qqqstoreused+1] = i;                                                                                                                                                                                                                        
          aqqqmcdcstore[qqqstoreused+2] = 1;                                                                                                                                                                                                                        
          aqqqmcdcstore[qqqstoreused+3] = 0;                                                                                                                                                                                                                        
          aqqqmcdcstore[qqqstoreused+4] = 0;                                                                                                                                                                                                                        
          paqqqmcdcstr = qqqstoreused+1;                                                                                                                                                                                                                            
          /* ----------------------------------------------------------------------* 210 *                                                                                                                                                                          
           * Error Trap                                                                                                                                                                                                                                             
           * Check qqqstoreused + 4 < QQQMAXMCDCSIZE                                                                                                                                                                                                                
           * -----------------------------------------------------------------------------                                                                                                                                                                          
           */                                                                                                                                                                                                                                                       
          qqqstoreused = qqqstoreused + 4;                                                                                                                                                                                                                          
        }                                                                                                                                                                                                                                                           
        else                                                                                                                                                                                                                                                        
        {                                                                                                                                                                                                                                                           
          /* there is an up node, check if it is the same as the current node */                                                                                                                                                                                    
          if ( aqqqmcdcstore[aqqqmcdcstore[incposition]] == i )                                                                                                                                                                                                     
          {                                                                                                                                                                                                                                                         
            /* its the same node */                                                                                                                                                                                                                                 
            paqqqmcdcstr = aqqqmcdcstore[incposition];                                                                                                                                                                                                              
            /* Check whether to record an increment */                                                                                                                                                                                                              
            if (paqqqmcdctrace > paqqqmcdctrace1)                                                                                                                                                                                                                   
            {                                                                                                                                                                                                                                                       
              paqqqmcdctrace++;                                                                                                                                                                                                                                     
              aqqqmcdctrace[paqqqmcdctrace] = paqqqmcdcstr + 1;                                                                                                                                                                                                     
            }                                                                                                                                                                                                                                                       
          }                                                                                                                                                                                                                                                         
          else if ( aqqqmcdcstore[aqqqmcdcstore[incposition+1]] == i )                                                                                                                                                                                              
          {                                                                                                                                                                                                                                                         
            /* check the down node */                                                                                                                                                                                                                               
            /* its the same node */                                                                                                                                                                                                                                 
            paqqqmcdcstr = aqqqmcdcstore[incposition+1];                                                                                                                                                                                                            
            /* Check whether to record an increment */                                                                                                                                                                                                              
            if (paqqqmcdctrace > paqqqmcdctrace1)                                                                                                                                                                                                                   
            {                                                                                                                                                                                                                                                       
              paqqqmcdctrace++;                                                                                                                                                                                                                                     
              aqqqmcdctrace[paqqqmcdctrace] = paqqqmcdcstr + 1;                                                                                                                                                                                                     
            }                                                                                                                                                                                                                                                       
          }                                                                                                                                                                                                                                                         
          else                                                                                                                                                                                                                                                      
          {                                                                                                                                                                                                                                                         
            /* second successor is empty, end of expression so inset entry. */                                                                                                                                                                                      
            /* Check for a repeated saved sequence */                                                                                                                                                                                                               
            if (paqqqmcdctrace > paqqqmcdctrace1)                                                                                                                                                                                                                   
            {                                                                                                                                                                                                                                                       
              /* Increment each node traversed */                                                                                                                                                                                                                   
              for (iz = paqqqmcdctrace1 + 1; iz < paqqqmcdctrace + 1; iz++)                                                                                                                                                                                         
              {                                                                                                                                                                                                                                                     
                aqqqmcdcstore[aqqqmcdctrace[iz]]++;                                                                                                                                                                                                                 
              }                                                                                                                                                                                                                                                     
              /* Reinitialise */                                                                                                                                                                                                                                    
              paqqqmcdctrace = paqqqmcdctrace1;                                                                                                                                                                                                                     
            }                                                                                                                                                                                                                                                       
            aqqqmcdcstore[incposition+1] = qqqstoreused+1;                                                                                                                                                                                                          
            /* ----------------------------------------------------------------------* 211 *                                                                                                                                                                        
             * Error Trap                                                                                                                                                                                                                                           
             * Check qqqstoreused + 4 <= QQQMAXMCDCSIZE                                                                                                                                                                                                             
             * -----------------------------------------------------------------------------                                                                                                                                                                        
             */                                                                                                                                                                                                                                                     
            aqqqmcdcstore[qqqstoreused+1] = i;                                                                                                                                                                                                                      
            aqqqmcdcstore[qqqstoreused+2] = 1;                                                                                                                                                                                                                      
            aqqqmcdcstore[qqqstoreused+3] = 0;                                                                                                                                                                                                                      
            aqqqmcdcstore[qqqstoreused+4] = 0;                                                                                                                                                                                                                      
            paqqqmcdcstr = qqqstoreused+1;                                                                                                                                                                                                                          
            /* ----------------------------------------------------------------------* 212 *                                                                                                                                                                        
             * Error Trap                                                                                                                                                                                                                                           
             * Check qqqstoreused + 4 < QQQMAXMCDCSIZE                                                                                                                                                                                                              
             * -----------------------------------------------------------------------------                                                                                                                                                                        
             */                                                                                                                                                                                                                                                     
            qqqstoreused = qqqstoreused + 4;                                                                                                                                                                                                                        
          }                                                                                                                                                                                                                                                         
        }                                                                                                                                                                                                                                                           
      }                                                                                                                                                                                                                                                             
    }                                                                                                                                                                                                                                                               
    else                                                                                                                                                                                                                                                            
    {                                                                                                                                                                                                                                                               
    ;                                                                                                                                                                                                                                                               
    }                                                                                                                                                                                                                                                               
  } /* end of fun */                                                                                                                                                                                                                                                
  /* ----------------------------------------------------------------------* 222 *                                                                                                                                                                                  
   *            qqqzzuploadmcdc                                                                                                                                                                                                                                     
   * This routine uploads the MC/DC sequences from compressed execution                                                                                                                                                                                             
   * or bitmap histories which use separate storage.                                                                                                                                                                                                                
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  void qqqzzuploadmcdc(int paqqqmcdcstr[], int paqqqmcdcstore[], int qqqbrns,                                                                                                                                                                                       
                         int pfileid, int pqqqmaxmcdcsize)                                                                                                                                                                                                          
  {                                                                                                                                                                                                                                                                 
    int i,depth,dirn,entrycount,marker;                                                                                                                                                                                                                             
    entrycount = 0;                                                                                                                                                                                                                                                 
    marker = 0;                                                                                                                                                                                                                                                     
    /* upload for fixed size mcdc */                                                                                                                                                                                                                                
    if (paqqqmcdcstr == (int*)(0))                                                                                                                                                                                                                                  
    {                                                                                                                                                                                                                                                               
      /* NULL entry implying no MC/DC information for this file, just return */                                                                                                                                                                                     
      return;                                                                                                                                                                                                                                                       
    }                                                                                                                                                                                                                                                               
    for ( i=0; i<=qqqbrns; i++ )                                                                                                                                                                                                                                    
    {                                                                                                                                                                                                                                                               
      if ( paqqqmcdcstr[i] != (-1) )                                                                                                                                                                                                                                
      {                                                                                                                                                                                                                                                             
        int nodeptr,firstnodeptr,temp;                                                                                                                                                                                                                              
        if( marker == 0 )                                                                                                                                                                                                                                           
        {                                                                                                                                                                                                                                                           
          /* Bitmap MC/DC separation marker with file ID */                                                                                                                                                                                                         
          qqoutput4(                                                                                                                                                                                                                                                
            "%8d%8d%8d%8d\n", (-1),pfileid,(-1),(-1) );                                                                                                                                                                                                             
          marker = 1;                                                                                                                                                                                                                                               
        }                                                                                                                                                                                                                                                           
        nodeptr = paqqqmcdcstr[i];                                                                                                                                                                                                                                  
        firstnodeptr = nodeptr;                                                                                                                                                                                                                                     
mcdcloop:                                                                                                                                                                                                                                                           
        if (entrycount == 10 )                                                                                                                                                                                                                                      
        {                                                                                                                                                                                                                                                           
          qqoutput0(                                                                                                                                                                                                                                                
            "\n");                                                                                                                                                                                                                                                  
          entrycount = 0;                                                                                                                                                                                                                                           
        }                                                                                                                                                                                                                                                           
        else if( entrycount == qqzzidfield)                                                                                                                                                                                                                         
        {                                                                                                                                                                                                                                                           
          qqoutput(                                                                                                                                                                                                                                                 
            "%8d",pfileid);                                                                                                                                                                                                                                         
          entrycount++;                                                                                                                                                                                                                                             
        }                                                                                                                                                                                                                                                           
        qqoutput(                                                                                                                                                                                                                                                   
          "%8d",paqqqmcdcstore[nodeptr]);                                                                                                                                                                                                                           
        paqqqmcdcstore[nodeptr+1]--;                                                                                                                                                                                                                                
        entrycount++;                                                                                                                                                                                                                                               
        if ( paqqqmcdcstore[nodeptr+2] > 0 )                                                                                                                                                                                                                        
        {                                                                                                                                                                                                                                                           
          /* follow up ptr */                                                                                                                                                                                                                                       
          temp = nodeptr;                                                                                                                                                                                                                                           
          nodeptr = paqqqmcdcstore[nodeptr+2];                                                                                                                                                                                                                      
          if ( paqqqmcdcstore[nodeptr+1] == 1)                                                                                                                                                                                                                      
          {                                                                                                                                                                                                                                                         
            paqqqmcdcstore[temp+2] = 0;                                                                                                                                                                                                                             
          }                                                                                                                                                                                                                                                         
          goto mcdcloop;                                                                                                                                                                                                                                            
        }                                                                                                                                                                                                                                                           
        else if ( paqqqmcdcstore[nodeptr+3] > 0 )                                                                                                                                                                                                                   
        {                                                                                                                                                                                                                                                           
          /* follow down ptr */                                                                                                                                                                                                                                     
          temp = nodeptr;                                                                                                                                                                                                                                           
          nodeptr = paqqqmcdcstore[nodeptr+3];                                                                                                                                                                                                                      
          if ( paqqqmcdcstore[nodeptr+1] == 1)                                                                                                                                                                                                                      
          {                                                                                                                                                                                                                                                         
            paqqqmcdcstore[temp+3] = 0;                                                                                                                                                                                                                             
          }                                                                                                                                                                                                                                                         
          goto mcdcloop;                                                                                                                                                                                                                                            
        }                                                                                                                                                                                                                                                           
        else                                                                                                                                                                                                                                                        
        {                                                                                                                                                                                                                                                           
          /* both qzero, end of expression */                                                                                                                                                                                                                       
          if ( paqqqmcdcstore[firstnodeptr+1] > 0 )                                                                                                                                                                                                                 
          {                                                                                                                                                                                                                                                         
            nodeptr = firstnodeptr;                                                                                                                                                                                                                                 
            goto mcdcloop;                                                                                                                                                                                                                                          
          }                                                                                                                                                                                                                                                         
        }                                                                                                                                                                                                                                                           
      }                                                                                                                                                                                                                                                             
    }                                                                                                                                                                                                                                                               
    /* end of processing, now tidyup */                                                                                                                                                                                                                             
    if ( marker == 1 && entrycount != 0 )                                                                                                                                                                                                                           
    {                                                                                                                                                                                                                                                               
      if ( entrycount == qqzzidfield)                                                                                                                                                                                                                               
      {                                                                                                                                                                                                                                                             
        qqoutput(                                                                                                                                                                                                                                                   
          "%8d",pfileid);                                                                                                                                                                                                                                           
        entrycount++;                                                                                                                                                                                                                                               
      }                                                                                                                                                                                                                                                             
      qqoutput(                                                                                                                                                                                                                                                     
        "%8d",0);                                                                                                                                                                                                                                                   
      entrycount++;                                                                                                                                                                                                                                                 
    }                                                                                                                                                                                                                                                               
    /* common to both fixed and variable size storage */                                                                                                                                                                                                            
    if ( entrycount != 0 )                                                                                                                                                                                                                                          
    {                                                                                                                                                                                                                                                               
      if ( entrycount < 4 )                                                                                                                                                                                                                                         
      {                                                                                                                                                                                                                                                             
        while ( entrycount < 3 )                                                                                                                                                                                                                                    
        {                                                                                                                                                                                                                                                           
          qqoutput(                                                                                                                                                                                                                                                 
            "%8d",0);                                                                                                                                                                                                                                               
          entrycount++;                                                                                                                                                                                                                                             
        }                                                                                                                                                                                                                                                           
        qqoutput2(                                                                                                                                                                                                                                                  
          "%8d%8d",pfileid,0);                                                                                                                                                                                                                                      
      }                                                                                                                                                                                                                                                             
      qqoutput4(                                                                                                                                                                                                                                                    
        "\n%8d%8d%8d%8d\n", 0,pfileid,0,0 );                                                                                                                                                                                                                        
    }                                                                                                                                                                                                                                                               
    else                                                                                                                                                                                                                                                            
    {                                                                                                                                                                                                                                                               
      qqoutput4(                                                                                                                                                                                                                                                    
        "%8d%8d%8d%8d\n", 0,pfileid,0,0 );                                                                                                                                                                                                                          
    }                                                                                                                                                                                                                                                               
    qqqlastmcdc = 0;                                                                                                                                                                                                                                                
    QQQindicator = 0;                                                                                                                                                                                                                                               
    marker = 0;                                                                                                                                                                                                                                                     
    /*end of uploadmcdc */                                                                                                                                                                                                                                          
  }                                                                                                                                                                                                                                                                 
#undef QQQTEMP1                                                                                                                                                                                                                                                     
#define QQQTEMP1                                                                                                                                                                                                                                                    
  /* ----------- zqqzqz ---------------------------------------------------* 285 *                                                                                                                                                                                  
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 287 *                                                                                                                                                                                  
   * This routine opens the execution history file. It is instrumented at the                                                                                                                                                                                       
   * start of the main program if one exists in the file. In general this is                                                                                                                                                                                        
   * superceded by main_44zqqzqz1 below.                                                                                                                                                                                                                            
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  int main_44zqqzqz(qqnull_params)                                                                                                                                                                                                                                  
  {                                                                                                                                                                                                                                                                 
    if ( main_44zzopen != 1 )                                                                                                                                                                                                                                       
    {                                                                                                                                                                                                                                                               
      ldra_open();                                                                                                                                                                                                                                                  
      main_44zzopen = 1;                                                                                                                                                                                                                                            
    }                                                                                                                                                                                                                                                               
    return(1);                                                                                                                                                                                                                                                      
  }                                                                                                                                                                                                                                                                 
  /* ----------- zqqzqz1 --------------------------------------------------* 291 *                                                                                                                                                                                  
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 293 *                                                                                                                                                                                  
   * This routine also opens the execution history file.  It is called                                                                                                                                                                                              
   * automatically if a probe fires and the execution history is not already                                                                                                                                                                                        
   * opened (main_44zzopen = 0 ).                                                                                                                                                                                                                                   
   * Because this always works ( it was intended for files with no main program                                                                                                                                                                                     
   * it is now the de facto common way to open the execution history.                                                                                                                                                                                               
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  int main_44zqqzqz1(qqnull_params)                                                                                                                                                                                                                                 
  {                                                                                                                                                                                                                                                                 
    if ( main_44zzopen != 1 )                                                                                                                                                                                                                                       
    {                                                                                                                                                                                                                                                               
      ldra_open(); /* 7 */                                                                                                                                                                                                                                          
      qqqqinitialise(0);                                                                                                                                                                                                                                            
      main_44zzopen = 1;                                                                                                                                                                                                                                            
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
   * is usually inserted by main_44zqzqzq.                                                                                                                                                                                                                          
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int main_44zzqqzz(int qqqi)                                                                                                                                                                                                                                
  {                                                                                                                                                                                                                                                                 
    if ( main_44zzopen != 1 )                                                                                                                                                                                                                                       
    {                                                                                                                                                                                                                                                               
      main_44zqqzqz1();                                                                                                                                                                                                                                             
    }                                                                                                                                                                                                                                                               
    if ( main_44zzopen )                                                                                                                                                                                                                                            
    {                                                                                                                                                                                                                                                               
      /* bitmap   */                                                                                                                                                                                                                                                
      if ( qqqi > 0 )                                                                                                                                                                                                                                               
      {                                                                                                                                                                                                                                                             
         /* Standard probe */                                                                                                                                                                                                                                       
        bitmaparr[((qqqi-1) >> 3)] |= (1<<((qqqi-1) & 0x07));                                                                                                                                                                                                       
      }                                                                                                                                                                                                                                                             
      else                                                                                                                                                                                                                                                          
      {                                                                                                                                                                                                                                                             
        /* MC/DC probe */                                                                                                                                                                                                                                           
        if (qqqmcdcsuppress == 0)                                                                                                                                                                                                                                   
        {                                                                                                                                                                                                                                                           
          main_44zzzfun(qqqi);                                                                                                                                                                                                                                      
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
static int main_44zqendz(int qqqi)                                                                                                                                                                                                                                  
  {                                                                                                                                                                                                                                                                 
      if ( main_44zzopen != 1 )                                                                                                                                                                                                                                     
      {                                                                                                                                                                                                                                                             
        main_44zqqzqz1();                                                                                                                                                                                                                                           
      }                                                                                                                                                                                                                                                             
      /* ----------------------------------------------------------------------* 307 *                                                                                                                                                                              
       * this is the one which puts an integer into                                                                                                                                                                                                                 
       * the execution history file and returns unity.                                                                                                                                                                                                              
       * The format of each field consists of six columns,                                                                                                                                                                                                          
       * the number is right justified in this field.                                                                                                                                                                                                               
       * -----------------------------------------------------------------------------                                                                                                                                                                              
       */                                                                                                                                                                                                                                                           
      if ( main_44zzopen )                                                                                                                                                                                                                                          
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
          if (qqqmcdcsuppress == 0)                                                                                                                                                                                                                                 
          {                                                                                                                                                                                                                                                         
            main_44zzzfun(qqqi);                                                                                                                                                                                                                                    
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
      if (qqqmcdcsuppress == 0)                                                                                                                                                                                                                                     
      {                                                                                                                                                                                                                                                             
        main_44zzzfun(qqqi);                                                                                                                                                                                                                                        
      }                                                                                                                                                                                                                                                             
    }                                                                                                                                                                                                                                                               
    /*  clear qqqlast for reentry */                                                                                                                                                                                                                                
  qqqlast = 0;                                                                                                                                                                                                                                                      
    /* If not using atexit to register the bitmap upload function must call upload function here */                                                                                                                                                                 
    if ( ! qqupload_registered )                                                                                                                                                                                                                                    
    {                                                                                                                                                                                                                                                               
      qqqupload();                                                                                                                                                                                                                                                  
      ldra_close();                                                                                                                                                                                                                                                 
    }                                                                                                                                                                                                                                                               
    /* ----------------------------------------------------------------------* 310 *                                                                                                                                                                                
     * fclose(main_44zzhfil);                                                                                                                                                                                                                                       
     * main_44zzopen = 0;                                                                                                                                                                                                                                           
     * -----------------------------------------------------------------------------                                                                                                                                                                                
     */                                                                                                                                                                                                                                                             
    return(1);                                                                                                                                                                                                                                                      
  } /* end of zqendz */                                                                                                                                                                                                                                             
                                                                                                                                                                                                                                                                    
  /* Function that is invoked from a script to force upload of execution history */                                                                                                                                                                                 
#define UPLOAD_EXECUTION_HISTORY                                                                                                                                                                                                                                    
  void upload_execution_history(qqnull_params) {                                                                                                                                                                                                                    
    qqqupload();                                                                                                                                                                                                                                                    
    ldra_close();                                                                                                                                                                                                                                                   
  }                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                    
 /* ----------------------------------------------------------------------* 311 *                                                                                                                                                                                   
  *            qqqupload                                                                                                                                                                                                                                            
  * This routine loops through the stored bitmap and                                                                                                                                                                                                                
  * outputs it. It then uploads the stored mcdc.                                                                                                                                                                                                                    
  * -----------------------------------------------------------------------------                                                                                                                                                                                   
  */                                                                                                                                                                                                                                                                
  void qqqupload(qqnull_params)                                                                                                                                                                                                                                     
  {                                                                                                                                                                                                                                                                 
    int i;                                                                                                                                                                                                                                                          
    /* clear qqqlast for re-entry */                                                                                                                                                                                                                                
    /* uncompressed  bitmap, singlefile and mainfl */                                                                                                                                                                                                               
    qqqlast = 0;                                                                                                                                                                                                                                                    
    /* QQQSINGLEFILE - globally stored bitmap amd mcdc are output */                                                                                                                                                                                                
    {                                                                                                                                                                                                                                                               
      int i = 0, j;                                                                                                                                                                                                                                                 
      unsigned int * pbitmaparr;                                                                                                                                                                                                                                    
      while ( qqzzglobbrns[i] != 0 )                                                                                                                                                                                                                                
      {                                                                                                                                                                                                                                                             
        for (j=0;j<(qqzzglobbrns[i]/8)+1;j++)                                                                                                                                                                                                                       
        {                                                                                                                                                                                                                                                           
          pbitmaparr = qqzzglobarrb[i];                                                                                                                                                                                                                             
            qqoutput2(                                                                                                                                                                                                                                              
              "%8d%8d\n", pbitmaparr[j], qqzzglobfileid[i]);                                                                                                                                                                                                        
        }                                                                                                                                                                                                                                                           
        qqqzzuploadmcdc(qqzzglobarrp[i], qqzzglobarrs[i], (qqzzglobbrns[i]),                                                                                                                                                                                        
                          qqzzglobfileid[i],qqzzglobmax[i]);                                                                                                                                                                                                        
        i++;                                                                                                                                                                                                                                                        
      }                                                                                                                                                                                                                                                             
    }                                                                                                                                                                                                                                                               
    qqqlast = 0;                                                                                                                                                                                                                                                    
    main_44zzopen = 2;                                                                                                                                                                                                                                              
  } /* End of qqqupload */                                                                                                                                                                                                                                          
  /* ----------- zqzqzq ---------------------------------------------------* 318 *                                                                                                                                                                                  
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 320 *                                                                                                                                                                                  
   * This routine should be called before the program                                                                                                                                                                                                               
   * terminates. It closes the execution history                                                                                                                                                                                                                    
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int main_44zqzqzq(int qqqi)                                                                                                                                                                                                                                
  {                                                                                                                                                                                                                                                                 
      if ( main_44zzopen != 1 )                                                                                                                                                                                                                                     
      {                                                                                                                                                                                                                                                             
        main_44zqqzqz1();                                                                                                                                                                                                                                           
      }                                                                                                                                                                                                                                                             
      /* not compressed */                                                                                                                                                                                                                                          
      /* do nothing for bitmap*/                                                                                                                                                                                                                                    
      /* upload the history */                                                                                                                                                                                                                                      
      /* bitmap */                                                                                                                                                                                                                                                  
      /* uncompressed  bitmap */                                                                                                                                                                                                                                    
      main_44zqendz(qqqi);                                                                                                                                                                                                                                          
        /* qqqupload closes the execution history file */                                                                                                                                                                                                           
    return(1);                                                                                                                                                                                                                                                      
  } /* end of zqzqzq */                                                                                                                                                                                                                                             
  /*   the following routines should be left alone */                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 331 *                                                                                                                                                                                  
   *            main_44zzzqtz                                                                                                                                                                                                                                       
   * This routine captures the value of an expression                                                                                                                                                                                                               
   * and then returns a jump if the value is not 0.                                                                                                                                                                                                                 
   *                                                                                                                                                                                                                                                                
   *   qqqa - value of expression                                                                                                                                                                                                                                   
   *   qqqb - jump table index.                                                                                                                                                                                                                                     
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int main_44zzzqtz(int qqqa, int qqqb)                                                                                                                                                                                                                      
  {                                                                                                                                                                                                                                                                 
      if (qqqa)                                                                                                                                                                                                                                                     
      {                                                                                                                                                                                                                                                             
        main_44zzqqzz(qqqb) ;                                                                                                                                                                                                                                       
      }                                                                                                                                                                                                                                                             
      else                                                                                                                                                                                                                                                          
      {                                                                                                                                                                                                                                                             
        /* straight on jump */                                                                                                                                                                                                                                      
        main_44zzqqzz(qqqb-1);                                                                                                                                                                                                                                      
      }                                                                                                                                                                                                                                                             
    return(qqqa);                                                                                                                                                                                                                                                   
  } /* end of zzzqtz */                                                                                                                                                                                                                                             
  /* ----------------------------------------------------------------------* 332 *                                                                                                                                                                                  
   *            main_44zzzqfz                                                                                                                                                                                                                                       
   * This routine captures the value of an expression                                                                                                                                                                                                               
   * and then returns a jump if the value is 0.                                                                                                                                                                                                                     
   *                                                                                                                                                                                                                                                                
   *  qqqa - value of expression                                                                                                                                                                                                                                    
   *  qqqb - jump table index.                                                                                                                                                                                                                                      
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int main_44zzzqfz(int qqqa,int qqqb)                                                                                                                                                                                                                       
  {                                                                                                                                                                                                                                                                 
    {                                                                                                                                                                                                                                                               
      if (qqqa)                                                                                                                                                                                                                                                     
      {                                                                                                                                                                                                                                                             
        /* straight on jump */                                                                                                                                                                                                                                      
        main_44zzqqzz(qqqb-1);                                                                                                                                                                                                                                      
        return(qqqa);                                                                                                                                                                                                                                               
      }                                                                                                                                                                                                                                                             
      else                                                                                                                                                                                                                                                          
      {                                                                                                                                                                                                                                                             
        main_44zzqqzz(qqqb);                                                                                                                                                                                                                                        
      }                                                                                                                                                                                                                                                             
    }                                                                                                                                                                                                                                                               
    return(qqqa);                                                                                                                                                                                                                                                   
  } /* zzzqfz */                                                                                                                                                                                                                                                    
  /* ----------------------------------------------------------------------* 333 *                                                                                                                                                                                  
   *            main_44zzdo17                                                                                                                                                                                                                                       
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int main_44zzdo17(                                                                                                                                                                                                                                         
    int qqzdummy, int a, int b)                                                                                                                                                                                                                                     
  {                                                                                                                                                                                                                                                                 
    /* Check for a new start */                                                                                                                                                                                                                                     
    if (qqzdummy == 1)                                                                                                                                                                                                                                              
    {                                                                                                                                                                                                                                                               
      /* Check within stack bounds */                                                                                                                                                                                                                               
      if (qqqmcdcnest < QQQMCDCSTACKSIZE)                                                                                                                                                                                                                           
      {                                                                                                                                                                                                                                                             
        /* Save current details */                                                                                                                                                                                                                                  
        qqqmcdcstack [qqqmcdcnest].mcdctrace = paqqqmcdctrace1;                                                                                                                                                                                                     
        qqqmcdcstack [qqqmcdcnest].mcdcstr = paqqqmcdcstr;                                                                                                                                                                                                          
        qqqmcdcstack [qqqmcdcnest].lastmcdc = qqqlastmcdc;                                                                                                                                                                                                          
        /* Reset the trace start point */                                                                                                                                                                                                                           
        paqqqmcdctrace1 = paqqqmcdctrace;                                                                                                                                                                                                                           
        /* Increment the level */                                                                                                                                                                                                                                   
        qqqmcdcnest++;                                                                                                                                                                                                                                              
        /* Check bounds again */                                                                                                                                                                                                                                    
        if (qqqmcdcnest == QQQMCDCSTACKSIZE)                                                                                                                                                                                                                        
        {                                                                                                                                                                                                                                                           
          /* Suppress MC/DC checks until the stack is back in range */                                                                                                                                                                                              
          qqqmcdcsuppress = 1;                                                                                                                                                                                                                                      
        }                                                                                                                                                                                                                                                           
        /* Indicate at the start of a new expression */                                                                                                                                                                                                             
        QQQindicator = 1;                                                                                                                                                                                                                                           
        QQQfirstmcdc = 1;                                                                                                                                                                                                                                           
        paqqqmcdcstr = 0;                                                                                                                                                                                                                                           
        /* qqqlastmcdc = 0; */                                                                                                                                                                                                                                      
      }                                                                                                                                                                                                                                                             
    }                                                                                                                                                                                                                                                               
    if ( a )                                                                                                                                                                                                                                                        
    {                                                                                                                                                                                                                                                               
      main_44zzqqzz(1-b);                                                                                                                                                                                                                                           
    }                                                                                                                                                                                                                                                               
    else                                                                                                                                                                                                                                                            
    {                                                                                                                                                                                                                                                               
      main_44zzqqzz(-b);                                                                                                                                                                                                                                            
    }                                                                                                                                                                                                                                                               
    if ( QQQfirstmcdc == 1)                                                                                                                                                                                                                                         
    {                                                                                                                                                                                                                                                               
      QQQfirstmcdc = 0;                                                                                                                                                                                                                                             
      QQQindicator = qqzdummy + 1;                                                                                                                                                                                                                                  
    }                                                                                                                                                                                                                                                               
    else                                                                                                                                                                                                                                                            
    {                                                                                                                                                                                                                                                               
      QQQindicator = qqzdummy+1;                                                                                                                                                                                                                                    
    }                                                                                                                                                                                                                                                               
    if ( qqzdummy == 0 )                                                                                                                                                                                                                                            
    {                                                                                                                                                                                                                                                               
      QQQfirstmcdc = 1;                                                                                                                                                                                                                                             
    }                                                                                                                                                                                                                                                               
    /* Check for an end */                                                                                                                                                                                                                                          
    if (qqzdummy == 0)                                                                                                                                                                                                                                              
    {                                                                                                                                                                                                                                                               
      /* Decrement the nest level */                                                                                                                                                                                                                                
      if (qqqmcdcnest > 0)                                                                                                                                                                                                                                          
      {                                                                                                                                                                                                                                                             
        qqqmcdcnest--;                                                                                                                                                                                                                                              
        /* Check whether returned to within bounds */                                                                                                                                                                                                               
        if (qqqmcdcnest < QQQMCDCSTACKSIZE)                                                                                                                                                                                                                         
        {                                                                                                                                                                                                                                                           
          /* Reset the trace range start */                                                                                                                                                                                                                         
          paqqqmcdctrace = paqqqmcdctrace1;                                                                                                                                                                                                                         
          paqqqmcdctrace1 = qqqmcdcstack[qqqmcdcnest].mcdctrace;                                                                                                                                                                                                    
          /* Reset the start node */                                                                                                                                                                                                                                
          paqqqmcdcstr = qqqmcdcstack[qqqmcdcnest].mcdcstr;                                                                                                                                                                                                         
          /* Reset pointer to the entry to connect to */                                                                                                                                                                                                            
          qqqlastmcdc = qqqmcdcstack[qqqmcdcnest].lastmcdc;                                                                                                                                                                                                         
          /* Prevent reinitialisation */                                                                                                                                                                                                                            
          if (qqqlastmcdc == 0)                                                                                                                                                                                                                                     
          {                                                                                                                                                                                                                                                         
            qqqlastmcdc = -1;                                                                                                                                                                                                                                       
          }                                                                                                                                                                                                                                                         
          /* Ensure a continuation */                                                                                                                                                                                                                               
          QQQfirstmcdc = 0;                                                                                                                                                                                                                                         
          /* Ensure processable */                                                                                                                                                                                                                                  
          qqqmcdcsuppress = 0;                                                                                                                                                                                                                                      
        }                                                                                                                                                                                                                                                           
      }                                                                                                                                                                                                                                                             
    }                                                                                                                                                                                                                                                               
    return a;                                                                                                                                                                                                                                                       
  } /*  end of zzdo17 */                                                                                                                                                                                                                                            
  /* ----------------------------------------------------------------------* 336 *                                                                                                                                                                                  
   *            swzzqqzz                                                                                                                                                                                                                                            
   *  The purpose of this routine is to handle empty cases in switch statements                                                                                                                                                                                     
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int swzzqqzz(int qqqi, int onoff)                                                                                                                                                                                                                          
  {                                                                                                                                                                                                                                                                 
  if ( qqqzzglobflag == 1 || onoff == 1)                                                                                                                                                                                                                            
  {                                                                                                                                                                                                                                                                 
    if ( main_44zzopen != 1 )                                                                                                                                                                                                                                       
    {                                                                                                                                                                                                                                                               
      main_44zqqzqz1();                                                                                                                                                                                                                                             
    }                                                                                                                                                                                                                                                               
    if ( main_44zzopen )                                                                                                                                                                                                                                            
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
 
