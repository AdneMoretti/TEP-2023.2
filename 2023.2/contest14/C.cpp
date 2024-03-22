#include <bits/stdc++.h> 

using namespace std; 

int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 

	int n; 
	cin >> n; 
	vector<int> xs (n+1, 0); 
	int soma = 0; 
	n--; 
	while(n--){
		int x; 
		cin >> x;
		xs[x]++; 
	}
	for(int i=1; i<xs.size(); i++){
		cout << xs[i] << endl; 
	
	}
}


