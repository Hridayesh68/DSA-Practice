#include <bits/stdc++.h>
using namespace std;
bool Palindrome(string a,string b){
    
    int left=0;
    int right=b.length()-1;
    if(a.length()!=b.length()){
        return false;
    }
while(left<right){
if(a[left]!=b[right]){
return false;
}
left++;
right--;
}
return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
string a="listen";
string b="netsil";
if(Palindrome(a,b)){
cout<<"Palindrome";
}
else{
    cout<<"Is not Palindrome";
}
 
}