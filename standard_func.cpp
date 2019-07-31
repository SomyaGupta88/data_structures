#include <iostream>
#include <cstring>

using namespace std;

int str_len(char *str) {
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
}

/*void str_cat(char *str,char *str1,int len,int len1) {
	char *str2;
	int i=0,j=0;
	for(i=0;i<len;i++) {
		str2[j]=str[i];
		j++;
	}
	for(i=0;i<len1;i++) {
		str2[j]=str1[i];
		j++;
	}
	cout<<str2;
}*/

void str_uppr(char *str,int len)
{
	for(int i=0;i<len;i++) {
		if(str[i]>=97 && str[i]<=122) {
			str[i]-=32;
		}
	}
	cout<<str<<"\n";
}

void str_lwr(char *str,int len)
{
	for(int i=0;i<len;i++) {
		if(str[i]>=65 && str[i]<=91) {
			str[i]+=32;
		}
	}
	cout<<str<<"\n";
}

void str_cpy(char *str,char *str1) {
	str1=str;
	cout<<str1<<"\n";
}

void str_cmp(char *str,char *str1,int len,int len1) {
	int flag=0;
	if(len!=len1)
		cout<<"strings are not equal \n";
	else {
		for(int i=0;i<len;i++) {
			if(str[i]!=str1[i]) {
				flag=1;
				break;
			}
		}
	if(flag)
		cout<<"strings are not equal..."<<"\n";
	else
		cout<<"strings are equal \n";
	}
}

int str_chr(char *str,char *chr,int len) {
	int ind=-1;
	for(int i=0;i<len;i++) {
		if(str[i]==chr[0]) {
			ind=i;
			break;
		}
	}
	return ind;
}

int str_rchr(char *str,char *chr,int len) {
	int ind=-1;
	for(int i=len-1;i>=0;i--) {
		if(str[i]==chr[0]) {
			ind=i;
			break;
		}
	}
	return ind;
}

char *str_set(char *str,char *chr,int len) {
	char *s_str;
	s_str=str;
	for(int i=0;i<len;i++) {
		s_str[i]=chr[0];
	}
	return s_str;
}

char *str_dup(char *str,int len) {
	char *d_str;
	d_str=str;
	return d_str;
}

int main(int argc,char *argv[]) {
	char *str,*str1,*chr;
	str=argv[1];
	str1=argv[2];
	chr=argv[3];
	int len=str_len(str);
	cout<<len<<"\n";
	int len1=str_len(str1);
	cout<<len1<<"\n";

//	str_cat(str,str1,len,len1);
	str_cpy(str,str1);
	str_uppr(str,len);
	str_lwr(str,len);
	str_cmp(str,str1,len,len1);
	int ind=str_chr(str,chr,len);
	cout<<ind<<"\n";
	int rind=str_rchr(str,chr,len);
	cout<<rind<<"\n";
	char *s_str=str_set(str,chr,len);
	cout<<s_str<<"\n";
	char *d_str=str_dup(str,len);
	cout<<d_str<<"\n";
	return 0;
}
