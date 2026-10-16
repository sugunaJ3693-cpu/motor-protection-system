
# Motor Protection System - Test Results

## Test 1: Normal Motor
- Temperature: 65 C
- Vibration: 30 units
- Current: 2.1 A
- Expected Status: NORMAL

## Test 2: High Temperature
- Temperature: 95 C
- Expected Status: CRITICAL
- Fault Code: F01

## Test 3: High Vibration
- Vibration: 85 units
- Expected Status: CRITICAL
- Fault Code: F02

## Test 4: High Current
- Current: 11 A
- Expected Status: CRITICAL
- Fault Code: F03

## Project Limitation
This is a software simulation. It does not read real sensors
or physically stop a motor. Thresholds are example values
and must be validated before any real-world use.
