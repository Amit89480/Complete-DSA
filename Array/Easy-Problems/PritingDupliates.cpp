#include<bits/stdc++.h>
using namespace std;

int printDuplicates(int arr[],int n){
for(int i=0;i<n;i++){
    if(arr[i]==arr[i+1]){
        cout<<arr[i]<<" ";
    }
}
}


int printDuplicates2(int arr[],int n){
    unordered_map<int ,int>mp;

    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    for(auto x:mp){
        if(x.second>1){
            cout<<x.first<<" ";
        }
    }
}
int main(){

int arr[]={1,1,2,2,3,3,4};
int n=sizeof(arr)/sizeof(arr[0]);
// printDuplicates(arr,n);
printDuplicates2(arr,n);

    return 0;
}