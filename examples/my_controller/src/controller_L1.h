#include "stabilizer_types.h"
#include "math3d.h"

// helper functions for the main controller
void bslnPWMtoSI();
void cmdSItoPWM();
void L1Augmentation(struct mat33 currentR, struct vec currentVel, struct vec currentOmega, float dt);
void compute_injected_uncertainty();

// init, reset, and test functions
void controllerL1Init();
void controllerL1Reset();
bool controllerL1Test();

// main control function
void controllerL1(control_t *control, const setpoint_t *setpoint,
                                         const sensorData_t *sensors,
                                         const state_t *state,
                                         const stabilizerStep_t stabilizerStep);
