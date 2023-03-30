#include <stdio.h>
#include <stdlib.h>
int main(){
        int n, validacao;
        puts("Digite um número: ");
        scanf("%d", &n);
        validacao = n%2;
        switch(validacao){
            case 0:
                printf("O número %d é par\n",n);
            exit(1);
        }
        printf("O número %d é ímpar\n",n);

    return 0;
}