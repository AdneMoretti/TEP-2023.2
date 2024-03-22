#include <bits/stdc++.h> 
using namespace std; 
using ll = long long;
ll K,  N, neighbor = 1;  
int adj[1000000];
int visited[1000000]; 
int cont=1;
int repetido = 0;
vector<ll> ordem; 
void dfs(int s){
	if(visited[s]){
		repetido = visited[s]-1;
		return;
	}	
	visited[s] = cont++;	
	ordem.push_back(s);
	dfs(adj[s]); 
}

int solve(ll K){ 
	int size_o = ordem.size();
	if(K>=size_o)
		return ordem[repetido + (K-repetido)%(size_o-repetido)];

	return ordem[K]; 
}
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0);

	cin >> N >> K; 
	int A;
	for(int i=1;i<=N;i++){
		cin >> A; 	
		adj[i] = A; 
	}
	dfs(1); 
	cout << solve(K) <<endl; 
	return 0; 
}
