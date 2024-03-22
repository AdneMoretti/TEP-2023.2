#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    vector<long long> a;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < (n - 1); ++i) {
        long long x, y;
        cin >> x >> y;
        a[i + 1] += (a[i] / x) * y;
    }
    cout << a[n - 1] << endl;

    return 0;
}