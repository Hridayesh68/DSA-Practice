#include <bits/stdc++.h>
// a number is called a armstrong number if the sum of the power of its digits is equal to the number
using namespace std;
int factorial(int n){
    int  c=0;
while(n>0){
    n/=10;
c++;
}
return c;
}
bool isarmstrong(int n){
    int sum=0;
    int o=n;
    int d=number_of_digits(n);
while(n>0){
int digit=n%10;
n/=10;
sum+=pow(digit,d);
}
return sum==o;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
int n=370;
if(isarmstrong(n)){
cout<<"Armstrong number";
}
else{
    cout<<"Not armstrong number";
}

    
}