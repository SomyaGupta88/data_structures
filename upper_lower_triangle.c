#include <stdio.h>
#define m 4

void upper_triangle(int arr[m][m]) {
	for(int i=0;i<m;i++) {
		for(int j=i+1;j<m;j++) {
			arr[j][i]=0;
		}
	}
}

void lower_triangle(int arr[m][m]) {
	for(int i=0;i<m-1;i++) {
		for(int j=i+1;j<m;j++) {
			arr[i][j]=0;
		}
	}
}

int main(int argc,char *argv[]) {
	int arr[m][m],k=1;
	for(int i=0;i<m;i++) {
		for(int j=0;j<m;j++) {
			arr[i][j]=atoi(argv[k]);
					k++;
		}
	}
	int arr1[m][m];
	for(int i=0;i<m;i++) {
		for(int j=0;j<m;j++) {
			arr1[i][j]=arr[i][j];
		}
	}
	printf("Upper triangular matrix:-\n");
	upper_triangle(arr);
	for(int i=0;i<m;i++) {
		for(int j=0;j<m;j++) {
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n Lower triangular matrix:-\n");
	lower_triangle(arr1);
	for(int i=0;i<m;i++) {
		for(int j=0;j<m;j++) {
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
}
