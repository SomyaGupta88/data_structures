#include <stdio.h>

int gcd(int n,int r) {
	int g=0;
	for(int i=1;i<=n,i<=r;i++)
	 	if(n%i==0 && r%i==0)
			g=i;
	return g;
}

void rotate_left(int arr[],int g,int n) {
	int k=0;
	for(int i=0;i<g;i++) {
		int temp=arr[i];
		for(int j=i;j<n-g;j+=g) {
			arr[j]=arr[j+g];
			k=j+g;
		}
		arr[k]=temp;
	}
}

void rotate_right(int arr[],int g,int n) {
	int k=0;
	for(int i=n-1;i>n-1-g;i--) {
		int temp=arr[i];
		for(int j=i;j>=g;j-=g) {
			arr[j]=arr[j-g];
			k=j-g;
		}
		arr[k]=temp;
	}
}

int main(int argc,char *argv[]) {
	int arr[argc],i=0,n=0;
	for (i=1;i<argc-1;i++) {
		arr[n]=atoi(argv[i]);
		n++;
	}
	int arr1[n];
	for(i=0;i<n;i++)
		arr1[i]=arr[i];
	int r=atoi(argv[argc-1]);
	int g=gcd(n,r);

	rotate_left(arr,g,n);
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);

	printf("\n");

	rotate_right(arr1,g,n);
	for(i=0;i<n;i++)
		printf("%d ",arr1[i]);

	return 0;
}

