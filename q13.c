#include <stdio.h>

int main(){
	int a,b;
    puts("Digite o valor de A e B:");
    scanf("%d %d", &a , &b);

	a = a ^ b;   
	b = a ^ b;   
	a = a ^ b;

	printf("A = %d, B = %d\n",a,b);


	return 0;

}
