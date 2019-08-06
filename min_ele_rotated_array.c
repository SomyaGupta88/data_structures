#include <stdio.h>

int main(int argc,char *argv[])
{
	int i=0,k=0,arr[argc];
	for(i=1;i<argc;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	find_min(arr,k);
	return 0;
}

void find_min(int arr[],int n)
{
	int i=0,j=0,min;
	for(i=0,j=n-1;i<n/2,j>n/2;i++,j--)
	{
		if(arr[i]>arr[i+1]){
			min=i+1;
			break;
		}
		if(arr[j]<arr[j-1]){
			min=j;
			break;
		}
	}
	printf("minimum element '%d' found at index %d",arr[min],min);
}


