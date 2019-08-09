#include <stdio.h>

void merge(int arr[],int arr1[],int n1,int n2) {
	int i=0,j=0,k=0,s=0;
	int arr2[n1+n2];
	while(i!=n1 && j!=n2) {
		if(arr[i]<=arr1[j]) {
			arr2[s]=arr[i];
			i++;
			s++;
		}
		if(arr[i]>arr1[j]) {
			arr2[s]=arr1[j];
			j++;
			s++;
		}
	}
	while(i!=n1) {
		arr2[s]=arr[i];
		i++;
		s++;
	}
	while(j!=n2) {
		arr2[s]=arr1[j];
		j++;
		s++;
	}
	for(k=0;k<s;k++) {
		printf("%d ",arr2[k]);
	}
}

int main(int argc,char *argv[]) {
	int arr[argc],arr1[argc],k=0,k1=0;
	int n1=atoi(argv[1]);
	int n2=atoi(argv[2]);
	for(int i=3;i<=n1+2;i++) {
		arr[k]=atoi(argv[i]);
		k++;
	}
	
	for(int i=n1+3;i<=n1+2+n2;i++) {
		arr1[k1]=atoi(argv[i]);
		k1++;
	}
	merge(arr,arr1,n1,n2);
/*	for(int i=0;i<n1+n2;i++) 
		printf("%d ",arr[i]);
	//printf("\n");
	for(int i=0;i<n2;i++)
		printf("%d ",arr1[i]);*/
	return 0;
}
