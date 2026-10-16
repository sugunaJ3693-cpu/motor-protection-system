#include <stdio.h>
#include "motor.h"

int main(void)
{
    MotorData motor = {65.0, 30.0, 11.0};

    printf("====================================\n");
    printf(" Smart Industrial Motor Protection\n");
    printf(" Predictive Maintenance System\n");
    printf("====================================\n");

    display_readings(motor);
    check_motor_status(motor);

    return 0;
}
