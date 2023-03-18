#include<bits/stdc++.h>
using namespace std;

//BRUTE FORCE
int Missing(int arr[],int n){
    for(int i=1;i<=n;i++){
        bool flag=0;
        for(int j=0;j<n-1;j++){
            if(arr[j]==i){
                flag=1;
                break;
            }
        }
        if(flag==0){
            return i;
        }
    }
}

int optimal(int arr[],int n){

    int xor1=0,xor2=0;


    for(int i=0;i<n-1;i++){
        xor2=xor2^arr[i];
        xor1=xor1^(i+1);
    }
    xor1=xor1^n;
    return xor1^xor2;
}
int main(){

int arr[]={1,2,4,5};
int n=4;
cout<<optimal(arr,n);







return 0;

}