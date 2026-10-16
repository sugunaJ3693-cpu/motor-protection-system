
# Smart Industrial Motor Protection & Predictive Maintenance System

## Overview
A C-based software simulation that monitors motor temperature,
vibration, and current to identify abnormal conditions.

## Features
- Motor sensor reading simulation
- Normal, warning, and critical status detection
- Fault codes for high temperature, vibration, and current
- Multiple test cases
- Test results documentation

## Technologies
- C Programming
- GCC Compiler
- Ubuntu Linux
- Git and GitHub

## How to Run

Compile the main program:

```bash
gcc -Wall -Wextra -std=c11 -Iinclude src/main.c src/motor.c -o motor_system
```

Run it:

```bash
./motor_system
```

## Run Tests

```bash
gcc -Wall -Wextra -std=c11 -Iinclude tests/test_motor.c src/motor.c -o test_motor
./test_motor
```

## Limitation
This is a software simulation. It does not use physical sensors
or directly control a real motor. Thresholds are illustrative
and require engineering validation before real-world use.
