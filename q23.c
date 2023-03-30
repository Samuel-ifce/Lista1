#include <stdio.h>
int main(){
    int n, dezena, centena, unidade;
    puts("Escreva um número de 3 dígitos: ");
    scanf("%d", &n);
    centena = n / 100;
    dezena = (n%100) / 10;
    unidade = n % 10;


    printf("%d%d%d\n",unidade, dezena,centena);

    return 0;
}