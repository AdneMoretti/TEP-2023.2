#include <bits/stdc++.h> 

using namespace std; 

bool solve(vector<int> inicial, vector<int> fim, int N){
	for(int i=0;i<N-1;i++){
		fim.push_back(fim[i] - inicial[i]); 	
		fim[i]=inicial[i];
	    	
	}
	int soma = 0; 
	if(fim.size() > N-1){
		for(int i=N-1;i<fim.size();i++){
			if(i==N-1 and fim[i] < 0)
				return false; 
			soma+=fim[i]; 	
		}
		if(soma!=inicial[N-1])
			return false; 	
	}
	//for(auto i: fim)
	//	cout << i << " "; 
	return true;	
}

int main(){
	int N, M; 
	cin >> N; 
	vector<int> inicial (N); 
	for(auto &i: inicial)
		cin >> i;
       cin >> M; 	
	vector<int> fim (M);
	for(auto &j: fim)
		cin >> j; 
	cout << (solve(inicial, fim, N) ? "S" : "N") << endl;


}
