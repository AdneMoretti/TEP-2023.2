#include <bits/stdc++.h> 
 
using namespace std; 
using ii = pair<int, int>; 
int menor = 1000000;
 
void T(int a, int b, vector<int> &pointer, vector<int> &age) {
	swap(age[pointer[a]], age[pointer[b]]); 
	swap(pointer[a], pointer[b]); 
}
 
//void P(vector<int> &visited, int a, vector<int> age, vector<set<int>> adj_father, vector<int> pointer){ 
//	if(visited[a]){
//		return;
//	}
//
//	
//	visited[a] = 1;
//	for(auto i: adj_father[a]){
//		menor = min(menor, age[i]); 
//		P(visited,i,  age, adj_father, pointer ); 
//	}
// 
//}

void P(vector<int> &visited, int a, const vector<int> &age, const vector<set<int>> &adj_father, const vector<int> &pointer){
	queue<int> q; 
	q.push(a); 
	visited[a] = 1; 
	while(!q.empty()){
		int x = q.front(); q.pop(); 
		for(auto i: adj_father[x]){
			if(not visited[i]){
			       visited[i] = 1; 	
				q.push(i); 
				menor = min(menor, age[i]);
			 }	

		}
	
	}
}	
int main(){
	int N, M, I; 
	while(cin >> N >> M >> I){ 
	vector<set<int>> in(N+1);
	vector<int> age (N+1); 
	vector<int> pointer(N+1); 
	for(int i=1;i<=N;i++){
		int x; 
		cin >> x; 
		age[i] = x;
		pointer[i] = i; 
	}
	while(M--){
		int a, b; 
		cin >> a >> b; 
		in[b].insert(a); 
	}
	
	while(I--){
		char c; int x, y; 
		cin >> c; 
		menor = 1000000; 
		vector<int> visited (N+1, 0); 
		if(c=='T'){
			cin >> x >> y;
		        T(x, y, pointer, age); 
		}
		else {
			cin >> x;
		
		       	if(in[pointer[x]].empty())
				cout << "*" << endl; 
			else{
				P(visited, pointer[x], age, in, pointer); 
				cout << menor << endl;
			}	
		}

	}
	}
 
}

