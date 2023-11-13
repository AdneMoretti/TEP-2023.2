#include <bits/stdc++.h> 
using namespace std; 
const int oo = 1000000; 
bitset<10001> visited; 
int N; 
vector<int>  bfs(int x,  vector<int> *adj){
	queue<int> q; 
	vector<int> giovani(N+1,oo); 
	giovani[0] = 0; 
	q.push(x); 
	while(!q.empty()){
		int s = q.front(); q.pop();
		for(auto i: adj[s]){
			if(giovani[i] == oo){
				q.push(i); 
				giovani[i] = giovani[s]+1; 
			}
		}
	
	}

	return giovani;
}

int main(){

	int P, T;
        cin >> T; 	
	while(T--){
		cin >> N >> P; 
		vector<int> adj[1001];
		for(int i=0;i<P;i++){
			int x, y; 
			cin >> x >> y; 
			adj[y].emplace_back(x);
		        adj[x].emplace_back(y);	
		}
		vector<int> giovani = bfs(0, adj);
		for(int i=1;i<N;i++)
			cout << giovani[i] << endl;
		if(T!=0)
			cout << endl;
	}
}
