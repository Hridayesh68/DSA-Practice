#include <bits/stdc++.h>
using namespace std;
int smallest(vector<int>a){
int n=a.size();
for(int i=0; i<n; i++){
     bool smallest=true;
for(int j=0; j<n; j++){
if(a[i]>a[j]){
smallest=false;
break;
}
}
if(smallest){
    return a[i];
}
}

return -1;

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
vector<int>a={4,5,1,2,7,9,6,6};
int ans=smallest(a);
cout<<ans;
    
}