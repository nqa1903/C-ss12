#include<stdio.h>

int factorial(int number){
	int factorial = 1;
	for(int i = 1 ; i <= number ; i++){
		factorial *= i;
	}
	return factorial;
}

int main(){
	int number = 5;
	printf("Gia thua cua 5 la : %d",factorial(5));
	return 0;
}
