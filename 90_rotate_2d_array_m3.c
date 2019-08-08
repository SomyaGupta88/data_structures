#include<stdio.h>
#define M 4

void rotate(int arr[M][M]) {
	for(int i=0;i<M/2;i++) {
		for(int j=i;j<M-1-i;j++) {
			int temp=arr[M-1-i][j];
			arr[M-1-i][j]=arr[M-1-j][M-1-i];
			arr[M-1-j][M-1-i]=arr[i][M-1-j];
			arr[i][M-1-j]=arr[j][i];
			arr[j][i]=temp;
		}
	}
}

int main(int argc,char *argv[]) {
	int arr[M][M],k=1;
	for(int i=0;i<M;i++) {
		for(int j=0;j<M;j++) {
			arr[i][j]=atoi(argv[k]);
			k++;
		}
	}
	rotate(arr);
	for(int i=0;i<M;i++) {
		for(int j=0;j<M;j++) {
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

