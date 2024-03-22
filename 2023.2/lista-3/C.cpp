#include <bits/stdc++.h> 

using namespace std; 
int N, M; 
vector<int> edges;
vector<int> adj[10000]; 
int visited[10000]; 
bitset<10000> aux;

vector<int> dijkstra(int s, int N)
{
	const int oo { 1000000010 };
	vector<int> dist(N + 1, oo);
	set<ii> U;
	U.emplace(0, s);
	while (not U.empty())
	{
		auto [d, u] = *U.begin();
		U.erase(U.begin());
		for (auto [v, w] : adj[u])
		{
			if (dist[v] > d + 1)
			{
				if (U.count(ii(dist[v], v)))
				U.erase(ii(dist[v], v));
			}
		}	
	}
	return dist; 
}


bool solve(){
	memset(visited, 0, sizeof(int)*10000); 
	for(int i=1;i<=N;i++){
        	edges.clear();
		if(not visited[i] and dfs(i))
			return true; 
	}
	return false; 	
}
int main(){
	cin >> N >> M; 
	for(int i=0;i<M;i++){
		int a, b; 
		cin >> a >> b; 
		adj[a].emplace_back(b); 
	}
	for(int i=1;i<=N;i++){
		vector<int> dist = dijkstra(i); 
		cout << dist[i] << endl; 

	}
	return 0;
}
