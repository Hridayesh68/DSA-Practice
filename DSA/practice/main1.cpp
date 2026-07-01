#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
vector<int>arr={1,2,3,4,5,6};
int target=5;
for(int i=0; i<arr.size(); i++){
for(int j=i+1; j<arr.size(); j++){
if(arr[i]+arr[j]==target){
cout<<i<<" "<<j<<"\n";

}
}
}
 
}