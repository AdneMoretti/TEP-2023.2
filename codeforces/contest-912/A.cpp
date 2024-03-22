#include <bits/stdc++.h> 

using namespace std; 

int solve(vector<int> xs, vector<int> xs1, int  N, int K){
	int cont = 0;
       int i, j = 0, l=0;
	for(i=0;i< N;i++){
	      		vector<int> aux; 	
			while(xs1[j] != xs[i]){
				aux.push_back(xs1[j]);
			       j++; 	
			}
			aux.push_back(xs[i]); 
			if(aux.size() > K)
				return -1; 
			for(int k=aux.size()-1; k>=0; k--){
				if(aux[k] != xs[l]){	
					return -1; 
				}
				l++; 
			}
			i = l-1;
			j = l; 

	}
		

  return 1; 
}
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 

	int T, N, K;
       cin >> T; 	
	while(T--){
		cin >> N >> K; 
		vector<int> xs (N); 
		for(auto &i: xs)
			cin >> i; 
		vector<int> xs1; 
		xs1 = xs; 
		sort(xs.begin(), xs.end());
		cout << (solve(xs, xs1, N, K) == -1 ? "NO" : "YES") << endl; 
		 
	}
}
