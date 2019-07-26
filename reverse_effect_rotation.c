#include <stdio.h>

int main (int argc,char *argv[]) {
	int i=0,k=0,arr[argc];
	for(i=1;i<argc;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	reverse_effect(arr,k);
	return 0;
}

void reverse_effect(int arr[],int n)
{
	int i=0,p=0,d=0,j=0;
	for(i=0,j=n-1;i<n/2,j>=n/2;i++,j--)
	{
		if(arr[i]>arr[i+1])
		{
			p=i;
			break;
		}
		if(arr[j]<arr[j-1])
		{
			p=j-1;
			break;
		}
	}
	printf("%d \n",p);
	d=n-p-1;
	if(d<p)
	{
		for(i=0;i<d;i++)
		{
			int t=arr[n-1];
			for(j=n-1;j>=0;j--)
				arr[j]=arr[j-1];
			arr[0]=t;
		}
	}
	else
	{
		for(i=0;i<=p;i++)
		{
			int t=arr[0];
			for(j=0;j<n;j++)
				arr[j]=arr[j+1];
			arr[n-1]=t;
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
}
