#include <stdio.h>
#include <stdlib.h>

float converteParaFahrenheit(float);

int main(void)
{
    float celcius = -10.0;
    while(celcius <= 50){
        printf("%f\t%f\n", celcius, converteParaFahrenheit(celcius));
        celcius = celcius + 10.0;
    }
}

float converteParaFahrenheit(float celcius){
    return celcius * (9/5) + 32;
}
