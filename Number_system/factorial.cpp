#include <bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==0)return 1;
    return factorial(n)*factorial(n-1);
}
// int factorial(int n){
//     int fac=1;
// for(int i=1; i<=n; i++){
// fac*=i;
// }
// return fac;
// }
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
cout<<factorial(5);
    
}