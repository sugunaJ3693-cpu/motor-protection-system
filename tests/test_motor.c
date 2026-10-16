#include <stdio.h>
#include "motor.h"

int main(void)
{
    MotorData normal = {65.0, 30.0, 2.1};
    MotorData high_temp = {95.0, 30.0, 2.1};
    MotorData high_vibration = {65.0, 85.0, 2.1};
    MotorData high_current = {65.0, 30.0, 11.0};

    printf("\nTEST 1: Normal Motor\n");
    check_motor_status(normal);

    printf("\nTEST 2: High Temperature\n");
    check_motor_status(high_temp);

    printf("\nTEST 3: High Vibration\n");
    check_motor_status(high_vibration);

    printf("\nTEST 4: High Current\n");
    check_motor_status(high_current);

    return 0;
}
