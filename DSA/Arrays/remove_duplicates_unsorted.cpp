#include <bits/stdc++.h>
using namespace std;
void removed_dup(vector<int>&a){
unordered_set<int>seen;
vector<int>temp;
for(int i=0; i<a.size(); i++){
if(!seen.count(a[i])){
temp.push_back(a[i]);
seen.insert(a[i]);
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