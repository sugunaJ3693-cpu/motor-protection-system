
#include <stdio.h>
#include <string.h>
#include "motor.h"

int run_test(const char *name, MotorData motor,
             const char *expected)
{
    const char *actual = get_motor_status(motor);

    if (strcmp(actual, expected) == 0)
    {
        printf("PASS: %s\n", name);
        return 1;
    }

    printf("FAIL: %s | Expected: %s | Got: %s\n",
           name, expected, actual);
    return 0;
}

int main(void)
{
    int passed = 0;
    int total = 5;

    MotorData normal = {65.0, 30.0, 2.1};
    MotorData warning_temp = {80.0, 30.0, 2.1};
    MotorData high_temp = {95.0, 30.0, 2.1};
    MotorData high_vibration = {65.0, 85.0, 2.1};
    MotorData high_current = {65.0, 30.0, 11.0};

    printf("\n=== Motor Protection Test Suite ===\n\n");

    passed += run_test("Normal Motor", normal, "NORMAL");
    passed += run_test("Temperature Warning",
                       warning_temp, "WARNING");
    passed += run_test("High Temperature",
                       high_temp, "CRITICAL");
    passed += run_test("High Vibration",
                       high_vibration, "CRITICAL");
    passed += run_test("High Current",
                       high_current, "CRITICAL");

    printf("\nResults: %d/%d tests passed\n", passed, total);

    return (passed == total) ? 0 : 1;
}

