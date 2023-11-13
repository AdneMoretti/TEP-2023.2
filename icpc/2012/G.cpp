#include <bits/stdc++.h> 

using namespace std; 

int main(){
	int N, x; 
	vector<int> saida;  
	while(cin >> N){
		for(int i=0;i<N;i++){
			cin >> x;
			saida.push_back(x); 	
		}
		int cont = 0; 
		for(int j=0;j<N;j++){
			cin >> x;
		        auto index = find(saida.begin(), saida.end(), x); 	
			auto n = index -  saida.begin(); 
			if(n > 0){
				cont+= n; 
				}
			saida.erase(index); 
		}
		cout << cont << endl; 
	
	}


}
