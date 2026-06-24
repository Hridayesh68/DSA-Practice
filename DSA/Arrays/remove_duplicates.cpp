#include <bits/stdc++.h>
using namespace std;
void removed_dup(vector<int>&a){
vector<int>temp;
sort(a.begin(),a.end());
for(int i=0; i<a.size()-1; i++){
if(a[i]!=a[i+1]){
temp.push_back(a[i]);
}
}
a=temp;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
vector<int>a={1,5,6,2,2,3,3,4,5};
removed_dup(a);
for(int x:a){
cout<<x<<" ";
}

    
}