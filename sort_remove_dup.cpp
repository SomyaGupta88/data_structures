#include<iostream>
#include<set>

using namespace std;

void remove(int arr[],int n){
	set<int>s;
	for(int i=0;i<n;i++){
		s.insert(arr[i]);
	}
	set<int>::iterator it;
	for(it=s.begin();it!=s.end();it++){
		cout<<*it<<" ";
	}
}

int main(void){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	remove(arr,n);
	return 0;
}
