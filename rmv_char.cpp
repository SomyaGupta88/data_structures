#include <iostream>
#include <cstring>

using namespace std;

void rmv_dup(char *str,char *str1,int l) {

	for(int i=0;i<l;i++) {
		for(int j=0;j<strlen(str1);j++) {
			if(str[i]==str1[j]) {
				str[i]='\0';
			}
	//	cout<<strlen(str)<<" "<<l<<endl;
		}
	}
	for(int i=0;i<l;i++) {
		if(str[i]!='\0') {
			cout<<str[i];
		}
	}
}

int main(int argc,char *argv[]) {
	char *str,*str1;
	str=argv[1];
	str1=argv[2];
	int l=strlen(str);
	rmv_dup(str,str1,l);
	return 0;
}
