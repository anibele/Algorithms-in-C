//code to identify if the number entered by the user is positive or negative

#include <stdio.h>
main(){
	int n;
	printf("Enter a number: ");
	scanf("%i",&n);
	if(n>0){
		printf("The number is positive");
	}
    else if (n<0){
      	printf("The number is negative");
    }
    else{
    	printf("The number is zero");
    }
return 1;
}
