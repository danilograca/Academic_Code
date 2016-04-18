/*
C TESTBED VERSION  : 9.5.1
FILE UNDER TEST  : "C:\_WorkSpace\Academic_Code\Keil_Projects\State Machine\state_machine.c"
DATE OF ANALYSIS : Mon Apr 18 09:36:09 2016
*/
#undef QQQdialect 
#undef QQQ146
#undef QQQ148
#undef QQQbndchk
#undef QQQ294
#undef QQQEMBEDDEDICE
 /* Note: for BITMAP execution histories QQQthreaded is not defined */
#undef QQQthreaded 
#undef QQQdo178b
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
 static int zzfileid =     51;
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
#define QQQUPLOADATEND
#define QQQNOSTDIO
#undef QQQASHLINGVITRA
#define QQQBITMAP 
#undef QQQBITMAPMCDC 
#undef QQQTIC2XSERIALIO
#undef QQQTIC2XFLASH
#undef QQQCOMPRESSED_EXH
#undef QQQMAINFL
#define QQQSINGLEFILE
#define QQQFILEID
#define QQQseparate
extern int QQQindicator;
static int QQQfirstmcdc=1;
#define state_machine_51zzopen                                                                                zzopen
 extern int state_machine_51zzopen                                                                              ;
#define state_machine_51zqqzqz1                                                                               zqqzqz1
#define QQQLDRA_PORT 
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
/************************ LDRA_PORT ************************************/                                                                                                                                                                                           
#ifdef __cplusplus                                                                                                                                                                                                                                                  
extern "C" {                                                                                                                                                                                                                                                        
#endif                                                                                                                                                                                                                                                              
                                                                                                                                                                                                                                                                    
/* Add include for ITM_SendChar */                                                                                                                                                                                                                                  
#ifdef USE_LPC17XX                                                                                                                                                                                                                                                  
#include "lpc17xx.h"                                                                                                                                                                                                                                                
#endif                                                                                                                                                                                                                                                              
                                                                                                                                                                                                                                                                    
#ifdef STM32F407                                                                                                                                                                                                                                                    
#include "stm32f4xx.h"                                                                                                                                                                                                                                              
#endif                                                                                                                                                                                                                                                              
                                                                                                                                                                                                                                                                    
#ifdef STM32F40_41xxx                                                                                                                                                                                                                                               
#include "stm32f4xx.h"                                                                                                                                                                                                                                              
#endif                                                                                                                                                                                                                                                              
                                                                                                                                                                                                                                                                    
#ifdef STM32F429xx                                                                                                                                                                                                                                                  
#include "stm32f4xx.h"                                                                                                                                                                                                                                              
#endif                                                                                                                                                                                                                                                              
                                                                                                                                                                                                                                                                    
extern char ldra_buffer[];                                                                                                                                                                                                                                          
                                                                                                                                                                                                                                                                    
extern int ldra_port_open (void);                                                                                                                                                                                                                                   
extern void ldra_port_close (void);                                                                                                                                                                                                                                 
extern void ldra_port_init (void);                                                                                                                                                                                                                                  
extern void ldra_port_write (const char* pMsg);                                                                                                                                                                                                                     
extern int ldra_port_is_configured (void);                                                                                                                                                                                                                          
extern void ldra_send_start_message (void);                                                                                                                                                                                                                         
extern void ldra_upload (void);                                                                                                                                                                                                                                     
extern void ldra_exit (void) __attribute__((noinline));                                                                                                                                                                                                             
#if defined(QQQBITMAP) && defined(QQQMAINFL)                                                                                                                                                                                                                        
extern void upload_execution_history(void) __attribute__((noinline));                                                                                                                                                                                               
#endif                                                                                                                                                                                                                                                              
                                                                                                                                                                                                                                                                    
/* Functions used to avoid including stdio */                                                                                                                                                                                                                       
extern char* ldra_sprintf1 (char* str, const char* format, const int);                                                                                                                                                                                              
extern char* ldra_sprintf2 (char* str, const char* format, const int, const int);                                                                                                                                                                                   
extern char* ldra_sprintf3 (char* str, const char* format, const int, const int, const int);                                                                                                                                                                        
extern char* ldra_sprintf4 (char* str, const char* format, const int, const int, const int, const int);                                                                                                                                                             
                                                                                                                                                                                                                                                                    
#ifdef __cplusplus                                                                                                                                                                                                                                                  
}                                                                                                                                                                                                                                                                   
#endif                                                                                                                                                                                                                                                              
                                                                                                                                                                                                                                                                    
/* Avoid adding all this code for both black and white box */                                                                                                                                                                                                       
#ifndef QQQ_SHLAYOUT                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                                    
#if defined (QQQMAINFL)                                                                                                                                                                                                                                             
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
                                                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                                                    
void ldra_send_start_message (void) {                                                                                                                                                                                                                               
}                                                                                                                                                                                                                                                                   
                                                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                                                    
void ldra_upload (void) {                                                                                                                                                                                                                                           
}                                                                                                                                                                                                                                                                   
                                                                                                                                                                                                                                                                    
