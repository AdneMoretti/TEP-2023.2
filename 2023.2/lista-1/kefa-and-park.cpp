#include <bits/stdc++.h>

using namespace std;
vector<int> adj[1000000];
bitset<1000000> hasCat; 
bitset<1000000> impossible;
bitset<1000000> visited;
int qtd_cats[1000000];
int qtd = 0;
int M;
void dfs(int u, int f=1){
    if (visited[u])
        return;

    if(hasCat[u]){
        qtd_cats[u] = qtd_cats[f]+1;
    }
    else{
        qtd_cats[u] = 0;
    }

    if(impossible[f] or qtd_cats[u]>=M+1){
        impossible[u] = 1;
    }

    if(u!=1 and adj[u].size()==1 and impossible[u]==0)
        qtd++;
    
    visited[u] = 1;
    for(auto v: adj[u]){
        dfs(v, u);
    }        
}

int main()
{
    ios_base::sync_with_stdio(0);
    int N, a, x, y;
    cin >> N >> M; 
    for(int i=1;i<=N;i++){
        cin >> x; 
        hasCat[i] = x;
    }
    for(int i=1;i<N;i++){
        cin >> x >> y; 
        adj[x].emplace_back(y);
        adj[y].emplace_back(x);
    }
    dfs(1);
    cout << qtd << endl;
}