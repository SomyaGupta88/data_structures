#include <iostream>
#include <stack>

using namespace std;

void NGF_element(int arr[],int freq[],int n){
	stack<int>s;
	s.push(0);
	int arr1[n]={0};
	for(int i=1;i<n;i++){
		if(freq[arr[s.top()]]>=freq[arr[i]]){
			s.push(i);
			//cout<<i<<"i ";
		}
		else{
			while(!s.empty() && freq[arr[s.top()]]<freq[arr[i]]){
				int x=arr[s.top()];	
				//cout<<arr[i]<<" ";
				arr1[s.top()]=arr[i];
				s.pop();
			}
			s.push(i);
		}
	}
		while(!s.empty()){
			int x=arr[s.top()];
			arr1[s.top()]=-1;
			s.pop();
		}
		for(int i=0;i<n;i++)
			cout<<arr1[i]<<" ";
}

int main(int argc,char* argv[]){
	int arr[argc], n=0;
	for(int i=1;i<argc;i++){
		arr[n]=atoi(argv[i]);
		//cout<<arr[n];
		n++;
	}
	int max=0;
	for(int i=0;i<n;i++){
		if(arr[i]>max)
			max=arr[i];
	}
	int freq[max+1]={0};
	for(int i=0;i<n;i++){
		freq[arr[i]]++;
	}
	//for(int i=0;i<n;i++)
		//cout<<freq[arr[i]];
	NGF_element(arr,freq,n);
	//cout<<max;
	return 0;
}

