#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    //int sum=(n*(n+1))/2;
	    int arr[n-1];
	    for(int j=0;j<n-1;j++){
	        cin>>arr[j];
	    }
	    /*for(int j=0;j<n-1;j++){
	        sum-=arr[j];
	    }
	    cout<<sum<<endl;*/
	    int found=0;
	    int hash[n]={0};
	    for(int j=0;j<n-1;j++){
	        hash[arr[j]]++;
	    }
	    for(int j=1;j<=n;j++)
	    if(hash[j]==0){
	     cout<<j<<endl;
	     found=1;
	     break;
	    }
	    if(found==0)
	    cout<<n<<endl;
	}
	return 0;
}