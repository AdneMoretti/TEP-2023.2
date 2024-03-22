#include <bits/stdc++.h> 

using namespace std; 
const int POSITIVO = 1, NEGATIVO = -1, ZERO = 0; 
int sinal(int i){

	return 	(i>0? POSITIVO : (i==0? ZERO : NEGATIVO));  

}
int main(){
	int n; 
	cin >> n; 
	vector<int> A (n); 
	vector<int> P (n-1); 
	vector<int> s; 
	for(auto &i: A){
		cin >> i; 
		s.push_back(sinal(i)); 
	}
	for(auto &j: P){
		cin >> j; 
	}
	vector<int> xs (n); 
	while(1){
		xs = A; 
		bool pass = true; 
		for(int i=0;i<n-1;i++){
			A[P[i]-1] += A[i+1];
			cout << "sinal " << sinal(A[P[i]-1]) << " " << s[P[i]-1] << endl;  
			if(sinal(A[P[i]-1]) != s[P[i]-1])
				pass = false; 
			s[P[i]-1] = sinal(A[P[i]-1]); 
		}
		for(auto j: A)
			cout << j << " ";
		//cout << endl; 
		if(pass){
		 	cout << (s[0] == POSITIVO ? "+" : (s[0] == ZERO ? "0" : "-")) << endl;
		       return 0; 	
		}
		return 0; 


	}
}
