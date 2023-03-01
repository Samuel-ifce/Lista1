#include <stdio.h>
int main(){
    float altura, peso;
    char sexo;
    puts("Digite sua altura e seu sexo: ");
    scanf("%f %c", &altura, &sexo);
    switch (sexo){
        case 'M':
        peso = (72.7*altura-58);
        printf("O seu peso ideal é %.2f\n", peso);
        break;
        case 'F':
        peso = (62.1*altura-44.7);
        printf("O seu peso ideal é %.2f\n", peso);
        break;
        default:
        printf("Você digitou um valor inválido\n");
    }




    return 0;
}