#include <stdio.h>
#include "motor.h"

int main(void)
{
    MotorData motor;

    printf("Enter motor temperature (C): ");
    if (scanf("%f", &motor.temperature) != 1 ||
    motor.temperature < 0)
    {
    printf("Invalid temperature input!\n");
    return 1;
    }

    printf("Enter motor vibration (units): ");
    if (scanf("%f", &motor.vibration) != 1)
    {
       printf("Invalid vibration input!\n");
       return 1;
    }

    printf("Enter motor current (A): ");
    if (scanf("%f", &motor.current) != 1)
    {
       printf("Invalid current input!\n");
       return 1;
    }

    printf("====================================\n");
    printf(" Smart Industrial Motor Protection\n");
    printf(" Predictive Maintenance System\n");
    printf("====================================\n");

    display_readings(motor);

    const char *status = get_motor_status(motor);

    printf("\n--- Motor Status ---\n");
    printf("Status : %s\n", status);

    if (status[0] == 'C')
    {
        printf("Action : Immediate inspection required.\n");
    }
    else if (status[0] == 'W')
    {
        printf("Action : Check motor condition.\n");
    }
    else
    {
        printf("Action : Continue monitoring.\n");
    }

    return 0;
}