/*                                                                                                                                                                                                                                                                  
 * Used to set a breakpoint at the end of execution                                                                                                                                                                                                                 
 */                                                                                                                                                                                                                                                                 
void ldra_exit (void) {                                                                                                                                                                                                                                             
  /* Stop the function from being optimised out */                                                                                                                                                                                                                  
  while (1) {                                                                                                                                                                                                                                                       
    ldra_delay(10);                                                                                                                                                                                                                                                 
  }                                                                                                                                                                                                                                                                 
}                                                                                                                                                                                                                                                                   
                                                                                                                                                                                                                                                                    
/* Open a file on the host */                                                                                                                                                                                                                                       
int ldra_port_open (void) {                                                                                                                                                                                                                                         
  ldra_fileid = 1;                                                                                                                                                                                                                                                  
  /*                                                                                                                                                                                                                                                                
   * Protect against the case with just a single main and in white box                                                                                                                                                                                              
   * where the port can get initialised twice                                                                                                                                                                                                                       
   */                                                                                                                                                                                                                                                               
  if ( ldra_port_is_configured() == 0 ) {                                                                                                                                                                                                                           
    ldra_port_init();                   /* Initialise the port */                                                                                                                                                                                                   
  }                                                                                                                                                                                                                                                                 
  return ldra_fileid;                                                                                                                                                                                                                                               
}                                                                                                                                                                                                                                                                   
                                                                                                                                                                                                                                                                    
