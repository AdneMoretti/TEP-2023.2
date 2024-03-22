#include <bits/stdc++.h> 

using namespace std; 
int solve(vector<int> distances, int N, set<int> conjunto){
	int l = distances.back()/3;
	if(distances.back()%3 !=0)
		return 0 ;
	int cont = 0;
	for(auto v: distances){
		if(conjunto.count(v) and conjunto.count(v+l) and conjunto.count(v+2*l) and conjunto.count((v+3*l))){
			cont++; 
		}
	
	}	
	return cont/3; 
}
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0);
	int N; 
	cin >> N; 
	vector<int> distances (N+1);
 	vector<int> aux; 	
	distances[0] = 0; 
	for(int i=1;i<=N;i++){
		int x;
		cin >> x; 
	       	distances[i] = distances[i-1]+x; 	
		aux.push_back(x); 
	}
	set<int> conjunto (distances.begin(), distances.end());
	int base = distances.back();
	for(auto i: aux)
		conjunto.insert(base+=i); 

	cout << solve(distances, N, conjunto) << endl; 
}
