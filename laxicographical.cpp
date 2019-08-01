#include <iostream>
#include <string>
#include <cstring>
#include <set>

using namespace std;

void print_lex_circ(string str,int len,int x)
{
	set<string> lex_circ_strings;
	str=str+str;
	for(int i=0;i<len;i++)
		lex_circ_strings.insert(str.substr(i,x));
	while(!lex_circ_strings.empty()) {
		cout<<*lex_circ_strings.begin()<<" ";
		lex_circ_strings.erase(lex_circ_strings.begin());
	}
}

int main(int argc,char *argv[])
{
	char *str;
	str=argv[1];
	string s=str;
	int l=strlen(str);
	int x=atoi(argv[2]);
	print_lex_circ(s,l,x);
	return 0;
}


