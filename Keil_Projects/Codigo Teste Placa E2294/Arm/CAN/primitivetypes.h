/**
 * @file primitivetypes.h
 * @date Jul. 2009
 * @author Eng. Leandro Fabr�cio Auler - Mectron S/A
 * @brief Cabe�alho contendo redefini��o dos tipos primitivos.
 *
 */
//------------------------------------------------------------------------------
#ifndef _HAL_PRIMITIVETYPES_H
#define _HAL_PRIMITIVETYPES_H

//------------------------------------------------------------------------------

#define NULL            ((void *) 0)

#ifndef __cplusplus
#define TRUE            1       /**< Representa��o booleana para verdadeiro. */
#define FALSE           0       /**< Representa��o booleana para falso. */
typedef unsigned char bool_t;     /**< Tipo inteiro n�o sinalizado de 8 bits usado para representa��o booleana. */
#else
#define TRUE            true    /**< Representa��o booleana para verdadeiro. */
#define FALSE           false   /**< Representa��o booleana para falso. */
#endif //__cplusplus
typedef unsigned char byte_t;   /**< Tipo byte. */

typedef unsigned char   uint8_t;  /**< Tipo inteiro n�o sinalizado de 8 bits. */
typedef unsigned short  uint16_t; /**< Tipo inteiro n�o sinalizado de 16 bits. */
typedef unsigned long   uint32_t; /**< Tipo inteiro n�o sinalizado de 32 bits. */
typedef signed char     int8_t;   /**< Tipo inteiro sinalizado de 8 bits. */
typedef signed short    int16_t;  /**< Tipo inteiro sinalizado de 16 bits. */
typedef signed long     int32_t;  /**< Tipo inteiro sinalizado de 32 bits. */

#ifndef __MECTRONAPI_USE_PC__
typedef signed long long        int64_t;          /**< Tipo inteiro sinalizado de 64 bits. */
typedef unsigned long long      uint64_t;         /**< Tipo inteiro n�o sinalizado de 64 bits. */
#else
#ifdef __GNUC__
typedef signed long long        int64_t;          /**< Tipo inteiro sinalizado de 64 bits. */
typedef unsigned long long      uint64_t;         /**< Tipo inteiro n�o sinalizado de 64 bits. */
#else
typedef signed __int64          int64_t;          /**< Tipo inteiro sinalizado de 64 bits. */
typedef unsigned __int64        uint64_t;         /**< Tipo inteiro n�o sinalizado de 64 bits. */
#endif  //__GNUC__
#endif  //__MECTRONAPI_USE_PC__

typedef volatile unsigned short ureg16_t;         /**< Tipo inteiro n�o sinalizado de 16 bits usando registrador da CPU. */
typedef volatile unsigned long  ureg32_t;         /**< Tipo inteiro n�o sinalizado de 32 bits usando registrador da CPU. */

#endif // _HAL_PRIMITIVETYPES_H
