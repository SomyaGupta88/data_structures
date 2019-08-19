#include <stdio.h>
#define M 3
#define N 3

void add(int arr[M][N],int arr1[M][N]) {
	int arr2[M][N];
	for(int i=0;i<M;i++)
		for(int j=0;j<N;j++)
			arr2[i][j]=arr[i][j]+arr1[i][j];
	printf("addition of 2d array\n");
	for(int i=0;i<M;i++) {
		for(int j=0;j<N;j++) {
			printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}
}

void sub(int arr[M][N],int arr1[M][N]) {
	int arr2[M][N];
	for(int i=0;i<M;i++)
		for(int j=0;j<N;j++)
			arr2[i][j]=arr[i][j]-arr1[i][j];
	printf("subtraction of 2d array\n");
	for(int i=0;i<M;i++) {
		for(int j=0;j<N;j++) {
			printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}
}

void mul(int arr[M][N],int arr1[M][N]) {
	int arr2[M][N];
	for(int i=0;i<M;i++)
		for(int j=0;j<N;j++)
			arr2[i][j]=0;
	for(int i=0;i<M;i++)
		for(int j=0;j<N;j++)
			for(int k=0;k<N;k++)
			arr2[i][j]+=arr[i][k]*arr1[k][j];
	printf("multiplication of 2d array\n");
	for(int i=0;i<M;i++) {
		for(int j=0;j<N;j++) {
			printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}
}

int main(int argc,char *argv[]) {
	int arr[M][N],arr1[M][N],k=1,k1=0;
	for(int i=0;i<M;i++) {
		for(int j=0;j<N;j++) {
			arr[i][j]=atoi(argv[k]);
				k++;
		}
	}
	for(int i=0;i<M;i++) {
		for(int j=0;j<N;j++) {
			arr1[i][j]=atoi(argv[k]);
				k++;
		}
	}
	add(arr,arr1);
	sub(arr,arr1);
	mul(arr,arr1);
	return 0;
}
