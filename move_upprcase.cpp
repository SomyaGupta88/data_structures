#include <iostream>
#include <cstring>

using namespace std;

void m_uppr(char *str,int len)
{
	//char *temp=new char[20];
	//int k=0;
	/*for(int i=0;i<len;i++) {
		if(str[i]>=65 && str[i]<=91) {
			temp[k]=str[i];
			str[i]=' ';
			k++;
		}
	}*/
	for(int i=0;i<len;i++) {
		if(str[i]>=65 && str[i]<=91) {
			char temp=str[i];
			for(int j=i;j<len-1;j++) {
				str[j]=str[j+1];
			}
			str[len-1]=temp;
		}
	}
	cout<<str;
}

int main(int argc, char *argv[])
{
	char *str;
	str=argv[1];
	int l=strlen(str);
	m_uppr(str,l);
	return 0;
}
