#include<iostream>
using namespace std;
void ReverseArray(int i,int arr[],int n)
{
    if(i>=n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    ReverseArray(i+1,arr,n);
}


int main(){
int arr[]={1,2,3,4,5};
int n=5;
ReverseArray(0,arr,n);

for(auto i:arr){
    cout<<i<<" ";
}

    return 0;
}