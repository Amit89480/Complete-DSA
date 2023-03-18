#include<bits/stdc++.h>
using namespace std;

int subarrayKbrute(int arr[],int k,int n){
    int sum=0;
    int longestSum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==k){
                longestSum=max(longestSum,j-i+1);
            }
        }
    }
    return longestSum;
}
int main(){
int arr[]={1,2,3,1,1,1,1,4,2,3};
int k=3;
int n=sizeof(arr)/sizeof(arr[0]);
cout<<subarrayKbrute(arr,k,n);



    return 0;
}