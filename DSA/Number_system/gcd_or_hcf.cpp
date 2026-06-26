#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    while (b) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long a, b, n, m;
        cin >> a >> b >> n >> m;

        cout << gcd(a, b) << '\n';
    }

    return 0;
}