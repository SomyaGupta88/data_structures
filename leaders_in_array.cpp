#include <iostream>
#include <stack>
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
	    int max=arr[n-1];
	    stack<int>s;
	    s.push(arr[n-1]);
	    for(int i=n-2;i>=0;i--){
	        if(max<=arr[i]){
	            max=arr[i];
	            s.push(max);
	        }
	    }
	    while(!s.empty()){
	        cout<<s.top()<<" ";
	        s.pop();
	    }
	    cout<<endl;
	}
	return 0;
}