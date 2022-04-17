// Exercise Number 1.2
// Author: Raven Soriano

//Title: Fahrenheit To Celsius Version Two using For Loop
#include <stdio.h>

#define MIN_TEMP 0
#define MAX_TEMP 300
#define STEP 20
int main() {
    int fahrenheit;

    for(fahrenheit = MIN_TEMP; fahrenheit <= MAX_TEMP; fahrenheit += STEP) {
        printf("Fahrenheit: %3d = Celsius: %6.2f\n", fahrenheit, (fahrenheit - 32) * (5.0/9.0));
    }


    return 0;
}
