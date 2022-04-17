// Exercise Number 1.2
// Author: Raven Soriano

//Title: Fahrenheit To Celsius Version Two using For Loop
#include <stdio.h>

int main() {
    float fahrenheit;
    int max_temp = 300;

    for(fahrenheit = 0; fahrenheit <= max_temp; fahrenheit += 20) {
        printf("Fahrenheit: %3.0f = Celsius: %6.2f\n", fahrenheit, (fahrenheit - 32) * (5.0/9.0));
    }


    return 0;
}
