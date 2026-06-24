#include <bits/stdc++.h>
using namespace std;
float median(vector<int>a){
    int n=a.size();
if(n%2==0){
return (a[n/2-1]+a[n/2])/2.0;
}
else{
return a[n/2];
}
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
vector<int>a={1,2,3,4,5};
float r=median(a);
cout<<r;

    
}