#include <bits/stdc++.h> 

using namespace std; 

int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	
	int A, B; 
	cin >> A >> B; 

	int somaA = 0; 
	int somaB = 0; 
	while(A > 0){
		somaA += A%10; 
		somaB += B%10; 
		A/=10; 
		B/=10; 
	}
	cout << max(somaA, somaB) << endl; 
	return 0; 
}
