#include <bits/stdc++.h> 

using namespace std; 
using edge = tuple<int, int, int>;
using ll = long long; 
class UFDS{
	private: 
		vector<int> size, ps; 

	public: 
		UFDS(int N): size(N+1, 1), ps(N+1)
		{
			iota(ps.begin(), ps.end(), 0); 
		}
	int find_set(int x) const 
	{
		return x == ps[x] ? x: find_set(ps[x]); 
	
	}
	
	bool same_set(int x, int y){
	
		return find_set(x) == find_set(y); 
	}
	void union_set(int x, int y)
	{
		if(same_set(x, y))
			return; 
		int p = find_set(x); 
		int q = find_set(y); 
		if(size[p] < size[q])
			swap(p, q); 
		ps[q] = p; 
		size[p]+=size[q]; 
	}

};

ll MST(vector<edge> &arestas, int N){

	sort(arestas.begin(), arestas.end()); 
	ll cost = 0; 
	int cont = 0;
	UFDS ufds(N); 
	for(auto [w, u, v]: arestas){
	
		if(not ufds.same_set(u, v)){
			cont++; 
			cost+=w; 
			ufds.union_set(u, v); 
		}
	}
	return (cont < N-1 ? -1 : cost);
}
int main(){
	int N, M;
       vector<edge> edges; 
	cin >> N >> M;        
	while(M--){
		int a, b, c; 
		cin >> a >> b >> c; 
		edges.push_back(edge(c, a, b)); 
		
	}
	ll response = MST(edges, N);
       if(response==-1)	
	cout << "IMPOSSIBLE"  << endl; 
       else 
	       cout << response << endl; 

       return 0; 
	
}

