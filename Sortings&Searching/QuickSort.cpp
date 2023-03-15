#include<bits/stdc++.h>
using namespace std;
int partionIndex(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;


    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while (arr[j]>pivot && j>=low+1)
        {
         j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
        
    }
    swap(arr[low],arr[j]);
    return j;
}
void qs(int arr[],int low,int high){
if(low<high){
    int Pindex=partionIndex(arr,low,high);
    qs(arr,low,Pindex-1);
    qs(arr,Pindex+1,high);
}
}
int main(){


int arr[]={4,6,2,5,7,9,1,3};
int n=sizeof(arr)/sizeof(arr[0]);
for(auto x:arr){
    cout<<x<<" ";
}

qs(arr,0,n);
cout<<endl;
for(auto x:arr){
    cout<<x<<" ";
}


    return 0;
}