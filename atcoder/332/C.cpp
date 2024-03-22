#include<bits/stdc++.h> 

using namespace std; 

int main(){
	int N, M; 
	cin >> N >> M;  
	string S; 
	cin >> S; 
	int soma=0; 
	int logo = 0; 
	int plain = M;
	for(auto i: S){
		if(i=='0'){
			M = plain; 
			logo = soma;

		}
		if(i=='1'){
			if(M > 0){
				M--; 
			}
			else if(logo > 0){
				logo--; 
			}
			else{
				soma++; 
			}
		}
		else if(i=='2'){
			if(logo > 0)
				logo--; 
			else 
				soma++;  
		
		}
	}

	cout << soma << endl; 
	return 0;
}


