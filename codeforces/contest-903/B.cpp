#include <bits/stdc++.h> 
using namespace std; 
int solve(int a, int b, int c){
	vector<int> thread = {a, b, c};
	int aux = 3;
	while(aux--){
		int maior = 0, maior_i = 0, menor = thread[0], menor_i = thread[0], continua = 0; 	
		for(int i=0;i<thread.size(); i++){
			if(thread[i] > maior){
				maior = thread[i];
				maior_i = i; 
			}
			else if(thread[i] < menor){
				menor = thread[i]; 
				menor_i = i; 
			}
		}
		thread.erase(thread.begin() + maior_i); 
		thread.push_back(maior - menor);
	        thread.push_back(menor); 
		for(int i=1; i<thread.size();i++){
			if(thread[i] != thread[i-1])
				continua = 1; 
		}
		//cout << "printando o vetor" << endl; 
		//for(auto j: thread)
		//	cout << j << endl; 		
		//cout << "continua" << continua; 
		if(!continua) 
			return 1; 	
	}	

	return 0;
}
int main(){
	int T, a, b, c; 
	cin >> T; 
	while(T--){
		cin >> a >> b >> c; 
		if(a == b and a==c){
			cout << "YES" << endl; 
		}
		else{
			if(solve(a, b, c))
				cout << "YES" << endl; 
			else
				cout << "NO" << endl; 
		}
	
	}
}
