#include <bits/stdc++.h> 

using namespace std; 
using ii = pair<int, int>;
const int oo = 10000000; 
vector<ii> adj[10000];
vector<int> dist(10000, oo); 

void dijkstra(int x){
	queue<ii> q; 
	q.push(ii(0, x)); 
	dist[x] = 0; 
	while(!q.empty()){
		auto [d, s]  = q.front(); q.pop(); 
		for(auto [u, w]: adj[s]){
			if(dist[u] > d + w){
				dist[u] = d + w; 
				q.push(ii(dist[u], u)); 
			}
		}
	}

} 
int main(){
	int N; 
	cin >> N;
	for(int i=2;i<=N; i++){
		for(int j=1;j<i;j++){
			string s; 
			cin >> s; 
			if(s.compare("x") != 0){
				int w = stoi(s); 
				adj[i].emplace_back(ii(j, w)); 
				adj[j].emplace_back(ii(i, w)); 
			}
		}
	
	}
	//for(int i=1; i<=N; i++){
	//	cout << i << ": "; 
	//	for(auto j: adj[i]){
	//		cout << j.first << ", " << j.second << " "; 
	//	}
	//
	//	cout << endl; 
	//}
	dijkstra(1); 
	int maior = 0; 
	for(int k=1;k<=N;k++){
		if(dist[k] > maior)
			maior = dist[k]; 
	}
	cout << maior << endl; 
}

