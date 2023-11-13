#include <bits/stdc++.h> 

using namespace std; 

vector<string> matrice; 	
vector<int> numbers {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
vector<string> colums(9, ""); 
string colum = ""; 
string solve(){
	for(int i=0;i<9;i+=1){
		for(auto j: numbers){
			if(find(matrice[i].begin(), matrice[i].end(), j) == matrice[i].end()){
				return "No"; 
			}
		}
		
	}


	for(int i=0; i<17;i+=2){
		for(int j=0;j<9;j++){
			colums[i/2]+=matrice[j][i]; 
		}
	}

	for(auto i: colums){  	
		cout << i << endl; 
		for(auto k: numbers){ 
			if(find(i.begin(), i.end(), k) == i.end()){
				cout << i << endl; 
				cout << k << endl; 
				return "No"; 
			}
		}
		
	}
		
	return "Yes"; 
}
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	string s;
	for(int i=0;i<9;i++){
		getline(cin, s);
	        matrice.push_back(s); 	
	}
	cout << solve() << endl; 
}
