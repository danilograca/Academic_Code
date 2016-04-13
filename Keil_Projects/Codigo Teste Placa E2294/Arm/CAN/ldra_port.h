#ifndef LDRA_PORT_H
#define LDRA_PORT_H

#ifdef __cplusplus
extern "C" {
#endif 

/* initialise the port */
extern void ldra_port_init(void);

/* write a zero terminated string to the port */
extern void ldra_port_write(const char* pMsg);

/* Check to see if the port has already been configured */
/* Ensures that the port is not initialised twice       */
extern int ldra_port_is_configured (void);

/* Allow characters to be written to the terminal */
extern void term_printf (const char* aMsg);

/* Allow character to be read from the terminal */
extern char term_getchar(void);

#ifdef __cplusplus
}
#endif

#endif /* LDRA_PORT_H */
