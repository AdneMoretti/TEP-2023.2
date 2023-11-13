#include <bits/stdc++.h> 

using namespace std; 
int N, S; 
queue<int> fila; 
vector<int> adj[1000000];
const int oo = 10000001;
vector<int> dist(100001, oo);
void bfs(int s){
	dist[s] = 0;
	fila.push(s);
   	while(!fila.empty()){
		auto u = fila.front();
		fila.pop();
		//cout << u << endl;
		for(auto i: adj[u]){
			if(dist[i] == oo){
				dist[i] = dist[u] + 1;
				fila.push(i);
			}	
		        if(dist[i] != oo and (dist[i] % 3) != 0){
				//cout << "dist" << dist[i];
				dist[i] = dist[u] + 1; 	
			}

		}
	}	

}
int main(){
	int M,T, x, y; 
	cin >> N >> M;
	while(M--){
		cin >> x >> y; 
		adj[x].emplace_back(y);
		adj[y].emplace_back(x); 
		
	}
	cin >> S >> T;

	bfs(S);
	if(dist[T] % 3 == 0 and dist[T] == oo)		
		cout << dist[T] << endl;
	else 
		cout << "-1" << endl;
	return 0; 
}

