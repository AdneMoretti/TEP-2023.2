#include <bits/stdc++.h> 

using namespace std; 
using ii = pair<int, int>; 
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	int N; 
	cin >> N;
	string response = "";
        int valido = 0; 	
        set<string> s; 
	vector<ii> n; 
	int Ao = 0; 
	int T = 0; 
	for(int i=0;i<N;i++){
		int A, B; 
		cin >> A >> B; 
		n.emplace_back(ii(A, B)); 
		Ao += A; 
		T += T; 		
	}
	int TotalT = T; 
	sort(n.rbegin(), n.rend());
	int i=0; 
        while(Ao <= (TotalT-T)){
		auto [a, b]  = n[i]; 
		T+=a; 
		Ao-=a; 
		i++; 
	}	


	cout << i << endl; 
	return 0; 
}


