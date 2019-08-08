#include <stdio.h>
#define m 4

void swap_diagonals(int arr[m][m]) {
	for(int i=0;i<m;i++) {
		for(int j=0;j<m;j++) {
			if(i==j) {
				int temp=arr[i][j];
				arr[i][j]=arr[i][m-1-i];
				arr[i][m-1-i]=temp;
			}
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
	swap_diagonals(arr);
	for(int i=0;i<m;i++) {
		for(int j=0;j<m;j++) {
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
