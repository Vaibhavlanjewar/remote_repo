#include<iostream>
#include<vector>
using namespace std;

int bs(vector<int>&arr,int n,int k){
int low=0,high=n-1;
int mid= (low+ high)/2;
while(low<=high){

if(k==arr[mid]){
return mid;
}
else if(k<arr[mid]){
low=mid+1;
}
else{
    high=mid-1;
}
return -1;
}

}
int main(){
vector<int>arr={1,2,3,4,5,6,7};
int n=arr.size();
int k;
cout<<"ENter Target ";
cin>>k;

cout<<bs(arr,n,k);


    return 0;
}