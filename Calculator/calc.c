#include <stdio.h>

int main(){

int numA;
int numB;
int operation;

printf("Welcome to the calculator app!\n");
printf("Please enter your first number:\n");
scanf("%i",&numA);
printf("Please enter second number:\n");
scanf("%i",&numB);
printf("Please select operation from below:\n");
printf("1 - add\n");
printf("2 - subtract\n");
printf("3 - multiply\n");
printf("4 - divide\n");
scanf("%i",&operation);

if(operation==1){
	printf("Result %i\n",numA+numB);
}

if(operation==2){
	printf("Result %i\n",numA-numB);
}

return 0;
}
