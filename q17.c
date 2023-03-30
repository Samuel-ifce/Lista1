#include <stdio.h>

int main(){
    int num, mod;
    printf("Digite um número: ");
    scanf("%d", &num);

    mod = (num < 0) ? -num : num;

    printf("O valor absoluto de %d é %d\n", num, mod);
    return 0;


}