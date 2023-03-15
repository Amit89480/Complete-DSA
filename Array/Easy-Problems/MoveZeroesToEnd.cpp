#include<bits/stdc++.h>
using namespace std;
void brute(int arr[],int n){
   vector<int>temp;

for(int i=0;i<n;i++){
    if(arr[i]!=0){
temp.push_back(arr[i]);
    }
}


for(int i=0;i<temp.size();i++){
arr[i]=temp[i];
}

for(int i=temp.size();i<n;i++){
    arr[i]=temp[i];
}


}


void Optimal(int nums[],int n){
      int j=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }
        if(j==-1) return;

        for(int i=j+1;i<n;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
}
int main(){

int arr[]={1,2,0,0,5,6,7,4};
int n=sizeof(arr)/sizeof(arr[0]);
// brute(arr,n);
Optimal(arr,n);
for(int x:arr) cout<<x<<" ";

    
}