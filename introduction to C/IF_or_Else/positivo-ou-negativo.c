//codigo para identificar se o numero digitado pelo usuario eh positivo ou negativo

#include <stdio.h>
main(){
	int n;
	printf("Digite um numero: ");
	scanf("%i",&n);
	if(n>0){
		printf("O numero eh positivo");
	}
    else if (n<0){
      	printf("O numero eh negativo");
    }
    else{
    	printf("O numero digitado eh zero");
    }
return 1;
}