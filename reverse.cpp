#include<iostream>
#include <cstring>
using namespace std;

void reverse_str(char *str,int len);

int main (int argc,char *argv[])
{
	char *str;
	str=argv[1];
	int len=strlen(str);
	reverse_str(str,len);
	cout<<str;
	return 0;
}

void reverse_str(char *str,int len)
{
	for(int i=0;i<len/2;i++)
	{
		char temp=str[i];
		str[i]=str[len-1-i];
		str[len-1-i]=temp;
	}
}

