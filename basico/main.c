#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d", &a);
    scanf("%d", &b);

    if(b != 0){
        c = a / b;
        printf("Resultado da divisão: ");
        printf("%d\n", c);
    }
    else
        printf("Divisão por zero.");
    return 0;
}
