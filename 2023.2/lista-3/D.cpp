#include <bits/stdc++.h> 

using namespace std; 
using ii = pair<int, int>;
int N, M; 
vector<ii> adj[1000001];
using ll = long long; 
const ll oo = 9223372036854775807; 
vector<ll> dist(1000001, oo);
const int NONE = 0, BLUE = 1, RED = 2; 
//void dfs(int s, vector<ii> *adj, int p=-1){	
//	for(auto [u, w]: adj[s]){
//		if(visited[u] == NONE){
//			if(w % 2)
//				visited[u] = 3 - visited[s];
//			else 
//				visited[u] = visited[s]; 
//			dfs(u, adj, s);
//		}
//	}
//}
void bfs(int x){
	queue<int> q; 
	q.push(x); 
	dist[x] = 0; 
	while(!q.empty()){
		auto u = q.front(); q.pop(); 
		for(auto [v, w]: adj[u]){
			if(dist[v] == oo){
				dist[v] = dist[u] + w; 
				q.push(v); 
			}
		}
	
	}

}
int main(){
	int x, y, w;  
		cin >> N;
		for(int i=0;i<N-1;i++){
			cin >> x >> y >> w; 
			adj[x].emplace_back(ii(y, w)); 
			adj[y].emplace_back(ii(x, w)); 
		}
		bfs(1); 
		for(int j=1;j<=N;j++){
			if(dist[j] % 2) 
				cout << BLUE << endl;  
			else 
				cout << 0 << endl; 
}
}

