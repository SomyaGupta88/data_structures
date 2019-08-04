#include <stdio.h>

void fibbo(int *a,int *b) {
	int temp=*a+*b;
	*a=*b;
	*b=temp;
}

int main(int argc,char *argv[]) {
	int n=atoi(argv[1]);
	int a=0,b=1;
	for(int i=0;i<n;i++) {
		printf("%d ",a);
		fibbo(&a,&b);
	}
	return 0;
}
