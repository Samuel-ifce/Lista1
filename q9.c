#include <stdio.h>
int main(){
    int num;
    puts("Digite um valor inteiro: ");
    scanf("%d", &num);
    printf("O sucessor e o antecessor do número %d é %d e %d\n", num, num+1, num-1);



    return 0;
}