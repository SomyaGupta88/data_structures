#include<iostream>

using namespace std;

void find(int k,int i){
	cout<<i<<" ";
	int jn1,jn2;
	jn1=(i*10)+(i-1);
	if(i!=9)
	jn2=(i*10)+(i+1);
	if(jn1<=k)
		cout<<jn1<<" ";
	if(jn2<=k)
		cout<<jn2<<" ";
}

void jumping_num(int k){
	cout<<"0 ";
	for(int i=1;i<=9 && i<=k;i++){
		find(k,i);
	}
}	

int main(int argc,char* argv[]){
	int n=atoi(argv[1]);
	int arr[n],k=0;
	for(int i=2;i<n+2;i++){
	int k=atoi(argv[i]);
	jumping_num(k);
	cout<<endl;
	}
	return 0;
}
