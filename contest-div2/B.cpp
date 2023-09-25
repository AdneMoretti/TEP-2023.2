#include <bits/stdc++.h>

using namespace std;
using ii = pair<int, int>;
using ll = long long;
int N; 
int menor_a, menor_b;
ll solve(vector<int> a, vector<int> b, ll soma){
    ll soma2 = 0;
    for(auto j:a){
        soma2+=j+menor_b;
    }
    return min(soma, soma2);
}

int main()
{
    ios_base::sync_with_stdio(0);
    int T;
    cin >> T;
    while(T--){
        cin >> N; 
        int x;
        vector<int> a; 
        vector<int> b; 
        menor_a = 1000000000;
        for(int i=0;i<N;i++){
            cin >> x; 
            a.emplace_back(x);
            if(x < menor_a)
                menor_a = x;
        }
        menor_b = 1000000000;
        ll soma = 0;
        for(int j=0;j<N;j++){
            cin >> x; 
            b.emplace_back(x);
            if(x < menor_b)
                menor_b = x;
            soma+=x+menor_a;
        }
        cout << solve(a, b, soma) << endl;
    }
    return 0;
}