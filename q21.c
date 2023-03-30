#include <stdio.h>
int main(){
    int n1,n2, multi;
    puts("Digite dois números: ");
    scanf("%d %d",&n1, &n2);
    multi = n1 % n2;
    switch (multi){
        case 0:
            printf("O número %d é múltiplo de %d\n", n1, n2);
        break;
        case 1:
            printf("O número %d não é múltiplo de %d\n", n1, n2);
        break;

    }


    return 0;
}