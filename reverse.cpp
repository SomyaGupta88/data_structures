#include<iostream>
#include <cstring>
using namespace std;

int main (int argc,char *argv[])
{
	char *str;
	str=argv[1];
	int len=strlen(str);
	for(int i=0;i<len/2;i++)
	{
		char temp=str[i];
		str[i]=str[len-1-i];
		str[len-1-i]=temp;
	}
	cout<<str;
	return 0;
}

