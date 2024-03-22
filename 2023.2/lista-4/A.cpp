#include <bits/stdc++.h> 
using namespace std; 
vector<int> adj[100]; 
int dfs_num[100]; 
int dfs_low[100];
int cont = 0; 
using edge = pair<int, int>; 
void dfs_bridge(int u, int p, int& next)
{
	dfs_low[u] = dfs_num[u] = next++;
	for (auto v : adj[u])
		if (not dfs_num[v]) {
			dfs_bridge(v, u, next);
			if (dfs_low[v] > dfs_num[u])
				cont++; 
			dfs_low[u] = min(dfs_low[u], dfs_low[v]);
		} else if (v != p)
			dfs_low[u] = min(dfs_low[u], dfs_num[v]);
}

int solve(int N)
{
	memset(dfs_num, 0, (N+1) * sizeof(int)); 
	memset(dfs_low, 0, (N+1)*sizeof(int)); 
	vector<edge> bridges; 
	for(int u=1, next = 1; u<=N;++u){
		if(not dfs_num[u])
			dfs_bridge(u, u, next ); 
	}
	return cont; 
}
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	int N, M;
	cin >> N >> M; 
	while(M--){
		int a, b; 
		cin >> a >> b;
		adj[a].emplace_back(b); 
		adj[b].emplace_back(a); 
	}
	cout << solve(N) << endl; 

}
