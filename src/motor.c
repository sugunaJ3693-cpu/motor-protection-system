#include <stdio.h>
#include "motor.h"

void display_readings(MotorData motor)
{
    printf("\n--- Motor Sensor Readings ---\n");
    printf("Temperature : %.1f C\n", motor.temperature);
    printf("Vibration   : %.1f units\n", motor.vibration);
    printf("Current     : %.1f A\n", motor.current);
}

void check_motor_status(MotorData motor)
{
    printf("\n--- Motor Status ---\n");

    if (motor.temperature >= 90.0)
    {
        printf("Status     : CRITICAL\n");
        printf("Fault Code : F01 - High Temperature\n");
        printf("Action     : Immediate inspection required.\n");
    }
    else if (motor.vibration >= 80.0)
    {
        printf("Status     : CRITICAL\n");
        printf("Fault Code : F02 - High Vibration\n");
        printf("Action     : Immediate inspection required.\n");
    }
    else if (motor.current >= 10.0)
    {
        printf("Status     : CRITICAL\n");
        printf("Fault Code : F03 - High Current\n");
        printf("Action     : Immediate inspection required.\n");
    }
    else if (motor.temperature >= 75.0 ||
             motor.vibration >= 50.0 ||
             motor.current >= 7.0)
    {
        printf("Status     : WARNING\n");
        printf("Fault Code : F10 - Abnormal Reading\n");
        printf("Action     : Check motor condition.\n");
    }
    else
    {
        printf("Status     : NORMAL\n");
        printf("Fault Code : F00 - No Detected Fault\n");
        printf("Action     : Continue monitoring.\n");
    }
}
