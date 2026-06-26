#include <bits/stdc++.h>
using namespace std;
void fib(int n){
if(n==0 || n==1)cout<<n;
int a=0,b=1;
for(int i=2; i<=n; i++){
int c=a+b;
cout<<c<<" ";
a=b;
b=c;
}

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

fib(6);
    
}