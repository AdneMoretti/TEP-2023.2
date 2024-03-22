#include<bits/stdc++.h> 

using namespace std; 

int main(){
	int N, S, K;
	cin >> N >> S >> K; 
	int soma =0; 
	for(int i=0;i<N;i++){
		int P, Q; 
		cin >> P >> Q; 
		soma+=Q*P; 
	
	}
	cout << (soma<S ? soma+K: soma ) << endl; 


	return 0;
}
