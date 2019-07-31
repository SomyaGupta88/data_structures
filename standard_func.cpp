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

char *str_cat(char *str,char *str1) {
	char *str2=new char[50];
	int i=0,j=0;
	for(i=0;i<strlen(str);i++) {
		str2[j]=str[i];
		j++;
	}
	for(i=0;i<strlen(str1);i++) {
		str2[j]=str1[i];
		j++;
	}
	return str2;
}

char *str_uppr(char *str)
{
	for(int i=0;i<strlen(str);i++) {
		if(str[i]>=97 && str[i]<=122) {
			str[i]-=32;
		}
	}
	return str;
}

char *str_lwr(char *str)
{
	for(int i=0;i<strlen(str);i++) {
		if(str[i]>=65 && str[i]<=91) {
			str[i]+=32;
		}
	}
	return str;
}

char *str_cpy(char *str,char *str1) {
	str=str1;
	return str;
}

int str_cmp(char *str,char *str1) {
	int flag=1;
	if(strlen(str)!=strlen(str1))
		flag=-1;
	else {
		for(int i=0;i<strlen(str);i++) {
			if(str[i]!=str1[i]) {
				flag=-1;
				break;
			}
		}
	}
	return flag;
}

int str_chr(char *str,char *chr) {
	int ind=-1;
	for(int i=0;i<strlen(str);i++) {
		if(str[i]==chr[0]) {
			ind=i;
			break;
		}
	}
	return ind;
}

int str_rchr(char *str,char *chr) {
	int ind=-1;
	for(int i=strlen(str)-1;i>=0;i--) {
		if(str[i]==chr[0]) {
			ind=i;
			break;
		}
	}
	return ind;
}

char *str_set(char *str,char *chr) {
	char *s_str;
	s_str=str;
	for(int i=0;i<strlen(str);i++) {
		s_str[i]=chr[0];
	}
	return s_str;
}

char *str_dup(char *str) {
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
	int o=str_cmp(str,str1);
	if(o==1)
		cout<<"strings are equal"<<endl;
	else if(o==-1)
		cout<<"strings are not equal"<<endl;

	char *c_str=str_cat(str,str1);
	cout<<"concat str1 & str2- "<<c_str<<endl;
	char *cp=str_cpy(str,str1);
	cout<<"copy str1 in str- "<<cp<<endl;
	char *u_str=str_uppr(str);
	cout<<"uppercase- "<<u_str<<endl;
	char *l_str=str_lwr(str);
	cout<<"lowercase- "<<l_str<<endl;
	int ind=str_chr(str,chr);
	cout<<"char fund at index- "<<ind<<"\n";
	int rind=str_rchr(str,chr);
	cout<<"char found at index- "<<rind<<"\n";
	char *s_str=str_set(str,chr);
	cout<<s_str<<"\n";
	char *d_str=str_dup(str);
	cout<<d_str<<"\n";
	return 0;
}
