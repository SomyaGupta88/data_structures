#include <iostream>
using namespace std;

void profit(int arr[],int n){
    if(n==1){
        cout<<"No Profit";
        return;
    }
    
    int i=0,f=0;
    while(i<n-1){
        while(i<n-1 && arr[i]>=arr[i+1])
        i++;
        if(i==n-1 && f==0){
        cout<<"No Profit";
        return;
        }
        if( i==n-1){
            return;
        }
        int buy=i;
        i++;
        while(i<=n-1 && arr[i]>=arr[i-1])
        i++;
        int sell=i-1;
        //i++;
        cout<<"("<<buy<<" "<<sell<<") ";
        f=1;
    }
    //cout<<endl;
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
	    profit(arr,n);
	    cout<<"\n";
	}
	return 0;
}