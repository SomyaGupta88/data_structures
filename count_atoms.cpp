#include<bits/stdc++.h>

using namespace std;
void count_a(string str){
    map<string,int>m;
    map<string, int>::iterator itr;
    for(int i=0;i<str.length();i++){
            string s;
            //find if the char is upper case
        if(str[i]>='A' && str[i]<='Z'){
            s=str[i];
            int c=0;
            //if char is lower case combine it with previous upper case
            for(int j=i+1;j<str.length();j++){
                    if(str[j]>='A' && str[j]<='Z')
                    break;
                if(str[j]>='a' && str[j]<='z'){
                    s+=str[j];
                }
                //if char is number update the count
                else if(str[j]>='0' && str[j]<='9'){
                    int in=str[j]-'0';
                    c=c*10+in;
                }
            }
            //if count=0 atom is single
            if(c==0)
                c=1;
                itr=m.find(s);
                //if atom already in map update count
            if(itr!=m.end()){
            int k=itr->second+c;
               itr->second=k;
            }
            //else insert
            else{
                m.insert(pair<string,int>(s,c));

            //cout<<k;
            }
        }
    }

    for(itr=m.begin();itr!=m.end();itr++){
        cout<<itr->first<<" "<<itr->second;
        cout<<endl;
    }
}

int main(void){
    string str;
    getline(cin,str);

    count_a(str);
    return 0;
}
