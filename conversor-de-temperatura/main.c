#include <stdio.h>

float converteParaFahrenheit(float celcius){
    return celcius * (9/5) + 32;
}

int main(void)
{
    for(float celcius = -10; celcius <= 50; celcius = celcius + 10){
        printf("%f\t%f\n", celcius, converteParaFahrenheit(celcius));
    }
}
