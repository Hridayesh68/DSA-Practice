#include <bits/stdc++.h>
using namespace std;

vector<int>freq_count(vector<int>a,int n){
vector<int>freq(n,0);
for(int i=0; i<n; i++){
freq[a[i]]++;
}
return freq;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
vector<int>a={1,1,1,2,2,3,4,4,5,5};
int n=a.size();
vector<int>res=freq_count(a,n);
for(int i=0; i<res.size(); i++){
    if(res[i]>0){
cout<<i<<"occurs "<<res[i]<<"times "<<endl;
    }
}
    
}