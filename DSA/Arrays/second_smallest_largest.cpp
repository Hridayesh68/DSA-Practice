#include <bits/stdc++.h>
using namespace std;
int second_small(vector<int>a,int n){
int min=INT_MAX;
int second=INT_MAX;
for(int i=0; i<n; i++){
    if(a[i]<min){
        second=min;
min=a[i];

    }
    else if(a[i]<second && a[i]!=min){
second=a[i];
    }
}
return second;

}

int second_large(vector<int>a,int n){
    int max=INT_MIN;
int second=INT_MIN;
for(int i=0; i<n; i++){
    if(a[i]>max){
second=max;
max=a[i];
    }
    else if(a[i]>second && a[i]!=max){
second=a[i];
    }
}
return second;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
vector<int>a={1,3,4,7,9,8,6,5};
int n=a.size();
int b=second_small(a,n);
int c=second_large(a,n);
cout<<"The second smallest is "<<b<<endl;
cout<<"The second largest is "<<c;
}