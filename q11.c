#include <stdio.h>
int main(){
    float real, cota, conver;
    puts("Digite o valor a ser convertido e a cotação atual:");
    scanf("%f %f", &real, &cota);
    conver = cota*real;
    printf("O valor em reais é %.2f e em dólar é %.2f\n", real, conver);


    return 0;
}