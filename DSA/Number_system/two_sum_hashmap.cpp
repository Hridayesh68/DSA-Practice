#include <bits/stdc++.h>
using namespace std;

pair<int, int> two_sum(const vector<int>& arr, int target) {
    unordered_map<int, int> mp; // Stores: {element, index}
    
    for (int i = 0; i < arr.size(); i++) {
        int complement = target - arr[i];
        
        // If complement is found, return its index and the current index
        if (mp.find(complement) != mp.end()) {
            return {mp[complement], i};
        }
        
        // Store the current element with its index
        mp[arr[i]] = i;
    }
    
    return {-1, -1}; // Return {-1, -1} if no pair is found
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<int> arr = {1, 2, 8, 7, 4};
    int target = 11;
    
    pair<int, int> result = two_sum(arr, target);
    
    if (result.first != -1) {
        cout << "Indices found: " << result.first << ", " << result.second << "\n";
    } else {
        cout << "No pair found.\n";
    }
    
    return 0;
}