// 1 - Verificar se o triangulo existe; 
// 2 - Se existir, definir a geometria dele.
#include <stdio.h>
main (){
	float a,b,c;
	printf("Digite o valor do lado A: ");
	scanf("%f",&a);
	printf("Digite o valor do lado B: ");
	scanf("%f",&b);
	printf("Digite o valor do lado C: ");
	scanf("%f",&c);
	if (a<=b+c && b<=a+c && c<=a+b) {
		printf("pode formar um triangulo");
		if (a==b&&b==c){
			printf(" equilatero");
		}
		else if (a==b&&b!=c){
			printf(" isoceles");
		}
		else if (a!=b&&b==c){
			printf(" isoceles");
		}
		else if (a==c&&b!=c){
			printf(" isoceles");
		}
		else if (a!=b&&b!=c){
			printf(" escaleno");
		}
	}
	else{
		printf("nao pode formar um triangulo");
	}
return 1;
}

