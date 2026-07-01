#include <bits/stdc++.h>
using namespace std;
int binary_search(vector<int>arr,int t){
int l=0;
int r=arr.size()-1;
while(l<=r){
int mid=l+(r-l)/2;
if(arr[mid]==t){
return mid;
}
if(arr[mid]>t){
r=mid-1;
}
else{
l=mid+1;
}
}
return -1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
vector<int>arr={1,2,3,4,5,6,7};
cout<<binary_search(arr,5);
    
}