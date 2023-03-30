#include <stdio.h>
int main(){
    float haula,htraba, percentual, bruto, liq;
    puts("Digite o valor da hora aula e o número de horas trabalhadas no mês: ");
    scanf("%f %f", &haula, &htraba);
    puts("Digite o percentual  desconto do INSS: ");
    scanf("%f", &percentual);
    bruto = haula*htraba;
    liq = bruto - (bruto*(percentual/100)); 
    printf("O sálario bruto: %.2f\nO sálario liquído: %.2f\n", bruto, liq);


    return 0;
}