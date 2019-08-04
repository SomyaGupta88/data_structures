#include <stdio.h>
#define M 4
#define N 4
void rotate(int m,int n,int row,int col,int arr[M][N],int a[],int l) {
        if(row>=M/2 || col>=N/2) {
		a[l]=arr[M/2][N/2];
                return;
	}
        int curr=0,prev=0;

        prev=arr[row+1][col];
	a[l]=prev;
        l++;
        for(int i=col;i<n;i++) {
                curr=arr[row][i];
                arr[row][i]=prev;
                prev=curr;
		a[l]=prev;
                l++;
        }
        for(int i=row+1;i<m;i++) {
                curr=arr[i][n-1];
                arr[i][n-1]=prev;
                prev=curr;
		a[l]=prev;
                l++;
        }
        for(int i=n-2;i>=col;i--) {
                curr=arr[m-1][i];
                arr[m-1][i]=prev;
                prev=curr;
		a[l]=prev;
                l++;
        }
        for(int i=m-2;i>row;i--) {
                curr=arr[i][col];
                arr[i][col]=prev;
                prev=curr;
		a[l]=prev;
		l++;
        }
	l--;
	//printf("%d ",l);
        rotate(--m,--n,++row,++col,arr,a,l);
}

int main(int agc, char *argv[]) {
        //int m=atoi(argv[1]);
        //int n=atoi(argv[2]);
        int arr[M][N];
	int a[M*N],l=0;
        int k=1;
        for(int i=0;i<M;i++) {
                for(int j=0;j<N;j++) {
                        arr[i][j]=atoi(argv[k]);
                        k++;
                }
        }
        int rows=0,cols=0;
        int m=M,n=N;
        rotate(m,n,rows,cols,arr,a,l);
	int t=M*N;
	for(int i=0;i<t;i++)
		printf("%d ",a[i]);
	printf("\n");
        for(int i=0;i<M;i++) {
                for(int j=0;j<N;j++) {
                        printf("%d ",arr[i][j]);
                }
                printf("\n");
        }
        return 0;
}

