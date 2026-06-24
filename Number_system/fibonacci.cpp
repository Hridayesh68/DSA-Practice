#include <bits/stdc++.h>
using namespace std;
int fib(int n){
 int a=0,b=1;
while(a!=b){
int c=a+b;
a=b;
b=c;
}
return b;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

cout<<fib(4);
    
}