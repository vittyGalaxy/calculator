#include <iostream>
using namespace std;
#include <cmath>

float sum(float a, float b){
    float c = a + b;
    return c;

}

float subtraction(float a, float b){
    float c = a - b;
    return c;

}

float division(float a, float b){
    float c = a / b;
    return c;

}

float multiplication(float a, float b){
    float c = a * b;
    return c;

}

float sqrt(float a){
    float c = sqrt(a);
    return c;

}

float power(float a, float b){
    for(float b; b >= 0; b--){
        a = a * a;
    }
    return a;

}