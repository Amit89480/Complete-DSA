#include<bits/stdc++.h>
using namespace std;
int optimal(int arr[],int n){
    int ans=0;
for(int i=0;i<n;i++){
    ans=ans^arr[i];
}
return ans;
}

int main(){


int arr[]={1,2,2,3,4,3,4};

int n=sizeof(arr)/sizeof(arr[0]);
cout<<optimal(arr,n);

    return 0;
}