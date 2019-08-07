#include <iostream>
#include <cstring>

using namespace std;

int if_equal(char *str,char *str1) {
	int l=strlen(str);
	int l1=strlen(str1);
	int m=0;
	if(l!=l1)
		return -1;
	else {
		for(int i=0;i<l;i++) {
			if(str[i]==str1[i] || str[i]+32==str1[i] || str[i]-32==str1[i])
				m++;
		}
		if(m==l)
			return 0;
		else 
			return -1;
	}
}

int main(int argc,char *argv[]) {
	char *str,*str1;
	str=argv[1];
	str1=argv[2];
	int k=if_equal(str,str1);
	if(k==0)
		cout<<"the two strings are equal";
	if(k==-1)
		cout<<"the two strings are not equal";
	return 0;
}
