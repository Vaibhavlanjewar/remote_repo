#include<iostream>
#include<vector>
using namespace std;

int bsr(vector<int>&arr,int low,int high,int k){
    if(low>high){
        return -1; 
        }
    int mid= (low + high )/2;
    if(arr[mid]==k){
        return mid;
    }
    else if(k>arr[mid]){
        return  bsr( arr , mid+1,high,k);
    }
    else{
        return   bsr(arr,low,mid-1,k) ;
    }
}

int main(){
    vector<int>arr={1,2,3,4,5,6};
    int n=arr.size();
    int k;
    cout<<"ENter target ";
    cin>>k;
    cout<<bsr(arr,0,n,k);


    return 0;
}
