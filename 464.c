#include<stdio.h>
int main(){
	int number;
	printf("enter number");
	scanf("%d",&number);
	int arr[number];
	arr[0]=0;
	arr[1]=1;
	arr[2]=2;
	arr[3]=3;
	int i;
	for(i=4;i<number;i++){
		arr[i]=arr[i-1]+arr[i-2]+arr[i-3]+arr[i-4];
	}
	for(i=0;i<number;i++){
		printf("%d,",arr[i]);
	}
	
}
