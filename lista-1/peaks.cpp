#include <bits/stdc++.h>

using namespace std;

vector<int> obs;

int solve(int M, int N){
    int res[N] = {};
    int cont = 0;
    for(int j=0;j<M;j++){
        int x, y;
        cin >> x >> y; 
        if(obs[x-1]<obs[y-1]){
            res[x-1] = 1; 
        }
        else if(obs[y-1]<obs[x-1]){
            res[y-1] = 1; 
        }
        else{
            res[x-1] = 1; 
            res[y-1] = 1; 
        }
    }
    return count(res, res+N, 0);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N, M; 
    cin >> N >> M;
    for(int i=0;i<N;i++){
        int x; 
        cin >> x;
        obs.push_back(x);
    }
    cout << solve( M, N)<<"\n";
}