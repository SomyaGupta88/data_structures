#include <stdio.h>

void insertion_sort(int arr[],int n) {
	for(int i=1;i<n;i++) {
		int temp=arr[i];
			for(int j=i-1;j>=0;j--) {
				if(temp<arr[j]) {
					arr[j+1]=arr[j];
					arr[j]=temp;
				}
			}
		}
	}

int main(int argc,char *argv[]) {
	int arr[argc],k=0;
	for(int i=1;i<argc;i++) {
		arr[k]=atoi(argv[i]);
		k++;
	}

	insertion_sort(arr,k);
	for(int i=0;i<k;i++) 
		printf("%d ",arr[i]);
	return 0;
}
