#include <bits/stdc++.h> 

using namespace std; 
using ll = long long; 
using ii = pair<ll, int>; 
bitset<20001> visited; 
int verifica_vetor(vector<int> &xs, ll x, int N){
	int l= N/2; 
	int i = 0, j = N-1;  
	while(i <= j){
		if(xs[i] == x and !visited[i])
			return i; 
		if(xs[j] == x and !visited[j])
			return j;  
		i++; 
		j--; 
	}
	while(i<=l){ 
		if(xs[i] == x and !visited[i])
			return i; 
		i++; 
	}
	while(j>=l){
		if(xs[j] == x and !visited[j])
			return j;  
		j--; 
	}
	return -1; 

}

int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	priority_queue<ll> pq; 
	int N; 
	cin >> N; 
	vector<int> xs (N+1, 0); 
	for(int i=0;i<N;i++){
		ll x; 
		cin >> x; 
		xs[i] = x; 
		pq.push(x); 
	}	
	ll soma = 0; 
	int i = 0; 
	int j = N-1; 
	while(!pq.empty()){
		ll y = pq.top();
		cout << "Y " << y << endl; 
		pq.pop(); 
		int index = (verifica_vetor(xs, y, N)); 
		cout << index << endl; 
		if(index <= N/2){
			soma+= xs[index] * abs(index - i); 
			swap(xs[i++], xs[index]); 
		} 
		else{
			soma+= xs[index] * abs(index - j); 
			swap(xs[j--], xs[index]); 
		}
		cout << index << "aqui estou" << endl; 
		visited[index] = 1;
	       for(auto x: xs)
	       	cout << x << endl; 


	}
	cout << soma << endl; 
}



