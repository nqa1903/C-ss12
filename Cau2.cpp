#include<stdio.h>

void display(int arr[] , int size){
	for(int i = 0 ; i < size ; i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

int main(){
	int arr[] = {1,2,3,4,5,6};
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("Phan tu trong mang : ");
	display(arr, size);
	return 0;
}
