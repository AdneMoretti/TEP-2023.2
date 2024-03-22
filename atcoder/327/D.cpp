#include <bits/stdc++.h> 

using namespace std; 
const int MAX = 2e5 + 100;
vector<int> colored (MAX, -1);
int N, M; 
int dfs(int u, const vector<vector<int>> &adj){
	for(auto v: adj[u]){
		if(colored[v]==-1){
			colored[v] = 1 - colored[u]; 
			if(!dfs(v, adj)) return 0;  
		}
		else 
			if(colored[v]==colored[u])
				return 0; 
	}
	return 1; 
		
}

int is_bipartide(const vector<vector<int>> &adj){
	for(int i=1; i<=N;i++){
		if(colored[i]==-1){
			colored[i] = 0; 
			if(!dfs(i, adj))
				return 0;
		}
	}
	return 1; 
}

int main(){
	int x; 
	cin >> N >> M;
        vector<vector<int>> adj (MAX); 	
	vector<int> A; 
	for(int i=0;i<M;i++){
		cin >> x; 
		A.push_back(x); 
	}
	for(int i=0;i<M;i++){
		cin >> x; 
		adj[x].push_back(A[i]); 
		adj[A[i]].push_back(x); 
	}
	cout << (is_bipartide(adj) ? "Yes" : "No") << endl; 
}
