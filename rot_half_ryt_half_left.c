#include <stdio.h>

int main(int argc,char *argv[])
{
	int i=0,k=0,arr[argc];
	for(i=1;i<argc-1;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	int r=atoi(argv[argc-1]);
	rotate_right_left(arr,k,r);


	return 0;
}
void rotate_right_left(int arr[],int n,int r)
{
	int size=n/2;
	for(int j=0;j<r;j++)
	{
		int l_temp=arr[size-1];
		for(int i=size-1;i>=0;i--)
		{
			arr[i]=arr[i-1];
		}
		arr[0]=l_temp;
		int r_temp=arr[size];
		for(int i=size;i<n;i++)
		{
			arr[i]=arr[i+1];
		}
		arr[n-1]=r_temp;
	}
	for(int i=0;i<n;i++)
	printf("%d ",arr[i]);
}
