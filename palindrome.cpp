#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char *argv[])
{
	char *str,*str2;
	str=argv[1];
	int c=strlen(str);
	int p=0,i=0;
	for(i=0;i<c;i++)
	{
		if(str[i]!=str[c-1-i]) {
			p=1;
			break;
		}
	}

	if(p)
		cout<<"not Palindrome string";
	else
		cout<<"palindrome";
	return 0;
}
