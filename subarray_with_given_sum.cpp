#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    int k;
	    cin>>k;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int sum=0,s=0,e=0,f=0;
	    for(int i=0;i<n;i++){
	        sum+=arr[i];
	        while(sum>k){
	            sum-=arr[s];
	            s=s+1;
	        }
	        if(sum==k){
	            f=1;
	            e=i;
	            break;
	        }
	    }
	    if(f==1)
	    cout<<s+1<<" "<<e+1<<endl;
	    else
	    cout<<"-1"<<endl;
	}
	return 0;
}