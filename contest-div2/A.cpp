#include <bits/stdc++.h>

using namespace std;
using ii = pair<int, int>;
int s, e, N, firste, firsts; 
vector<ii> points; 
int solve(){
    bool is_possible = 0;
    for(int i=2;i<=N;i++){
        cin >> s >> e; 
        if(s>=firsts and e>=firste )
            is_possible = -1;
        
    }
    return is_possible;
}

int main()
{
    ios_base::sync_with_stdio(0);
    int T;
    cin >> T;
    while(T--){
        cin >> N; 
        cin >> firsts; 
        cin >> firste;
        if(!solve())
            cout << firsts << endl;
        else 
            cout << "-1"<< endl;
    }
    return 0;
}