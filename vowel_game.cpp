#include<iostream>
using namespace std;

bool isVowel(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
                return true;
        }
        else
                return false;
}

void find(string s){
	int c=0;
	int a[s.length()];
        for(int i=1;i<s.length()-1;i++){
                if(!isVowel(s[i])){
                        if(isVowel(s[i-1])&&isVowel(s[i+1])){
                                a[c]=i;
                                c++;
                        }
                }
        }
        cout<<c<<endl;
        for(int i=0;i<c;i++){
                cout<<a[i]<<" ";
	}
}

int main(void){
	string s;
	cin>>s;
	find(s);
	return 0;
}

