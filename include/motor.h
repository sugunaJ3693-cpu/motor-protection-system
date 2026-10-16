#ifndef MOTOR_H
#define MOTOR_H

typedef struct
{
    float temperature;
    float vibration;
    float current;
} MotorData;

void display_readings(MotorData motor);
const char *get_motor_status(MotorData motor);

#endif
