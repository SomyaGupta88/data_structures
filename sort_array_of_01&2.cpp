#include <iostream>
using namespace std;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int l=0,m=0,h=n-1;
	    while(m<=h){
	        switch(arr[m]){
	        case 0:
	            swap(arr[l],arr[m]);
	            l++;
	            m++;
	            break;
	        case 1:
	            m++;
	            break;
	        case 2:
	            swap(arr[m],arr[h]);
	            //m++;
	            h--;
	            break;
	    }
	    }
	    for(int j=0;j<n;j++){
	        cout<<arr[j]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}