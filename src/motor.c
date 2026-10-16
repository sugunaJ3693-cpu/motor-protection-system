
#include <stdio.h>
#include "motor.h"

void display_readings(MotorData motor)
{
    printf("\n--- Motor Sensor Readings ---\n");
    printf("Temperature : %.1f C\n", motor.temperature);
    printf("Vibration   : %.1f units\n", motor.vibration);
    printf("Current     : %.1f A\n", motor.current);
}

const char *get_motor_status(MotorData motor)
{
    if (motor.temperature >= 90.0 ||
        motor.vibration >= 80.0 ||
        motor.current >= 10.0)
    {
        return "CRITICAL";
    }
    else if (motor.temperature >= 75.0 ||
             motor.vibration >= 50.0 ||
             motor.current >= 7.0)
    {
        return "WARNING";
    }
    else
    {
        return "NORMAL";
    }
}

