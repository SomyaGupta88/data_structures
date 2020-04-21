#include <iostream>
#include <algorithm>
using namespace std;
int p;
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}

int partition(int arr[],int l,int h){
    int x=arr[h],i=l;
    for(int j=l;j<h;j++){
        if(arr[j]<=x){
            swap(&arr[i],&arr[j]);
            i++;
        }
    }
    swap(&arr[i],&arr[h]);
    return i;
}

int kth(int arr[],int l,int h,int k){
    //sort(arr,arr+n);
    //cout<<arr[k-1]<<endl;
    if(k>0 && k<=p){
        int pos=partition(arr,l,h);
        //cout<<pos;
        if(pos==k-1)
        return arr[pos];
        if(pos>k-1)
        return kth(arr,l,pos-1,k);
        return kth(arr,pos+1,h,k);
    }
    return -1;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    p=n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int k;
	    cin>>k;
	    int s=kth(arr,0,n-1,k);
	    cout<<s<<endl;
	}
	return 0;
}