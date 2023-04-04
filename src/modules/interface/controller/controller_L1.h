#ifndef __CONTROLLER_L1_H__
#define __CONTROLLER_L1_H__

#include "stabilizer_types.h"
#include "math3d.h"


void controllerL1Init(void);
bool controllerL1Test(void);
void controllerL1(control_t *control, const setpoint_t *setpoint,
                                         const sensorData_t *sensors,
                                         const state_t *state,
                                         const uint32_t tick);

#endif //__CONTROLLER_L1_H__