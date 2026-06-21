#include <bits/stdc++.h>
using namespace std;
void bubblesort(vector<int>&a,int n){
for(int i=0; i<n; i++){
for(int j=i+1; j<n; j++){
if(a[i]>a[j]){
swap(a[i],a[j]);
}
}
}
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
vector<int>a={1,3,2,8,4,6,0,5};
int n=a.size();
bubblesort(a,n);
for(int i=0; i<n; i++){
    cout<<a[i]<<" ";
}   
}