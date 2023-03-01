#include <stdio.h>
int main(){
    float c, f;
    puts("Escreva uma temperatura em graus celsius:");
    scanf("%f",&c);
    f = (9*c+160)/5;
    printf("A temperatura %.2f em Fahrenheit é %.2f\n", c, f);


    return 0;
}