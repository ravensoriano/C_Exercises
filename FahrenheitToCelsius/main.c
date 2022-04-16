// Exercise Number 1
// Author: Raven Soriano

// Title: Fahrenheit temperatures and their Centigrade equivalent
// Formula to convert F to C --> 'C = (F-32) * 5/9'
#include <stdio.h>

int main() {
    int fahrenheit = 0, celsius = 0;
    int lower = 0, upper = 0, steps = 0;

    lower = 0;
    upper = 300;
    steps = 20;

    fahrenheit = lower;
    while (fahrenheit <= upper) {
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("Fahrenheit: %d\t= Celsius: %d\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + steps;
    }

}

