#include <bits/stdc++.h> 

using namespace std; 

int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0);
	int N, X; 
	cin >> N >> X; 
	int soma = 0; 
	while(N--){
		int y; 
		cin >> y; 
		if(y<=X)
			soma+=y; 
	
	}

	cout << soma << endl; 
}
