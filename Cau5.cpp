#include<stdio.h>
#include<stdbool.h>

bool isPrime(int a){
	if(a < 2){
		return false;
	}
	for(int i = 2 ; i*i <= a; i++){
		if(a%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	int x;
	printf("Vui long nhap so muon kiem tra : ");
	scanf("%d",&x);
	if(isPrime(x)){
		printf("%d la so nguyen to",x);
	}else{
		printf("%d khong la so nguyen to",x);
	}
	return 0;
}
