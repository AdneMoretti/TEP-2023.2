#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main () {
    ll n; cin >> n;
    
    vector<ll> countries;

    for (ll i = 1; i <= n; i++) {
        ll a; cin >> a;
        countries.push_back(a);        
    }

    vector<pair<ll, ll>> st;
    for (ll i = 1; i < n; i++) {
        ll s, t;
        cin >> s >> t;
        st.push_back(make_pair(s, t));
    }
    
    while(true) {
        auto i = max_element(countries.begin(), countries.end()) - countries.begin();
        ll pay = st[i].first;
        ll gain = st[i].second;

        countries[i] -= pay;
        countries[i+1] -= gain;

        cout << countries[n - 1] << " " << i << endl;
        if(countries[n] == i)
            break;

    }

}