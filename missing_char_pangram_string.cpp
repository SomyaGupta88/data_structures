#include<iostream>
#include<cstring>
#include<vector>

using namespace std;

string check_pangram(string &str){
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
	string x="";
        for(int i=0;i<=25;i++){
                if(mark[i]==false){
			x+='a'+i;
                        //cout<<x<<endl;
                        //return false;
                }
        }
        return x;
}

int main(int argc,char* argv[]){
        string str=argv[1];
        string x=check_pangram(str);
	if(x=="")
		cout<<"string is pangram";
	else
		cout<<x;
	return 0;
}

