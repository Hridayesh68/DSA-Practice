#include <bits/stdc++.h>
using namespace std;
bool subset_sum(vector<int>arr,int index,int target){

    if(target==0)return true;
if(index==arr.size())return false;

if(target<=arr[index]){
    if(subset_sum(arr,index+1,target-arr[index]))
{
return true;
}
}
return subset_sum(arr,index,target);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
vector<int>arr={1,2,8,7,4};
int target=11;
if(subset_sum(arr,0,target)){
cout<<"target is present";
}
else{
cout<<"target is not present";
}
    
}