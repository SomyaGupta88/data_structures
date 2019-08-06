#include <stdio.h>

int lcm(int a,int b) {
	int l=0,s=0,lcm=0;
	if(a>b){
		l=a;
		s=b;
	}
	else {
		l=b;
		s=a;
	}
	for(int i=l; ;i+=l) {
		if(i%s==0) {
			lcm=i;
			break;
		
		break;
		}
	break;
	}
break;
}}
	}
	return lcm;
}

int main(int argc,char * argv[]) {
	int arr[argc],i=0,n=0;
	for(int i=1;i<argc;i++) {
		arr[n]=atoi(argv[i]);
		n++;
	}
	int a=arr[0];
	for(int i=1;i<n;i++) {
		a=lcm(a,arr[i]);
	}
	printf("%d",a);
	return 0;
}
