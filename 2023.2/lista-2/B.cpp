#include <bits/stdc++.h> 

using namespace std;

int  link_rail[1000000];
int  link_roads[1000000]; 
int size_roads[1000000];
int size_rail[1000000];

int find(int x){
	while(x!=link_roads[x]) x = link_roads[x];
	return x; 
}
int find_rail(int x){
	while(x!=link_rail[x]) x = link_rail[x];
	return x; 
}
void unite(int a, int b){
	a = find(a);
	b = find(b); 
	if(size_roads[a] < size_roads[b]) swap(a, b); 
	    size_roads[a]+=size_roads[b];
	link_roads[b] = a; 
}
void unite_rail(int a, int b){
	a = find(a);
	b = find(b); 
	if(size_rail[a] < size_rail[b]) swap(a, b); 
	    size_rail[a]+=size_rail[b];
	link_rail[b] = a; 
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); 
	int N, K, L, p, q;
	cin >> N >> K >> L;
	for(int i=0;i<K;i++){
		link_roads[i]=i;
		size_roads[i]=1; 
	}
	for(int i=0;i<L;i++){
		link_rail[i]=i;
		size_rail[i]=1; 
	} 
	for(int i=0;i<K;i++){
		cin >> p >> q; 
		unite(p, q); 
	}
	for(int j=0;j<L;j++){
		cin >> p >> q; 
		unite_rail(p, q);
	}
	for(int i=0;i<N;i++){
		if(!size_roads[i] and !size_rail[i])
		      cout << size_roads[i]+size_rail[i] << " ";
	}
}
