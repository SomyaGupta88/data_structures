#include<iostream>
#include<stack>
#include<cstring>

using namespace std;

void eval(string str){
	stack<int> s;
	int a,b,c;
	for(int i=0;i<str.length();i++){
		if(str[i]>='0' && str[i]<='9'){
			s.push(str[i]-'0');
		}
		else{
			a=s.top();
			s.pop();
			b=s.top();
			s.pop();
			if(str[i]=='+')
				c=a+b;
			else if(str[i]=='-')
				c=b-a;
			else if(str[i]=='*')
				c=a*b;
			else if(str[i]=='/')
				c=b/a;
			s.push(c);
		}
	}
	int val=s.top();
	s.pop();
	cout<<val;
}

int main(int argc,char* argv[]){
	string str=argv[1];
	eval(str);
	//cout<<str;
	return 0;
}
