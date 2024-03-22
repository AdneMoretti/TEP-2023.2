#include <bits/stdc++.h> 

using namespace std; 
int N; 
int cont = 0; 
vector<string> matrice; 
void linhas(){
	int i=0; 
	int j=N-1;
	while(i<=j){
		for(int k=0; k<N; k++){
			if(matrice[i][k] != matrice[j][k]){
				int maximo = max(matrice[i][k] - matrice[j][k], matrice[j][k] - matrice[i][k]);				
				matrice[i][k] = matrice[j][k]; 
			        cont+=maximo; 

			}
			
			if(matrice[k][i] != matrice[k][j]){
				int maximo = max(matrice[k][i] - matrice[k][j], matrice[k][j] - matrice[k][i]);
			        cont+=maximo; 
				matrice[k][i] = matrice[k][j]; 
			}
		}
		i++; 
		j--;
	}
}


int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	int T, M; 
	cin >> T; 
	while(T--){
		cont =0; 
		matrice.clear(); 
		cin >> N;
	        string s; 	
		for(int i=0;i<N;i++){
			cin >> s; 
			matrice.push_back(s); 
		}
		colunas(); 
		//linhas(); 
		cout << cont << endl; 
	}
	return 0; 

}
