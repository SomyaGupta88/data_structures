#include <stdio.h>

int main (int argc, char *argv[])
{
	int i=0,k=0,arr[argc];
	for(i=1;i<argc;i++)
	{
		arr[k]=atoi(argv[i]);
			k++;
	}
	subarray(arr,k);

	return 0;
}
void subarray(int arr2[],int n)
{
	int n_of_subarray=((n*(n+1))/2);
	int p=0,q=0;
	int arr1[n_of_subarray][n];
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			for(int k=i;k<=j;k++)
			{
				printf("%d ",arr2[k]);
			}
			printf("\n");
		}
	}
}
