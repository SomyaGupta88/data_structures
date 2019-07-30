#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(int argc,char *argv[])
{
	char *str,*str1;
	str=argv[1];
	str1=argv[2];
	char *temp=str;
	str=str1;
	str1=temp;
	cout<<str<<"\n"<<str1;
	return 0;
}
