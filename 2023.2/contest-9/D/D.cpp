#include <bits/stdc++.h> 

using namespace std; 
using ii = pair<int, int>; 
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	int N; 
	cin >> N;
	vector<ii> numbers; 
	long long Ao = 0; 
	long long T = 0; 
	for(int i=0;i<N;i++){
		int A, B; 
		cin >> A >> B; 
		numbers.emplace_back(ii(A, B)); 
		Ao += A; 
	}
	long long TotalT = 0; 
	sort(numbers.rbegin(), numbers.rend());
	int cont = 0; 
	for(auto [a, b]: numbers){
		if(TotalT <= Ao)
			cont++;
		else 
			break; 
		TotalT += a+b; 
		Ao-=a; 

	}	


	cout << cont << endl; 
	return 0; 
}



