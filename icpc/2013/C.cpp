#include <bits/stdc++.h> 

using namespace std; 
using ii = pair<int, int>; 

void T(int a, int b, vector<set<ii>> &in, vector<int> age) {
	for(auto &i: in){
		ii pair_a = ii(age[a], a); 
		ii pair_b = ii(age[b], b); 
		if(!i.count(pair_a) and i.count(pair_b)){ 
			i.insert(pair_a); 
			i.erase(pair_b); 
		}
		else if(i.count(pair_a) and !i.count(pair_b)){
			i.insert(pair_b); 
			i.erase(pair_a);
		}
	}
	auto aux = in[a];	
	in[a] = in[b]; 
	in[b] = aux; 

}

void dfs(){


}

int main(){
	int N, M, I; 
	cin >> N >> M >> I; 
	vector<set<ii>> in(N+1);
	vector<int> age (N+1); 
	for(int i=1;i<=N;i++){
		int x; 
		cin >> x; 
		age[i] = x;
	}
	while(M--){
		int a, b; 
		cin >> a >> b; 
		in[b].insert(ii(age[a], a)); 
	}
	
	while(I--){
		char c; int x, y; 
		cin >> c; 
		if(c=='T'){
			cin >> x >> y;
		        T(x, y, in, age); 	
		}
		else {
			cin >> x;
		       	if(in[x].empty())
				cout << "*" << endl; 
			else 
				cout <<( *in[x].begin()).first << endl; 	
		}
	}

}
