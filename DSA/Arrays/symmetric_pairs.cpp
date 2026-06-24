#include <bits/stdc++.h>
using namespace std;
void symmetric_pair(int []arr){
    int result[][];
for(int i=0; i<arr.size(); i++){
for(int j=0; j<arr.size(); j++){
if(arr[i][j]==arr[j][i]){
result.insert({i,j});
}
}
}
for(int i=0; i<arr.size(); i++){
for(int j=0; j<arr.size(); j++){
cout<<result[i][j];
}
}
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[10][10]={
        [1,2],[2,1],[3,4],[4,3]
    }
symmetric_pair(arr);

    
}