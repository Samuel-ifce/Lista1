#include <stdio.h>

int main(){
    int h,m,s, conversor;
    puts("Digite número de horas, minutos e segundos:");
    scanf("%d %d %d" , &h, &m, &s);
    conversor = (h*3600)+(m*60)+s;
    printf("O total de segundos é %d\n", conversor);



    return 0;
}