#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

int pref(char c){
	if(c=='+' || c=='-')
		return 1;
	if(c=='*' || c=='/')
		return 2;
	return 0;
}

void IntoPost(string str){
	str='('+str+')';
	stack<char>s;
	string str1;
	for(int i=0;i<str.length();i++){
		if(str[i]>=65 && str[i]<=91 || str[i]>=97 && str[i]<=122)
			str1+=str[i];
		else if(str[i]=='(')
			s.push(str[i]);
		else if(str[i]==')'){
			while(s.top()!='('){
				str1+=s.top();
				s.pop();
			}
			s.pop();
		}
		else{
				while(pref(s.top())>=pref(str[i])){
					str1+=s.top();
					s.pop();
				}
				s.push(str[i]);
		}
	}
	cout<<str1;
}

int main(int argc,char* argv[]){
	string str=argv[1];
	IntoPost(str);
	return 0;
}
