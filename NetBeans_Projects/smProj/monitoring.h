/* 
 * File:	 monitoring.h
 * Author: @DaniloGraca
 *
 * Created on 17 de Abril de 2016, 02:40
 */

#ifndef MONITORING_H
#define MONITORING_H

#ifdef __cplusplus
extern "C" {
#endif

    UINT_16 powerMonitoring(UINT_16 state); /* Procedure to monitor power */

    UINT_16 getPower(void); /* Procedure to get power */

#ifdef __cplusplus
}

#endif
#endif /* MONITORING_H */
