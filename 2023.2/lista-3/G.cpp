#include <bits/stdc++.h> 

using namespace std; 
int N, M; 
int visited[1000]; 
const int NONE = 0, BLUE = 1, RED = 2; 
bool dfs(int s, vector<int> *adj, int p=-1){			
	for(auto u: adj[s]){
			if(!visited[u]){
				visited[u] = 3 - visited[s];
				if(!dfs(u, adj, s)){
					return false; 
				}
			}
			else if(visited[u] == visited[s])
				return false;
		}
		return true; 
}
void print_g(){
	for(int i=0;i<N;i++){
		cout << visited[i];
	}
}
int main(){
	int x, y;  
	while(1){
		memset(visited, 0, sizeof(int) * 1000);	
		vector<int> adj[1000];
		cin >> N >> M;
		if(!N) 
			return 0;
		visited[0] = BLUE;
		for(int i=0;i<M;i++){
			cin >> x >> y; 
			adj[x].emplace_back(y); 
			adj[y].emplace_back(x); 
		}
		if(!dfs(0, adj))
			cout << "NOT BICOLORABLE." << endl; 
		else 
			cout << "BICOLORABLE." << endl; 
	}	
}

