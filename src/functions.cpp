#include <iostream>
using namespace std;
#include <cmath>
#include "../include/functions.h"

float sum(float a, float b)
{
    float c = a + b;
    return c;
}

float difference(float a, float b)
{
    float c = a - b;
    return c;
}

float division(float a, float b)
{
    float c = a / b;
    return c;
}

float multiplication(float a, float b)
{
    float c = a * b;
    return c;
}

float compute_square_root(float a)
{
    float c = sqrt(a);
    return c;
}

// tipo, nome, input
float power(float a, float b)
{
    float c = pow(a, b); //FIXME
    return (float)c;
}

// FIXME: METTI I NOMI PER BENE!!!