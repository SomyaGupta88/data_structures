#include <stdio.h>

void selection_sort(int arr[],int n) {
	int sm=0,k=0;
	for(int i=0;i<n-1;i++) {
		sm=arr[i];
		for(int j=i+1;j<n;j++) {
			if(sm>arr[j]) {
				sm=arr[j];
				k=j;
			}
		}
				arr[k]=arr[i];
				arr[i]=sm;
	}
}

int main(int argc,char *argv[]) {
	int arr[argc],k=0;
	for(int i=1;i<argc;i++) {
		arr[k]=atoi(argv[i]);
		k++;
	}

	selection_sort(arr,k);
	for(int i=0;i<k;i++) 
		printf("%d ",arr[i]);
	return 0;
}
