//this program sorts the arraay givwn as input into ascending order using insertion sort algorithm
#include<stdio.h>

int main(){
	int n, i, j, temp;
	printf("Enter the number of elements:\n");
	scanf("%d", &n);
	int a[n];
	printf("Enter the array elements:\n");
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(i = 1; i < n; i++){
		for(j = i; j > 0; j--){
			if(a[j] < a[j - 1]){
				temp = a[j];
				a[j] = a[j-1];
			 	a[j -1] = temp;
			}
		}
	}
	printf("The array after sorting is,\n");
	for(i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;	
}
