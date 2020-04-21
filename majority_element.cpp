#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int j=0;j<t;j++){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        //cout<<arr[i];
	    }
	    int max=-99999;
	    for(int i=0;i<n;i++){
	        if(arr[i]>max)
	        max=arr[i];
	    }
	    //cout<<max;
	    int hash[max];
	    for(int i=0;i<n;i++)
            hash[arr[i]]=0;
        for(int i=0;i<n;i++){
	        //cout<<hash[arr[i]]<<" ";
	       hash[arr[i]]++;
	    }
	    int found=0;
	    for(int i=0;i<n;i++){
	        if(hash[arr[i]]>n/2){
	            cout<<arr[i]<<endl;
	            found=1;
	            break;
	        }
	    }
	    if(found==0)
	    cout<<"-1"<<endl;
	}
	return 0;
}
