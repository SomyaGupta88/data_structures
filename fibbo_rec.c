#include <stdio.h>

void fibbo(int a,int b,int n) {
	if(n<1)
		return;
	printf("%d ",a);
	int temp=a+b;
	a=b;
	b=temp;
	fibbo(a,b,--n);
}

int main(int argc,char *argv[]) {
	int n=atoi(argv[1]);
	int a=0,b=1;
	fibbo(a,b,n);
	return 0;
}
