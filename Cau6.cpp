#include<stdio.h>
#include<stdbool.h>

bool isPerfect(int x){
	if(x <= 0){
		return false;
	}
	int sum = 0;
	for(int i = 1 ; i <= x/2;i++){
		if(x%i==0){
			sum += i;
		}
	}
	return sum == x;
}

int main(){
	int x;
	printf("Nhap vao so muon kiem tra : ");
	scanf("%d",&x);
	if(isPerfect(x)){
		printf("%d la so hoan hao",x);
	}else{
		printf("%d khong la so hoan hao",x);
	}
	return 0;
}
