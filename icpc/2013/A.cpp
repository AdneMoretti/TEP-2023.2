#include <bits/stdc++.h> 

using namespace std; 

int main(){
	int A, B, C;
	while(cin >> A >> B >> C){ 
	int response = 1; 
	vector<int> n (2, 0);

	n[A]++; 
	n[B]++; 
	n[C]++; 
	if(n[0] == 0 or n[1] == 0){
		cout << "*" << endl; 
		continue; 
	}
	if(n[1] > n[0])
		response = 0; 
	cout << (A==response ? "A" : B==response ? "B" : "C") << endl; 
	}
	return 0; 
}
