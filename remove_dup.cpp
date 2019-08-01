#include <iostream>
#include <cstring>

using namespace std;

void rmv_dup(char *str) {
	for(int i=0;i<strlen(str);i++) {
		for(int j=i+1;j<strlen(str);j++) {
			if(str[i]==str[j]) {
				str[j]='\0';
			}
		}
	}
	cout<<str;
}

int main (int argc,char * argv[]) {
	char *str;
	str=argv[1];
	rmv_dup(str);
	return 0;
}
