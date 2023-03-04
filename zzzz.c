#include <stdio.h>
int main(){
    float raio;
    const float pi = 3.14159;
    puts("Digite o raio da circunferência");
    scanf("%f", &raio);
    printf("Diametro %.2f\nComprimento %.2f\nÁrea %.2f\n", raio*2, 2*pi*raio,pi*(raio*raio));



    return 0;
}