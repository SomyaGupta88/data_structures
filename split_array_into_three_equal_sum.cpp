#include<iostream>

using namespace std;

int split(int arr[],int n){
    int s=0;
    for(int i=0;i<n;i++){
        s=s+arr[i];
    }
    if(s%3!=0)
    return 0;
    int s1=s/3;
    int s2=2*s1;
    int n1=-1;
    int n2=-1;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum%s1==0 && n1==-1)
        n1=i;
        else if(sum%s2==0){
            n2=i;
            break;
        }
    }
    if(n1!=-1 && n2!=-1){
        cout<<"("<<n1<<","<<n2<<")";
    }
    else
    return 0;
}

int main(void){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(split(arr,n)==0)
    cout<<"-1";
    return 0;
}
