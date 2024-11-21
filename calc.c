#include "calc.h"
float PI = 3.14;
float E = 2.7;

float add(float a, float b) {
    return a + b;
}

float sub(float a, float b) {
    return a - b;
}

float mul(float a, float b) {
    return a * b;
}

float div(float a, float b) {
    if (b != 0) {
        return a / b;
    }
    return 0;
}
