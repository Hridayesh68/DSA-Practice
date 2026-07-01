#include <bits/stdc++.h>
using namespace std;
bool subarray_sum(vector<int>arr,int target){
int sum=0;
int left=0;
for(int i=0; i<arr.size(); i++){
sum+=arr[i];
while(sum>target && i>left){
    sum-=arr[left];
left++;
}
if(target==sum){
    return true;
}
}
return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
vector<int>arr={1,2,8,7,4};
int target=11;
if(subarray_sum(arr,target)){
cout<<"target is present";
}
else{
cout<<"target is not present";
}
    
}