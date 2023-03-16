#include<bits/stdc++.h>
using namespace std;
vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
       
        set<int> st;
      for(int i=0;i<n;i++){
          st.insert(arr1[i]);
      }
      
      for(int i=0;i<m;i++){
          st.insert(arr2[i]);
      }
       vector<int> Union;
      for(auto it:st){
          Union.push_back(it);
      }
      return Union;
    }

     vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
       
      int i=0;
      int j=0;
      
      vector<int> unionArr;
      while(i<n && j<m){
          if(arr1[i]==arr2[j]){
              if(unionArr.size()==0||
              unionArr.back()!=arr1[i]){
                  unionArr.push_back(arr1[i]);
              }
              i++;
          }
          else{
               
              if(unionArr.size()==0||
              unionArr.back()!=arr2[j]){
                  unionArr.push_back(arr2[j]);
              }
              j++;
          }
      }
          while(i<n){
             
              if(unionArr.back()!=arr1[i]){
                  unionArr.push_back(arr1[i]);
              }
              i++;
          }
          
        while(j<m){
             
              if(unionArr.back()!=arr2[j]){
                  unionArr.push_back(arr2[j]);
              }
              j++;
          }
           return unionArr;
      }
int main()
{


}