#include<bits/stdc++.h>
using namespace std;

void leftRotateByD1(int arr[],int d,int n){
reverse(arr,arr+d);
reverse(arr+d,arr+n);
reverse(arr,arr+n);
} 
void leftRotateByD(int arr[],int d,int n){
    // d=d%n;
      if (n == 0){
    return;
      }
  d = d % n;
  if (d > n){
    return;
  }

    // putting the shifting element to local array
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }

    //shiffting the array

    // for(int i=d;i<n;i++){
    //     arr[d-i]=arr[i];
    // }


for(int i=0;i<n-d;i++){
    arr[i]=arr[d+i];
}
// putting the temp at its correct place
    for(int i=n-d;i<n;i++){
        arr[i]=temp[i-(n-d)];

    }


}
int main(){

int arr[]={1,2,3,4,5,6};
leftRotateByD(arr,3,6);
for(int x:arr) cout<<x<<" ";



    return 0;
}