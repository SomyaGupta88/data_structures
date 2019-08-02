#include <iostream>
#include <cstring>

using namespace std;

void check(char *str,char *str1) {
	int flag=0;
   for(int j=0;j<strlen(str1);j++) {
	char temp=str1[strlen(str1)-1];
	for(int i=strlen(str1)-1;i>=0;i--)
		str1[i]=str1[i-1];
	str1[0]=temp;
	//cout<<str1<<" "<<str<<endl;
	if(strcmp(str,str1)==0) {
		flag=1;
	//	cout<<flag;
		break;
	}
//	break;
//	cout<<flag;
   }
   //cout<<flag;
   if(flag)
	   cout<<"the two strings are rotation of each other";
   else
	   cout<<"the two strings are not the rotation of each other";
}


int main(int argc,char *argv[]) {
	char *str,*str1;
	str=argv[1];
	str1=argv[2];
	check(str,str1);
	return 0;
}
