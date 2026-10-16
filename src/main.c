
#include <stdio.h>
#include "motor.h"

int main(void)
{
    MotorData motor = {80.0, 30.0, 2.1};

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

