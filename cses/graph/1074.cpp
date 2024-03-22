#include <bits/stdc++.h> 

using namespace std; 
using ll = long long; 
int main(){
	int n, p;
	cin >> n; 
	vector<int> ps(n); 
	ll soma = 0; 
	for(int i=0;i<n;i++){
		cin >> p;
		ps[i] = p; 
		soma+=p; 
			
	}
	soma = soma/n; 
	ll result = 0; 
	for(auto i: ps){
		result += abs(soma-i);
	}	
	cout << result << endl; 

	return 0; 

}
