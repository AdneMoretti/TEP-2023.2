#include <bits/stdc++.h> 

using namespace std; 

int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 

	int n, m; 
	cin >> n >> m; 
	int soma = 0; 
	while(m--){
		int x; 
		cin >> x; 
		soma+=x; 
	}
	cout << (n < soma ? -1 : n-soma) << endl; 
}

