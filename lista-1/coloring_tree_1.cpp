#include <bits/stdc++.h>

using namespace std;

vector<int> colors; 
vector<int> goals; 
vector<int> adj[100000];
int cont = 0;
bitset<100000> visited; 
int N, x; 
void dfs(int u, int f=1){
    if (visited[u])
        return;
    
    if(colors[f]!=goals[u]){
        cont++; 
    }
    colors[u] = goals[u];
    visited[u] = 1;
    for(auto v: adj[u]){
        dfs(v, u);
    }        
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> N; 
    colors.emplace_back(0);
    goals.emplace_back(0);

    for(int i=2;i<=N;i++){
        cin >> x;
        adj[i].emplace_back(x);
        adj[x].emplace_back(i);

    }
    for(int j=1;j<=N;j++){
        int color; 
        cin >> color;
        goals.emplace_back(color);
        colors.emplace_back(0);
    }
    dfs(1);
    cout << cont << endl;
}