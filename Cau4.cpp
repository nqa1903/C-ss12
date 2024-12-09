#include<stdio.h>

int max(int arr[] , int size){
	int max = arr[0];
	for(int i = 0 ; i < size ; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}

int main(){
	int arr[] = {4,5,8,6,10,15};
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("Phan tu lon nhat trong mang la : %d",max(arr,size));
	return 0;
}
