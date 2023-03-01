#include <stdio.h>
int main(){
    int comp, larg, altu, volume;
    puts("Digite o comprimento, largura e altura da caixa retangular:");
    scanf("%d %d %d", &comp, &larg, &altu);
    volume = comp*larg*altu;
    printf("O volume da caixa é %d\n", volume);




    return 0;
}