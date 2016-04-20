/* 
 * File:	 operational.h
 * Author: @DaniloGraca
 *
 * Created on 15 de Abril de 2016, 19:45
 */

#ifndef OPERATIONAL_H
#define OPERATIONAL_H

#ifdef __cplusplus
extern "C" {
#endif



    /*
     * Variables Initialize
     */
    void operational_init(void);

    /*
     * Procedure to operate panel
     */
    void operational(UINT_16 FAIL);

    /*
     * Procedure to shutdown the system safely 
     */
    void shutdown(UINT_16 FAIL);

#ifdef __cplusplus
}
#endif

#endif /* OPERATIONAL_H */

