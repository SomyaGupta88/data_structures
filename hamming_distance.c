#include <stdio.h>

void rotate(int arr[],int n) {
	int temp=arr[n-1];
	for(int i=n-1;i>0;i--)
		arr[i]=arr[i-1];
	arr[0]=temp;
}


void find_hamming(int arr[],int n) {
	int max_diss=0,r=0,arr1[n];
	for(int i=0;i<n;i++)
		arr1[i]=arr[i];
	for(int j=0;j<n;j++) {
		int diss=0;
		rotate(arr,n);
		for(int i=0;i<n;i++) {
			if(arr[i]!=arr1[i]) {
				diss++;
			}
		}
		if(max_diss<diss) {
			max_diss=diss;
			r=j+1;
		}
		if(max_diss==n)
			break;
	}
	printf("rotation=%d max_hamming=%d",r,max_diss);
}


int main(int argc,char *argv[]) {
	int arr[argc],i=0,n=0;
	for(i=1;i<argc;i++) {
		arr[n]=atoi(argv[i]);
		n++;
	}
	find_hamming(arr,n);
	return 0;
}