/* Close the file on the host */                                                                                                                                                                                                                                    
void ldra_port_close (void) {                                                                                                                                                                                                                                       
  ldra_upload();                                                                                                                                                                                                                                                    
  ldra_exit();                                                                                                                                                                                                                                                      
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
  int digits;                                                                                                                                                                                                                                                       
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
          digits = d[max-cnt];                                                                                                                                                                                                                                      
          /* if int to be printed is two or more digits and the format                                                                                                                                                                                              
           * pointer does not specify the number of digits then this code                                                                                                                                                                                           
           * will calculate the correct number of digits */                                                                                                                                                                                                         
          if (digits < -9) {                                                                                                                                                                                                                                        
            digits = -digits;                                                                                                                                                                                                                                       
          }                                                                                                                                                                                                                                                         
			                                                                                                                                                                                                                                                                 
          while (digits > 9) {                                                                                                                                                                                                                                      
            digits /= 10;                                                                                                                                                                                                                                           
            width++;                                                                                                                                                                                                                                                
          }			                                                                                                                                                                                                                                                      
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
          *str++ = 'o';                                                                                                                                                                                                                                             
          *str++ = 'r';                                                                                                                                                                                                                                             
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
                                                                                                                                                                                                                                                                    
#endif /* QQQMAINFL */                                                                                                                                                                                                                                              
#endif /* QQQ_SHLAYOUT */                                                                                                                                                                                                                                           
                                                                                                                                                                                                                                                                    
/************************ END OF LDRA_PORT ******************************/                                                                                                                                                                                          
                                                                                                                                                                                                                                                                    
#endif /* QQQLDRA_PORT */                                                                                                                                                                                                                                           
#ifndef QQQnumfil                                                                                                                                                                                                                                                   
#define QQQnumfil 40  /* default setting */                                                                                                                                                                                                                         
#endif  /* QQQnumfil */                                                                                                                                                                                                                                             
                                                                                                                                                                                                                                                                    
#if defined(QQQstructbitmap) && defined(QQQSINGLEFILE)                                                                                                                                                                                                              
#if defined(QQQMAINFL)                                                                                                                                                                                                                                              
  /*                                                                                                                                                                                                                                                                
   * Set qqqshell_upload to 1 if you want to call the qqqtotalupload separately. Although                                                                                                                                                                           
   * through the target you would have to set this to 0 before calling the qqqupload.                                                                                                                                                                               
   * Move this into ldra_port mechanism.                                                                                                                                                                                                                            
   */                                                                                                                                                                                                                                                               
  int qqqshell_upload = 0;                                                                                                                                                                                                                                          
  int QQQfcn_ptr_num = 0;                                                                                                                                                                                                                                           
  static int qqqisinitialised = 0;                                                                                                                                                                                                                                  
  typedef void(*VoidFunction)();                                                                                                                                                                                                                                    
  VoidFunction qqqaccumupload[QQQnumfil];                                                                                                                                                                                                                           
  VoidFunction qqqaccumreset[QQQnumfil];                                                                                                                                                                                                                            
  void qqqtotalupload(void);                                                                                                                                                                                                                                        
  void qqqtotalreset(void);                                                                                                                                                                                                                                         
                                                                                                                                                                                                                                                                    
  void qqpopulate_array_fcn_ptrQQ(int x, VoidFunction y, VoidFunction z)                                                                                                                                                                                            
  {                                                                                                                                                                                                                                                                 
    qqqaccumupload[x]=y;                                                                                                                                                                                                                                            
    qqqaccumreset[x]=z;                                                                                                                                                                                                                                             
    QQQfcn_ptr_num++;                                                                                                                                                                                                                                               
  }                                                                                                                                                                                                                                                                 
#else  /* defined(QQQMAINFL) */                                                                                                                                                                                                                                     
  extern int QQQfcn_ptr_num;                                                                                                                                                                                                                                        
  typedef void(*VoidFunction)();                                                                                                                                                                                                                                    
  extern VoidFunction qqqaccumupload[QQQnumfil];                                                                                                                                                                                                                    
  extern void qqpopulate_array_fcn_ptrQQ(int x, VoidFunction y, VoidFunction z);                                                                                                                                                                                    
  static int qqqstructzzopen = 0;                                                                                                                                                                                                                                   
#endif  /* defined(QQQMAINFL) */                                                                                                                                                                                                                                    
#endif  /* defined(QQQstructbitmap) && defined(QQQSINGLEFILE) */                                                                                                                                                                                                    
                                                                                                                                                                                                                                                                    
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
#ifdef __STDC__                                                                                                                                                                                                                                                     
#define QQ_ANSI_PROTOTYPE 1                                                                                                                                                                                                                                         
#else /* __STDC__ */                                                                                                                                                                                                                                                
#ifdef VAXC                                                                                                                                                                                                                                                         
#define QQ_ANSI_PROTOTYPE 1                                                                                                                                                                                                                                         
#endif  /* VAXC */                                                                                                                                                                                                                                                  
#endif  /* __STDC__ */                                                                                                                                                                                                                                              
#define QQQnumfil 40  /* default setting */                                                                                                                                                                                                                         
  static unsigned char qqqzzglobflag = 0;                                                                                                                                                                                                                           
  static void qqoutput(FILEPOINT char * s, int i);                                                                                                                                                                                                                  
  static void qqoutput2(FILEPOINT char * s, int i, int j);                                                                                                                                                                                                          
  static void qqoutput3(FILEPOINT char * s, int i, int j, int k);                                                                                                                                                                                                   
  static void qqoutput4(FILEPOINT char * s, int i, int j, int k, int l);                                                                                                                                                                                            
  static void qqoutput0(FILEPOINT char * s);                                                                                                                                                                                                                        
  static int swzzqqzz (int qqqi, int onoff);                                                                                                                                                                                                                        
extern int state_machine_51zqqzqz(qqnull_params);                                                                                                                                                                                                                   
extern int state_machine_51zqqzqz1(qqnull_params);                                                                                                                                                                                                                  
  static int state_machine_51zzqqzz (int qqqi);                                                                                                                                                                                                                     
  static int state_machine_51zqendz (int qqqi);                                                                                                                                                                                                                     
  static int state_machine_51zqzqzq (int qqqi) __attribute__((used));                                                                                                                                                                                               
  static int state_machine_51zzzqtz (int qqqa, int qqqb);                                                                                                                                                                                                           
  static int state_machine_51zzzqfz (int qqqa, int qqqb);                                                                                                                                                                                                           
  void qqqupload (qqnull_params);                                                                                                                                                                                                                                   
  static void upload_execution_history (void); /*Diogo*/                                                                                                                                                                                                            
/* ------------------------------ END OF TESTBED PROTOTYPES -------------------------------- */                                                                                                                                                                     
                                                                                                                                                                                                                                                                    
 
unsigned int
  b_On ;
 
unsigned int
  b_Fail ;
 
unsigned int
  b_Panel ;
 
unsigned int
  b_Shutdown ;
 
unsigned int
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
/*
 * Variables Initialization of State Machine
 */
 
void
  sm_init()
  {
   int istate_machine_51zzqqzz                                                                              
 = state_machine_51zzqqzz                                                                               (       1 ) ; /* 37 */
    b_Fail = 0U ;
    ushort_Mode = 0U ;
    b_Panel = 0U ;
    sshort_Position = 0U ;
    ushort_State = 1U ;
    ushort_Power = 0U ;
    b_On = 0U ;
    b_Maintenance = 0U ;
    ushort_timeCount = 0U ;
    b_Shutdown = 0U ;
    state_machine_51zqendz                                                                               (       2 ) ; /* 30 */  
  }
/*
 * State Machine Declaration
 */
 
void
  stateMachine()
  {
   int istate_machine_51zzqqzz                                                                              
 = state_machine_51zzqqzz                                                                               (       3 ) ; /* 37 */
    if
      (
      ushort_State == 9U
      )
 {
    state_machine_51zzqqzz                                                                               (      4 ) ; /* 1 */
      {
          /*EMERGENCY STATE*/
        ushort_State = 1U ;
          /*System on STANDBY*/
        b_On = 0 ;
      }
    state_machine_51zzqqzz                                                                               (      5 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
state_machine_51zzqqzz                                                                               (      6 ); /* 2 */
      {
        if
          (
          ushort_State == 7U
          )
 {
    state_machine_51zzqqzz                                                                               (      7 ) ; /* 1 */
          {
            if
              (
              ushort_Mode == 2U
              )
 {
    state_machine_51zzqqzz                                                                               (      8 ) ; /* 1 */
              {
                if
                  (
                  b_Fail == 1
                  )
 {
    state_machine_51zzqqzz                                                                               (      9 ) ; /* 1 */
                  {
              // Mode EXTEND on REDUCED STATE
                    sshort_Position += 1U ;
                  }
    state_machine_51zzqqzz                                                                               (     10 ) ; /* 3 */
 }
                else
 {                                                                                                    ;
state_machine_51zzqqzz                                                                               (     11 ); /* 2 */
                  {
                    sshort_Position += 2U ;
                  }
 }
                if
                  (
                  sshort_Position > 20U
                  )
 {
    state_machine_51zzqqzz                                                                               (     12 ) ; /* 1 */
                  {
              // Change to mode PANEL OPEN
                    ushort_Mode = 3U ;
                  }
 }                                                                                                   
else                                                                                                
  state_machine_51zzqqzz                                                                               (     13 ) ; /* 4 */
              }
    state_machine_51zzqqzz                                                                               (     14 ) ; /* 3 */
 }
            else
 {                                                                                                    ;
state_machine_51zzqqzz                                                                               (     15 ); /* 2 */
              {
                if
                  (
                  ushort_Mode == 4U
                  )
 {
    state_machine_51zzqqzz                                                                               (     16 ) ; /* 1 */
                  {
                    if
                      (
                      b_Fail == 1
                      )
 {
    state_machine_51zzqqzz                                                                               (     17 ) ; /* 1 */
                      {
              // Mode RETRACT
                        sshort_Position -= 1U ;
                      }
    state_machine_51zzqqzz                                                                               (     18 ) ; /* 3 */
 }
                    else
 {                                                                                                    ;
state_machine_51zzqqzz                                                                               (     19 ); /* 2 */
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
    state_machine_51zzqqzz                                                                               (     20 ) ; /* 1 */
                      {
              //*Change to mode PANEL CLOSE
                        ushort_Mode = 1U ;
                      }
 }                                                                                                   
else                                                                                                
  state_machine_51zzqqzz                                                                               (     21 ) ; /* 4 */
                  }
    state_machine_51zzqqzz                                                                               (     22 ) ; /* 3 */
 }
                else
 {                                                                                                    ;
state_machine_51zzqqzz                                                                               (     23 ); /* 2 */
                  {
                    if
                      (
                      ushort_Mode == 1U
                      )
 {
    state_machine_51zzqqzz                                                                               (     24 ) ; /* 1 */
                      {
            //* Mode PANEL CLOSE
                        if
                          (
                          b_Panel == 1
                          )
 {
    state_machine_51zzqqzz                                                                               (     25 ) ; /* 1 */
                          {
              //* Change to mode EXTEND
                            ushort_Mode = 2U ;
                          }
 }                                                                                                   
else                                                                                                
  state_machine_51zzqqzz                                                                               (     26 ) ; /* 4 */
                      }
    state_machine_51zzqqzz                                                                               (     27 ) ; /* 3 */
 }
                    else
 {                                                                                                    ;
state_machine_51zzqqzz                                                                               (     28 ); /* 2 */
                      {
                        if
                          (
                          ushort_Mode == 3U
                          )
 {
    state_machine_51zzqqzz                                                                               (     29 ) ; /* 1 */
                          {
            //*Mode PANEL OPEN
                            if
                              (
                              b_Panel == 0
                              )
 {
    state_machine_51zzqqzz                                                                               (     30 ) ; /* 1 */
                              {
              //*Change to mode RETRACT
                                ushort_Mode = 4U ;
                              }
 }                                                                                                   
else                                                                                                
  state_machine_51zzqqzz                                                                               (     31 ) ; /* 4 */
                          }
    state_machine_51zzqqzz                                                                               (     32 ) ; /* 3 */
 }
                        else
 {                                                                                                    ;
state_machine_51zzqqzz                                                                               (     33 ); /* 2 */
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
    state_machine_51zzqqzz                                                                               (     34 ) ; /* 3 */
 }
        else
 {                                                                                                    ;
state_machine_51zzqqzz                                                                               (     35 ); /* 2 */
          {
            if
              (
              ushort_State == 1U
              )
 {
    state_machine_51zzqqzz                                                                               (     36 ) ; /* 1 */
              {
                if
                  (
                  b_On == 1
                  )
 {
    state_machine_51zzqqzz                                                                               (     37 ) ; /* 1 */
                  {
                  /*Change State to IBIT*/
                    ushort_State = 2U ;
                    ushort_timeCount = 0U ;
                  }
 }                                                                                                   
else                                                                                                
  state_machine_51zzqqzz                                                                               (     38 ) ; /* 4 */
                if
                  (
                  b_Shutdown == 1
                  )
 {
    state_machine_51zzqqzz                                                                               (     39 ) ; /* 1 */
                  {
                  }
 }                                                                                                   
else                                                                                                
  state_machine_51zzqqzz                                                                               (     40 ) ; /* 4 */
              }
    state_machine_51zzqqzz                                                                               (     41 ) ; /* 3 */
 }
            else
 {                                                                                                    ;
state_machine_51zzqqzz                                                                               (     42 ); /* 2 */
              {
                if
                  (
                  ushort_State == 2U
                  )
 {
    state_machine_51zzqqzz                                                                               (     43 ) ; /* 1 */
                  {
                    if
                      (
                      ushort_Power <= 200U
                      )
 {
    state_machine_51zzqqzz                                                                               (     44 ) ; /* 1 */
                      {
                      /*Change State to EMERGENCY*/
                        ushort_State = 9U ;
                      }
    state_machine_51zzqqzz                                                                               (     45 ) ; /* 3 */
 }
                    else
 {                                                                                                    ;
state_machine_51zzqqzz                                                                               (     46 ); /* 2 */
                      {
                        if
                          (
                          ushort_Power <= 500U
                          )
 {
    state_machine_51zzqqzz                                                                               (     47 ) ; /* 1 */
                          {
                          /*Change State to FAIL*/
                            ushort_State = 3U ;
                          }
    state_machine_51zzqqzz                                                                               (     48 ) ; /* 3 */
 }
                        else
 {                                                                                                    ;
state_machine_51zzqqzz                                                                               (     49 ); /* 2 */
                          {
                            ushort_timeCount ++ ;
                            if
                              (
                              ushort_timeCount > 5U
                              )
 {
    state_machine_51zzqqzz                                                                               (     50 ) ; /* 1 */
                              {
                              /*Change State to READY*/
                                ushort_State = 4U ;
                              }
 }                                                                                                   
else                                                                                                
  state_machine_51zzqqzz                                                                               (     51 ) ; /* 4 */
                          }
 }
                      }
 }
                  }
    state_machine_51zzqqzz                                                                               (     52 ) ; /* 3 */
 }
                else
 {                                                                                                    ;
state_machine_51zzqqzz                                                                               (     53 ); /* 2 */
                  {
                    if
                      (
                      ushort_State == 3U
                      )
 {
    state_machine_51zzqqzz                                                                               (     54 ) ; /* 1 */
                      {
                      /*Change State to OPERATIONAL REDUCED*/
                        ushort_State = 7U ;
                        ushort_Mode = 1U ;
                        b_Fail = 1 ;
                      }
    state_machine_51zzqqzz                                                                               (     55 ) ; /* 3 */
 }
                    else
 {                                                                                                    ;
state_machine_51zzqqzz                                                                               (     56 ); /* 2 */
                      {
                        if
                          (
                          ushort_State == 4U
                          )
 {
    state_machine_51zzqqzz                                                                               (     57 ) ; /* 1 */
                          {
                            if
                              (
                              b_Maintenance == 1
                              )
 {
    state_machine_51zzqqzz                                                                               (     58 ) ; /* 1 */
                              {
                              /*Change State to MAINTENANCE*/
                                ushort_State = 6U ;
                              }
    state_machine_51zzqqzz                                                                               (     59 ) ; /* 3 */
 }
                            else
 {                                                                                                    ;
state_machine_51zzqqzz                                                                               (     60 ); /* 2 */
                              {
                              /*Change State to Operational*/
                                ushort_State = 7U ;
                              }
 }
                          }
    state_machine_51zzqqzz                                                                               (     61 ) ; /* 3 */
 }
                        else
 {                                                                                                    ;
state_machine_51zzqqzz                                                                               (     62 ); /* 2 */
                          {
                            if
                              (
                              ushort_State == 6U
                              )
 {
    state_machine_51zzqqzz                                                                               (     63 ) ; /* 1 */
                              {
                              /*State MAINTENANCE*/
                              }
 }                                                                                                   
else                                                                                                
  state_machine_51zzqqzz                                                                               (     64 ) ; /* 4 */
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
    state_machine_51zqendz                                                                               (      65 ) ; /* 30 */  
  }
#define qqqbranches     65
#define QQQMAXMCDCSIZE      2
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
  /* uncompressed data structures */                                                                                                                                                                                                                                
  /* uncompressed  bitmap */                                                                                                                                                                                                                                        
#define QQQFIXEDSIZE                                                                                                                                                                                                                                                
  static int qqqlast = 0;                                                                                                                                                                                                                                           
  static unsigned int bitmaparr[(qqqbranches/8)+1];                                                                                                                                                                                                                 
  extern unsigned int * qqzzglobarrb[QQQnumfil]; /*a*/                                                                                                                                                                                                              
  extern short qqzzglobbrns[QQQnumfil];                                                                                                                                                                                                                             
  extern short qqzzglobfileid[QQQnumfil];                                                                                                                                                                                                                           
  extern int qqupload_registered;                                                                                                                                                                                                                                   
  extern int state_machine_51zqqzqz(qqnull_params);                                                                                                                                                                                                                 
  extern int state_machine_51zqqzqz1(qqnull_params);                                                                                                                                                                                                                
                                                                                                                                                                                                                                                                    
  /* ----------- zscanf ---------------------------------------------------* 202 *                                                                                                                                                                                  
   *        Returns an integer extracted from a string                                                                                                                                                                                                              
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int state_machine_51zscanf(char * qqscan_str)                                                                                                                                                                                                              
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
    /* Check for a leading --- */                                                                                                                                                                                                                                   
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
  } /* end of zscanf */                                                                                                                                                                                                                                             
                                                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                                                    
  /* ----------------------------------------------------------------------* 215 *                                                                                                                                                                                  
   *            qqoutput                                                                                                                                                                                                                                            
   *    This is the principle output routine.                                                                                                                                                                                                                       
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static void qqoutput(FILEPOINT char * s, int i)                                                                                                                                                                                                                   
  {                                                                                                                                                                                                                                                                 
    /* not threaded */                                                                                                                                                                                                                                              
    /* not threaded, ( SINGLEFILE or FILEID ) */                                                                                                                                                                                                                    
    ldra_sprintf2 (&ldra_buffer[0], s,i,zzfileid);                                                                                                                                                                                                                  
    ldra_port_write (&ldra_buffer[0]);                                                                                                                                                                                                                              
  } /* end of qqoutput */                                                                                                                                                                                                                                           
                                                                                                                                                                                                                                                                    
  /* ----------------------------------------------------------------------* 216 *                                                                                                                                                                                  
   *            qqoutput0                                                                                                                                                                                                                                           
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static void qqoutput0(FILEPOINT char * s)                                                                                                                                                                                                                         
  {                                                                                                                                                                                                                                                                 
    ldra_port_write(s);                                                                                                                                                                                                                                             
  } /* end of qqoutput0 */                                                                                                                                                                                                                                          
	                                                                                                                                                                                                                                                                   
  /* ----------------------------------------------------------------------* 217 *                                                                                                                                                                                  
   *            qqoutput2                                                                                                                                                                                                                                           
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static void qqoutput2(FILEPOINT char * s, int i, int j)                                                                                                                                                                                                           
  {                                                                                                                                                                                                                                                                 
    ldra_sprintf2 (&ldra_buffer[0], s, i, j);                                                                                                                                                                                                                       
    ldra_port_write (&ldra_buffer[0]);                                                                                                                                                                                                                              
  } /* end of qqoutput2 */                                                                                                                                                                                                                                          
                                                                                                                                                                                                                                                                    
  /* ----------------------------------------------------------------------* 218 *                                                                                                                                                                                  
   *            qqoutput3                                                                                                                                                                                                                                           
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static void qqoutput3(FILEPOINT char * s, int i, int j, int k)                                                                                                                                                                                                    
  {                                                                                                                                                                                                                                                                 
    ldra_sprintf3 (&ldra_buffer[0], s, i, j, k);                                                                                                                                                                                                                    
    ldra_port_write (&ldra_buffer[0]);                                                                                                                                                                                                                              
  } /* end of qqoutput3 */                                                                                                                                                                                                                                          
                                                                                                                                                                                                                                                                    
  /* ----------------------------------------------------------------------* 219 *                                                                                                                                                                                  
   *            qqoutput4                                                                                                                                                                                                                                           
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static void qqoutput4(FILEPOINT char * s, int i, int j, int k, int l)                                                                                                                                                                                             
  {                                                                                                                                                                                                                                                                 
    ldra_sprintf4 (&ldra_buffer[0], s, i, j, k, l);                                                                                                                                                                                                                 
    ldra_port_write (&ldra_buffer[0]);                                                                                                                                                                                                                              
  } /* end of qqoutput4 */                                                                                                                                                                                                                                          
                                                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                                                    
  /* ----------------------------------------------------------------------* 223 *                                                                                                                                                                                  
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
    for (i=0; i<(qqqbranches/8)+1; i++)                                                                                                                                                                                                                             
    {                                                                                                                                                                                                                                                               
      bitmaparr[i] = 0;                                                                                                                                                                                                                                             
    }                                                                                                                                                                                                                                                               
    /* And so we don't optimise qqqupload() away */                                                                                                                                                                                                                 
    if (bitmaparr[0] != 0)                                                                                                                                                                                                                                          
    {                                                                                                                                                                                                                                                               
      qqqupload();                                                                                                                                                                                                                                                  
    }                                                                                                                                                                                                                                                               
    /* bitmap separate */                                                                                                                                                                                                                                           
    qqqlast = 1; /* stops qqfun() calling initialise again */                                                                                                                                                                                                       
    /* bitmap */                                                                                                                                                                                                                                                    
    /* bitmap singlefile */                                                                                                                                                                                                                                         
    /* bitmap singlefile notmainfl */                                                                                                                                                                                                                               
    i = 0;                                                                                                                                                                                                                                                          
    i--;                                                                                                                                                                                                                                                            
    do                                                                                                                                                                                                                                                              
    {                                                                                                                                                                                                                                                               
      i++;                                                                                                                                                                                                                                                          
                                                                                                                                                                                                                                                                    
    } while(qqzzglobarrb[i] != (unsigned int* ) 0 );                                                                                                                                                                                                                
    qqzzglobarrb[i] = &bitmaparr[0];/*b*/                                                                                                                                                                                                                           
    qqzzglobbrns[i] = qqqbranches;                                                                                                                                                                                                                                  
    qqzzglobfileid[i] = (0,zzfileid); /* deliberate */                                                                                                                                                                                                              
  } /* end of qqqqinitialise */                                                                                                                                                                                                                                     
                                                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                                                    
#undef QQQTEMP1                                                                                                                                                                                                                                                     
  /* ----------- zzqqzz ---------------------------------------------------* 322 *                                                                                                                                                                                  
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 324 *                                                                                                                                                                                  
   *            This is the routine which usually puts an integer into                                                                                                                                                                                              
   * the execution history file and returns unity.                                                                                                                                                                                                                  
   * This routine is the primary routine for gathering                                                                                                                                                                                                              
   * the execution history. Note that the last entry                                                                                                                                                                                                                
   * is usually inserted by state_machine_51zqzqzq.                                                                                                                                                                                                                 
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int state_machine_51zzqqzz(int qqqi)                                                                                                                                                                                                                       
  {                                                                                                                                                                                                                                                                 
    if ( state_machine_51zzopen != 1 )                                                                                                                                                                                                                              
    {                                                                                                                                                                                                                                                               
      state_machine_51zqqzqz1();                                                                                                                                                                                                                                    
    }                                                                                                                                                                                                                                                               
    if ( state_machine_51zzopen )                                                                                                                                                                                                                                   
    {                                                                                                                                                                                                                                                               
      /* bitmap */                                                                                                                                                                                                                                                  
      if ( qqqi > 0 )                                                                                                                                                                                                                                               
      {                                                                                                                                                                                                                                                             
         /* Standard probe */                                                                                                                                                                                                                                       
        /* Single execution history, not main program file */                                                                                                                                                                                                       
        if ( qqqlast == 0 )                                                                                                                                                                                                                                         
        {                                                                                                                                                                                                                                                           
          qqqqinitialise(qqqi);                                                                                                                                                                                                                                     
          qqqlast = 1;                                                                                                                                                                                                                                              
        }                                                                                                                                                                                                                                                           
        bitmaparr[((qqqi-1) >> 3)] |= (1<<((qqqi-1) & 0x07));                                                                                                                                                                                                       
      }                                                                                                                                                                                                                                                             
      else                                                                                                                                                                                                                                                          
      {                                                                                                                                                                                                                                                             
      }                                                                                                                                                                                                                                                             
    }                                                                                                                                                                                                                                                               
    return(1);                                                                                                                                                                                                                                                      
  } /* end of zzqqzz */                                                                                                                                                                                                                                             
                                                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                                                    
  /* ----------- zqendz ---------------------------------------------------* 331 *                                                                                                                                                                                  
   * This routine is called on exiting a routine in a                                                                                                                                                                                                               
   * module. It closes the execution history.                                                                                                                                                                                                                       
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int state_machine_51zqendz(int qqqi)                                                                                                                                                                                                                       
  {                                                                                                                                                                                                                                                                 
    if ( state_machine_51zzopen != 1 )                                                                                                                                                                                                                              
    {                                                                                                                                                                                                                                                               
      state_machine_51zqqzqz1();                                                                                                                                                                                                                                    
    }                                                                                                                                                                                                                                                               
    /* ----------------------------------------------------------------------* 332 *                                                                                                                                                                                
     * this is the one which puts an integer into                                                                                                                                                                                                                   
     * the execution history file and returns unity.                                                                                                                                                                                                                
     * The format of each field consists of six columns,                                                                                                                                                                                                            
     * the number is right justified in this field.                                                                                                                                                                                                                 
     * -----------------------------------------------------------------------------                                                                                                                                                                                
     */                                                                                                                                                                                                                                                             
    if ( state_machine_51zzopen )                                                                                                                                                                                                                                   
    {                                                                                                                                                                                                                                                               
      /* uncompressed */                                                                                                                                                                                                                                            
      /* uncompressed unbuffered */                                                                                                                                                                                                                                 
      /* uncompressed unbuffered bitmap */                                                                                                                                                                                                                          
      if ( qqqi > 0 )                                                                                                                                                                                                                                               
      {                                                                                                                                                                                                                                                             
        bitmaparr[((qqqi-1) >> 3)] |= (1<<((qqqi-1) & 0x07));                                                                                                                                                                                                       
      }                                                                                                                                                                                                                                                             
      else                                                                                                                                                                                                                                                          
      {                                                                                                                                                                                                                                                             
      }                                                                                                                                                                                                                                                             
    }                                                                                                                                                                                                                                                               
    return(1);                                                                                                                                                                                                                                                      
  } /* end of zqendz */                                                                                                                                                                                                                                             
                                                                                                                                                                                                                                                                    
  /* ----------- zqzqzq ---------------------------------------------------* 341 *                                                                                                                                                                                  
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 343 *                                                                                                                                                                                  
   * This routine should be called before the program                                                                                                                                                                                                               
   * terminates. It closes the execution history                                                                                                                                                                                                                    
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int state_machine_51zqzqzq(int qqqi)                                                                                                                                                                                                                       
  {                                                                                                                                                                                                                                                                 
    if ( state_machine_51zzopen != 1 )                                                                                                                                                                                                                              
    {                                                                                                                                                                                                                                                               
      state_machine_51zqqzqz1();                                                                                                                                                                                                                                    
    }                                                                                                                                                                                                                                                               
    /* not compressed */                                                                                                                                                                                                                                            
    /* do nothing for bitmap*/                                                                                                                                                                                                                                      
    /* upload the history */                                                                                                                                                                                                                                        
    /* bitmap */                                                                                                                                                                                                                                                    
    /* uncompressed bitmap */                                                                                                                                                                                                                                       
    state_machine_51zqendz(qqqi);                                                                                                                                                                                                                                   
    /* qqqupload closes the execution history file */                                                                                                                                                                                                               
    return(1);                                                                                                                                                                                                                                                      
  } /* end of zqzqzq */                                                                                                                                                                                                                                             
                                                                                                                                                                                                                                                                    
  /*   the following routines should be left alone */                                                                                                                                                                                                               
                                                                                                                                                                                                                                                                    
  /* ----------------------------------------------------------------------* 354 *                                                                                                                                                                                  
   *            state_machine_51zzzqtz                                                                                                                                                                                                                              
   * This routine captures the value of an expression                                                                                                                                                                                                               
   * and then returns a jump if the value is not 0.                                                                                                                                                                                                                 
   *                                                                                                                                                                                                                                                                
   *   qqqa - value of expression                                                                                                                                                                                                                                   
   *   qqqb - jump table index.                                                                                                                                                                                                                                     
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int state_machine_51zzzqtz(int qqqa, int qqqb)                                                                                                                                                                                                             
  {                                                                                                                                                                                                                                                                 
    if (qqqa)                                                                                                                                                                                                                                                       
    {                                                                                                                                                                                                                                                               
        state_machine_51zzqqzz(qqqb);                                                                                                                                                                                                                               
      }                                                                                                                                                                                                                                                             
      else                                                                                                                                                                                                                                                          
      {                                                                                                                                                                                                                                                             
        /* straight on jump */                                                                                                                                                                                                                                      
        state_machine_51zzqqzz(qqqb-1);                                                                                                                                                                                                                             
      }                                                                                                                                                                                                                                                             
    return(qqqa);                                                                                                                                                                                                                                                   
  } /* end of zzzqtz */                                                                                                                                                                                                                                             
                                                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                                                    
  /* ----------------------------------------------------------------------* 355 *                                                                                                                                                                                  
   *            state_machine_51zzzqfz                                                                                                                                                                                                                              
   * This routine captures the value of an expression                                                                                                                                                                                                               
   * and then returns a jump if the value is 0.                                                                                                                                                                                                                     
   *                                                                                                                                                                                                                                                                
   *  qqqa - value of expression                                                                                                                                                                                                                                    
   *  qqqb - jump table index.                                                                                                                                                                                                                                      
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int state_machine_51zzzqfz(int qqqa,int qqqb)                                                                                                                                                                                                              
  {                                                                                                                                                                                                                                                                 
    if (qqqa)                                                                                                                                                                                                                                                       
    {                                                                                                                                                                                                                                                               
      /* straight on jump */                                                                                                                                                                                                                                        
      state_machine_51zzqqzz(qqqb-1);                                                                                                                                                                                                                               
      return(qqqa);                                                                                                                                                                                                                                                 
    }                                                                                                                                                                                                                                                               
    else                                                                                                                                                                                                                                                            
    {                                                                                                                                                                                                                                                               
      state_machine_51zzqqzz(qqqb);                                                                                                                                                                                                                                 
    }                                                                                                                                                                                                                                                               
    return(qqqa);                                                                                                                                                                                                                                                   
  } /* end of zzzqfz */                                                                                                                                                                                                                                             
                                                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                                                    
  /* ----------------------------------------------------------------------* 359 *                                                                                                                                                                                  
   *            swzzqqzz                                                                                                                                                                                                                                            
   *  The purpose of this routine is to handle empty cases in switch statements                                                                                                                                                                                     
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int swzzqqzz(int qqqi, int onoff)                                                                                                                                                                                                                          
  {                                                                                                                                                                                                                                                                 
  if ( qqqzzglobflag == 1 || onoff == 1)                                                                                                                                                                                                                            
  {                                                                                                                                                                                                                                                                 
    if ( state_machine_51zzopen != 1 )                                                                                                                                                                                                                              
    {                                                                                                                                                                                                                                                               
      state_machine_51zqqzqz1();                                                                                                                                                                                                                                    
    }                                                                                                                                                                                                                                                               
    if ( state_machine_51zzopen )                                                                                                                                                                                                                                   
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
 
