#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n],d[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    for(int i=0;i<n;i++)
	    cin>>d[i];
	    sort(a, a+n); 
   sort(d, d+n); 
   int plat_needed = 1, result = 1; 
   int i = 1, j = 0; 
   while (i < n && j < n) 
   { 
      if (a[i] <= d[j]) 
      { 
          plat_needed++; 
          i++; 
          if (plat_needed > result)  
              result = plat_needed; 
      } 
      else{ 
          plat_needed--; 
          j++; 
      } 
   }
   cout<<result<<endl;
	}
	return 0;
}