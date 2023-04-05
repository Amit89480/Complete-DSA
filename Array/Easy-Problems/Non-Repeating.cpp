#include<bits/stdc++.h>
using namespace std;
int printUnique(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[i+1]){
            cout<<arr[i]<<" ";
        }
    }
}
int main(){
int arr[]={1,2,2,3,4,4,5};
int n=sizeof(arr)/sizeof(arr[0]);
printUnique(arr,n);



    return 0;
}