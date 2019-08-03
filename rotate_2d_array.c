#include <stdio.h>
#define M 4
#define N 4
void rotate(int row,int col,int arr[M][N]) {
//	printf("%d %dgg\n",row,col);
	int m=M,n=N;
	if(row>m || col>n)
		return;
	if(row+1==m || col+1==n)
		return ;
	int curr=0,prev=0;
	
	prev=arr[row+1][col];
//	printf("%d",prev);
	for(int i=0;i<n;i++) {
		curr=arr[row][i];
		arr[row][i]=prev;
		prev=curr;
	}
//	printf("%d %d\n",prev,curr);
	row++;
//	printf("%d rr\n",row);
	for(int i=row;i<m;i++) {
		curr=arr[i][n-1];
		arr[i][n-1]=prev;
		prev=curr;
	}
	n--;
	for(int i=n-1;i>=col;i--) {
		curr=arr[m-1][i];
		arr[m-1][i]=prev;
		prev=curr;
	}
	m--;
	for(int i=m-1;i>=row;i--) {
		curr=arr[i][col];
		arr[i][col]=prev;
		prev=curr;
	}
	//printf("%d rrs\n",row);
	row++;
	col++;
	rotate(row,col,arr);
}


int main(int agc, char *argv[]) {
	//int m=atoi(argv[1]);
	//int n=atoi(argv[2]);
	int arr[M][N];
	int k=1;
	for(int i=0;i<M;i++) {
		for(int j=0;j<N;j++) {
			arr[i][j]=atoi(argv[k]);
			k++;
		}
	}
	int rows=0,cols=0;

	rotate(rows,cols,arr);

	for(int i=0;i<M;i++) {
		for(int j=0;j<N;j++) {
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
