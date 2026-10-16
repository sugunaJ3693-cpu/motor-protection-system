#ifndef MOTOR_H
#define MOTOR_H

typedef struct
{
    float temperature;
    float vibration;
    float current;
} MotorData;

void display_readings(MotorData motor);
void check_motor_status(MotorData motor);

#endif
