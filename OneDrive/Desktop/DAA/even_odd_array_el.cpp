#include<bits/stdc++.h>
using namespace std;

vector<int> ev(vector<int>&arr){
  vector<int>even;
 
   int n=arr.size();
   for(int i=0;i<n;i++){
    if(arr[i]%2==0){
        even.push_back(arr[i]);
    }
    
   }
   return even;
}
vector<int> od(vector<int>&arr){
  vector<int>odd;
 
   int n=arr.size();
   for(int i=0;i<n;i++){
    if(arr[i]%2==1){
        odd.push_back(arr[i]);
    }
    
   }
   return odd;
}

void rec(int arr[],int i,int n){
   
   int odd[n];
   int even[n];
int x=0;
int y=0;
    if(i<=n){
      
    
   if(arr[i]%2==0){
    even[x]=arr[i];
    x++;
   }
   else{
    odd[y]=arr[i];
    y++;
   }

   rec(arr,i++,n);
}
  cout<<"";
   for(int j=0;j<n;j++){
    cout<<odd[i]<<" ";
   }
} 

int main(){
    // vector<int>arr={2,1,4,6,3,5};
    // vector<int>ansev=ev(arr);
    // cout<<"even\n";
    // for(int i =0;i<ansev.size();i++){
    //     cout<<ansev[i]<<" ";
    // }
    //  cout<<"\nodd\n";
    // vector<int>ansod=od(arr);
    // for(int i =0;i<ansod.size();i++){
    //     cout<<ansod[i]<<" ";
    // }
    int arr1[]={2,1,4,6,3,5};
    rec(arr1,0,5);
    

}