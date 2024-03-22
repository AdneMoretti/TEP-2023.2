#include <bits/stdc++.h> 

using namespace std; 
vector<vector<int>> aux(9, vector<int> (9, 0));
vector<set<int>> colunas (9); 
vector<set<int>> linhas (9); 
vector<set<int>> quadrado (9); 

void leitura(){
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			  colunas[j].insert(aux[i][j]);
		    linhas[i].insert(aux[i][j]);	
		}	
	}
}


void le_quadrado(){
	int o = 0; 
	for(int i=0;i<9;i+=3)
		for(int j=0;j<9;j+=3){
			for(int k=0;k<=2;k++)
				for(int l=0;l<=2;l++)
					quadrado[o].insert(aux[i+k][j+l]);
			o++; 
		}
}

string solve(){
	for(int i=0;i<9;i++){
		if(colunas[i].size()!=9) {
			return "No"; 
    		}
		if(linhas[i].size()!=9) 
			return "No"; 
		if(quadrado[i].size()!=9)
			return "No";
	}
	return "Yes"; 
}

int main(){

	ios_base::sync_with_stdio(0); 
	cin.tie(0); 	
		
	for(auto &l: aux)
		for(auto &c: l)
			cin >> c; 

  leitura();
  le_quadrado(); 	
       				
	cout << solve() << endl; 
}

