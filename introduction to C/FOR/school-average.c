// Use FOR to calculate the average grade of students and tell whether they passed
#include <stdio.h>
main(){
int i, qtd;
float n1, n2, n3, average;
printf("Enter the number of students: ");
scanf("%d", &qtd);
for (i = 0; i < qtd; i++){
	printf("\nNext, enter the grades for student %d: \n", i + 1);
	printf("Enter grade 1: ");
	scanf("%f", &n1);
	printf("Enter grade 2: ");
	scanf("%f", &n2);
	printf("Enter grade 3: ");
	scanf("%f", &n3);
	average = (n1 + n2 + n3) / 3;
	printf("\nThe final average for the student is %f\n", average);
	if (average >= 6){
		printf("student passed\n");
	}
	else{
		printf("student failed\n");
	}
}
return 1;
}
