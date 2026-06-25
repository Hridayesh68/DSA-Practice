#include <bits/stdc++.h>
using namespace std;
void solve(vector<string>&ans,string &curr,int n){
if(curr.length()==n){
ans.push_back(curr);
return;
}
if(curr.empty() || curr.empty()!='1'){
curr.push_back('')
}
curr.push_back('1');
solve(ans,curr,n);
curr.pop_back();
if(curr.empty() || curr.back()!='0'){
curr.push_back('0');
solve(ans,curr,n);
}
}
vector<string>generateStrings(int n){
vector<string>ans;
string curr;
solve(ans,curr,n);
return ans;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n=6;
vector<string>result=generateStrings(n);
for(auto s: result){
cout<<s<<endl;
}

    
}