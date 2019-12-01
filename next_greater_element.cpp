#include <iostream>
#include <stack>

using namespace std;

void nge(int arr[],int n){
	stack<int>s;
	s.push(arr[0]);
	for(int i=1;i<n;i++){
		if(arr[i]<s.top()){
			s.push(arr[i]);
		}
		else{
			while(!s.empty() && arr[i]>s.top()){
				int x=s.top();
				s.pop();
				cout<<x<<"-- "<<arr[i]<<endl;
			}
			s.push(arr[i]);
		}
	}
	while(!s.empty()){
		int x=s.top();
		s.pop();
		cout<<x<<"-- "<<-1<<endl;
	}
}

int main(int argc,char* argv[]){
        int arr[argc], n=0;
        for(int i=1;i<argc;i++){
                arr[n]=atoi(argv[i]);
                n++;
        }
        nge(arr,n);
        return 0;
}

