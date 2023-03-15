
#include<bits/stdc++.h>
using namespace std;
int main(){

int arr[]={1,1,2,2,3,4,4};
int n=sizeof(arr)/sizeof(arr[0]);

int i=0;
for(int j=1;j<n;j++){
    if(arr[j]!=arr[i]){
        arr[i+1]=arr[j];
        i++;
    }


}


cout<<i+1;

  
}