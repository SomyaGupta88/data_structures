#include <stdio.h>

int main(int argc,char *argv[]) {
	int i=0,k=0,arr[argc];
	for(i=1;i<argc-1;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	int ele=atoi(argv[argc-1]);
	int m= binary_search(arr,0,k,ele);
	if(m==-1)
		printf("ele not found");
	else
		printf("element found at index %d",m);
	return 0;
}

int binary_search(int arr[],int l,int h,int ele)
{
	if(l>h)
		return -1;
	int mid=l+((h-l)/2);
	if(arr[mid]==ele)
		return mid;
	if(arr[mid]>=arr[l]) {
		       if(ele<=arr[mid] && ele>=arr[l])
		return binary_search(arr,l,mid-1,ele);
         return binary_search(arr,mid+1,h,ele);
	}
       if(ele>=arr[mid] && ele<=arr[h])
		return binary_search(arr,mid+1,h,ele);
	return binary_search(arr,l,mid-1,ele);
}

