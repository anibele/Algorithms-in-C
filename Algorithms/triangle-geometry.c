// 1 - Check if the triangle exists;
// 2 - If it exists, define its geometry.
#include <stdio.h>
main (){
	float a, b, c;
	printf("Enter the value of side A: ");
	scanf("%f", &a);
	printf("Enter the value of side B: ");
	scanf("%f", &b);
	printf("Enter the value of side C: ");
	scanf("%f", &c);
	if (a <= b + c && b <= a + c && c <= a + b) {
		printf("can form a triangle");
		if (a == b && b == c){
			printf(" equilateral");
		}
		else if (a == b && b != c){
			printf(" isosceles");
		}
		else if (a != b && b == c){
			printf(" isosceles");
		}
		else if (a == c && b != c){
			printf(" isosceles");
		}
		else if (a != b && b != c){
			printf(" scalene");
		}
	}
	else{
		printf("cannot form a triangle");
	}
return 1;
}