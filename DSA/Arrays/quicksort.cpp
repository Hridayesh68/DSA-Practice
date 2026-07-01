#include <bits/stdc++.h>
using namespace std;
int partition(int low,int high,vector<int>&arr){
    int pivot=arr[high];
    int j=low-1;
    for(int i=low; i<high; i++){
if(arr[i]<pivot){
    j++;
    swap(arr[i],arr[j]);
}
    }
    swap(arr[j+1],arr[high]);
return j+1;
}
void quick_sort(int low,int high,vector<int>&arr){
    
    if(low>high){
return;
    }
    int index=partition(low,high,arr);
    quick_sort(low,index-1,arr);
    quick_sort(index+1,high,arr);

}
int main(){

    vector<int>arr={1,3,2,6,5,4};
    int n=arr.size();
    int low=0;
    int index=n;
quick_sort(low,index-1,arr);
for(int x:arr){
cout<<x<<" ";
}


}