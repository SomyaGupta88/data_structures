#include<stdio.h>
int main(void)
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int ele;
	scanf("%d",&ele);
	//ele to be searched
	binary_search(arr,ele,n);
	return 0;
}
void binary_search(int arr[],int ele,int n)
{
	int big=0;
	int end=n-1;
	int mid=(big+end)/2;
	while((big<=end)&&(arr[mid]!=ele))
	{
		if(ele<arr[mid])
		{
			end=mid-1;
		}
		else
		{
			big=mid+1;
		}
		mid=(big+end)/2;
	}
	if(arr[mid]==ele)
	{
		printf("%d",mid);
	}
	else
	{
		printf("ele not found");
	}
}
