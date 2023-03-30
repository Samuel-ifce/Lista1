#include <stdio.h>
int main(){
    const float salario = 52.25;
    int dias;
    float liq = 0.00;
    puts("Digite o número de dias trabalhados: ");
    scanf("%d", &dias);


    if (dias <= 10){
        liq = (dias*salario-(dias*salario*0.1));
    }
    else if (dias > 10){
        liq = (dias*salario-(dias*salario*0.1)) + (dias*salario*0.2);
    }
    else if (dias > 20){
        liq = (dias*salario-(dias*salario*0.1)) + (dias*salario*0.3);
    }
    printf("Valor recebido é: %.2f\n",liq);


    return 0;


}