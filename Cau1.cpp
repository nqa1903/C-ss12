#include<stdio.h>

int sum(int a , int b){
	int sum = a + b;
	return sum;
}

int main(){
	int result = sum(4 , 5);
	printf("Tong 4 + 5 = %d",result);
	return 0;
}
