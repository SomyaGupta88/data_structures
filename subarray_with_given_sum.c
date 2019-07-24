#include <stdio.h>

int main(int argc,char *argv[])
{
	int i=0,k=0,arr[argc];
	for(i=1;i<argc-1;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	int sum=atoi(argv[argc-1]);
	find_subarray_sum(arr,k,sum);
	return 0;
}

void find_subarray_sum(int arr[],int n,int sum)
{
	int i=0,str=0,end=0;
	int cr_sum=arr[0];
	for(i=1;i<=n;i++)
	{
		while(cr_sum>sum && str<i-1)
		{
			cr_sum=cr_sum-arr[str];
			str++;
		}
		 if(cr_sum==sum)
		{
			printf("sum found from index %d to %d\n",str,end);
			for(int j=str;j<=end;j++)
			{
				printf("%d ",arr[j]);
			}
			break;
		}
		if(i<n)
		{
			cr_sum=cr_sum+arr[i];
			end=i;
		}
		if(cr_sum!=sum && i==n)
		{
			printf("No subarray found");
		}
	}
}

