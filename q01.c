#include <stdio.h>
#include <stdlib.h>

int main(){

    int x;
    x = 7 + 3*6/2-1;
    printf("1. 7 + 3*6/2-1\n");
    printf("Primeiro resolve a multiplição e a divisão, depois soma 7+9 e diminui por -1\n");
    printf("Resultado = %d\n",x);

    x = 2%2 + 2*2-2/2;
    printf("2. 2 %% 2 + 2*2-2/2\n");
    printf("Primeiro tira o resto, depois a multiplicação e a divisão e depois subtrai\n");
    printf("Resultado = %d\n",x);

    x = (3 * 9 * (3 + (9*3/ (3) ) ) );
    printf("Primeiro faz (9*3/3) soma o +3 que está dentro do parênteses e depois faz as multiplicações normais\n");
    printf("Resultado = %d\n",x);



    return 0;
}