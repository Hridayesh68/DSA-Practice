#include <bits/stdc++.h>
using namespace std;
void rotate_k(vector<int>&a,int k){
int n=a.size();
int d=k%n;
int index=0;
vector<int>temp(n,0);
for(int i=d; i<n; i++){
temp[index]=a[i];
index++;
}
for(int i=0; i<d; i++){
    temp[index]=a[i];
    index++;
}
a=temp;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
vector<int>a={1,2,3,4,5,6,7,8};
int k=3;
rotate_k(a,k);
for(int x: a){
cout<<x<<" ";
}
    
}