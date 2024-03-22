#include <bits/stdc++.h> 

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	int T, N; string S;
       cin >> T; 	
	while(T--){
		vector<int> pre; 
		cin >> N >> S;
		int cont=0; 
		int response = -1; 
		for(int i=0;i<N;i++){
			if(S[i] == '.')
				cont++; 
			
			if(S[i] == '#'){
				pre.push_back(cont); 
				cont = 0; 
			}
			if(i==N-1)
				pre.push_back(cont); 
			if(cont>=3)
				response = 2; 		
		}
		int soma = 0; 
		if(response == -1){
			for(auto i: pre){
			       soma += i;
			}	       
			response = soma; 
		}

		cout << response << endl; 
	}

}
