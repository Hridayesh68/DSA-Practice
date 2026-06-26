#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a = 5;   // first term
    int n = 10;  // number of terms
    int r = 5;   // common ratio

    long long sum = 0;
    long long term = a;

    for (int i = 0; i < n; i++) {
        sum += term;
        term *= r;
    }

    cout << sum;

    return 0;
}