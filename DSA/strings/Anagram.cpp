#include <bits/stdc++.h>
using namespace std;
bool Anagram(string a,string b){
    vector<char>freq(26);
    if(a.length()!=b.length()){
return false;
    }
    for(int i=0; i<a.length(); i++){
freq[a[i]-'0']++;
    }
       for(int i=0; i<b.length(); i++){
freq[b[i]-'0']--;
    }
        for(int i=0; i<b.length(); i++){
            if(freq[i]!=0){
return false;
            }

    }
 return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
string a="listenl";
string b="netsill";
if(Anagram(a,b)){
cout<<"Anagram";
}
else{
    cout<<"Is not Anagram";
}
 
}