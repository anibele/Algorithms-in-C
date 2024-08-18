// Utilizar FOR para calcular a media escolar de alunos e dizer se foram aprovados
#include <stdio.h>
main(){
int i, qtd;
float n1,n2,n3,media;
printf("digite a quantidade de alunos: ");
scanf("%d",&qtd);
for (i=0;i<qtd;i++){
	printf("\nA seguir digite as notas do aluno %d: \n",i+1);
	printf("digite a nota 1: ");
	scanf("%f",&n1);
	printf("digite a nota 2: ");
	scanf("%f",&n2);
	printf("digite a nota 3: ");
	scanf("%f",&n3);
	media=(n1+n2+n3)/3;
	printf("\nA media final do aluno foi %f\n",media);
	if (media>=6){
		printf("aluno aprovado\n");
	}
	else{
		printf("aluno reprovado\n");
	}
}
return 1;
}