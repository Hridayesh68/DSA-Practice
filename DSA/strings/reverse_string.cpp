#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
string a="Hello";
int l=0;
int r=a.length()-1;
while(l<r){
swap(a[l],a[r]);
l++;
r--;
}
cout<<a; 
}