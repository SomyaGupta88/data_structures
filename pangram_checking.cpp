#include<iostream>
#include<cstring>
#include<vector>

using namespace std;

bool check_pangram(string &str){
	vector<bool>mark(26,false);
	
	int index=0;
	for(int i=0;i<str.length();i++){
		if(str[i]>='A' && str[i]<='Z')
			index=str[i]-'A';
		if(str[i]>='a' && str[i]<='z')
                        index=str[i]-'a';
		//cout<<str[i];
		mark[index]=true;
	}
	for(int i=0;i<=25;i++){
		if(mark[i]==false){
			//cout<<i<<endl;
			return false;
		}
	}
	return true;
}

int main(int argc,char* argv[]){
	string str=argv[1];
	if(check_pangram(str)==true)
		cout<<str<<" - string is pangram";
	else
		cout<<str<<" - string is not pangram";
	return 0;
}	
