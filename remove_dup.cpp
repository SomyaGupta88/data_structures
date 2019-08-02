#include <iostream>
#include <cstring>

using namespace std;

void rmv_dup(char *str,int l) {
	for(int i=0;i<l;i++) {
		for(int j=i+1;j<l;j++) {
			if(str[i]==str[j]) {
				str[j]='\0';
			}
		}
	}
	for(int i=0;i<l;i++) {
		if(str[i]!='\0') {
			cout<<str[i];
		}
	}
}

int main (int argc,char * argv[]) {
	char *str;
	str=argv[1];
	int l=strlen(str);
	rmv_dup(str,l);
	return 0;
}
