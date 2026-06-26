#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main() {

    int n;
    cin>>n;
   if(n>0 && (n&(n-1))==0){
cout<<1;
   }
   else{
    cout<<0;
   }
   return 0;

 
}