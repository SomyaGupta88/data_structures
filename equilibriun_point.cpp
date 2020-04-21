#include <iostream>
using namespace std;

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
	    int sum=0;
	    for(int i=0;i<n;i++){
	        sum+=arr[i];
	    }
	    int lsum=0,found=0;
	    for(int i=0;i<n;i++){
	        sum-=arr[i];
	        if(sum==lsum){
	            found=1;
	            cout<<i+1;
	        }
	        lsum+=arr[i];
	    }
	    if(found==0)
	    cout<<"-1";
	    /*if(n==1){
	        cout<<"1";
	    }
	    else{
    	    int sum=0,found=0;
    	    for(int i=0;i<n;i++){
    	        sum+=arr[i];
    	        arr[i]=sum;
    	    }
    	    for(int i=1;i<n-1;i++){
    	        if(arr[i-1]==arr[n-1]-arr[i]){
    	            cout<<i+1;
    	            found=1;
    	            break;
    	        }
	        }
	        if(found==0){
	            cout<<"-1";
	        }
	    }*/
	    cout<<endl;
	}
	return 0;
}