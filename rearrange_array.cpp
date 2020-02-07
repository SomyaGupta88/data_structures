#include<iostream>

using namespace std;

void swap(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;
}

int pivot(int arr[],int l,int h){
	int pi=arr[h];
	int i=(l-1);
	for(int j=l;j<h;j++){
		if(arr[j]<pi){
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
		swap(&arr[i+1],&arr[h]);
		return (i+1);
}

void sort(int arr[],int l,int h){
	if(l<h){
		int pi=pivot(arr,l,h);
		sort(arr,l,pi-1);
		sort(arr,pi+1,h);
	}
}

void rearrange(int arr[],int n){
	sort(arr,0,n-1);
	//for(int m=0;m<n;m++)
	//	cout<<arr[m];
	int i=0,j=n-1;
	int a[n],k=0;
	for(i=0,j=n-1;i<=n/2||j>n/2;i++,j--){
		a[k]=arr[i];
		k++;
		a[k]=arr[j];
		k++;
	}
	for(int i=0;i<n;i++){
	       arr[i]=a[i];
	       cout<<arr[i]<<" ";
	}	      
       //cout<<" ";	
}

int main(int argc,char* argv[]){
	int arr[argc],k=0;
	for(int i=1;i<argc;i++){
		arr[k]=atoi(argv[i]);
		k++;
	}
	int *ar;
	rearrange(arr,k);
	//for(int i=0;i<k;i++){
	//	cout<<ar[i]<<" ";
	//}
	return 0;
}
