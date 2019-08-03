#include <stdio.h>
#define M 3
#define N 3

void swap(int *a,int *b) {
	int temp=*a;
	*a=*b;
	*b=temp;
}
void transpose(int arr[M][N]) {
	for(int i=0;i<M;i++)
		for(int j=i+1;j<N;j++)
			swap(&arr[i][j],&arr[j][i]);
}

void mirror(int arr[M][N]) {
	for(int i=0;i<M;i++)
		for(int j=0;j<N/2;j++)
			swap(&arr[i][j],&arr[i][N-1-j]);
}

int main(int argc,char *argv[]) {
	int arr[M][N],k=1;
	for(int i=0;i<M;i++) {
		for(int j=0;j<N;j++) {
			arr[i][j]=atoi(argv[k]);
			k++;
		}
	}
	transpose(arr);
	mirror(arr);
	for(int i=0;i<M;i++) {
		for(int j=0;j<N;j++) {
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
