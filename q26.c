#include <stdio.h>
#include <math.h>

int main(){
    float x1, x2, y1, y2, distancia;
    puts("Digite o valor de x1 e x2: ");
    scanf("%f %f",&x1, &x2);
    
    puts("Digite o valor de y1 e y2: ");
    scanf("%f %f",&y1, &y2);
    
    distancia = sqrt(pow(x2-x1, 2)+pow(y1-y2, 2));
    
    printf("%.2f",distancia);
    
    
    
    
    
    
    
    
    return 0;
}