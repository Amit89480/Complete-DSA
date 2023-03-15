#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int low,int mid,int high){
    vector<int> temp;
    int left=low;
    int right=mid+1;



    while(left<=mid && right<=high){
       if(arr[left]<=arr[right]){
        temp.push_back(arr[left]);
        left++;
       }
       else{
        temp.push_back(arr[right]);
        right++;
       }
       

    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i =low;i<=high;i++){
        arr[i]=temp[i-low];
    }
    
}

void MergeSort(vector<int> &arr,int low,int high){
    if(low>=high) return;
    int mid=(low+high)/2;
    MergeSort(arr,low,mid);
    MergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main(){
vector<int> arr={4,5,6,7,3,2,4,6,7,8,9};
int n=arr.size();

for(int x:arr){
    cout<<x<<" ";
}
cout<<"Printing before Merge Sort"<<endl;
MergeSort(arr,0,n-1);
cout<<"Printing after Merge Sort"<<endl;
for(int x:arr){
    cout<<x<<" ";
}


    return 0;
}