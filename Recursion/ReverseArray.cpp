#include<iostream>
using namespace std;
void ReverseArray(int arr[],int left,int right)
{
   if(left>=right){
    return;
   }
   swap(arr[left],arr[right]);
   ReverseArray(arr,left+1,right-1);
}


int main(){
int arr[]={1,2,3,4,5};
int n=5;
ReverseArray(arr,0,n-1);

for(auto i:arr){
    cout<<i<<" ";
}

    return 0;
}