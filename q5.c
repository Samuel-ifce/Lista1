#include <stdio.h>
int main(){
    float a, total;
    const int b = 10;
    scanf("%f", &a);
    total = (a*b/100)+ a;
    printf("O valor da conta é %.2f\nSeu total com a taxa do garçom é %.2f\n", a, total);



    return 0;
}