#include <bits/stdc++.h> 

using namespace std; 
using ll = long long;
int solve(ll n){
    ll result = n;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	ll N; 
	while(cin >> N)
		cout << solve(N)/2 << endl; 
}
