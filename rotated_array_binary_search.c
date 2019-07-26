#include <stdio.h>

int main(int argc, char * argv[])
{
	int i=0,k=0,arr[argc];
	for(i=1;i<argc-1;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	int str=0,end=k;
	int ele=atoi(argv[argc-1]);
//	printf("%d",k);
	find_pivot(arr,k,ele);
	return 0;
}

void find_pivot(int arr[],int n,int ele)
{
	int i=0,j=0,p=0;
	for(i=0,j=n-1;i<=n/2,j>n/2;i++,j--)
	{
		if(arr[i]>arr[i+1])
			p=i;
		if(arr[j]<arr[j-1])
			p=j-1;
	}
	int l= binary_search(arr,0,p,ele);
	int r=binary_search(arr,p+1,n-1,ele);
	if(l==-1 && r==-1)
		printf("element not fount");
}

int binary_search(int arr[],int l,int h,int ele)
{
	if(l>h)
		return -1;
	int mid=l+(h-l)/2;
	if(arr[mid]==ele)
	{
		printf("element found at index %d",mid);
		return mid;
	}
	if(l<=h && arr[mid]!=ele)
	{
		if(arr[mid]<ele)
			binary_search(arr,mid+1,h,ele);
		else
			binary_search(arr,l,mid-1,ele);
	}
}

