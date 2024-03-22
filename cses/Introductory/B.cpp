#include <bits/stdc++.h> 

using namespace std; 
using ll = long long; 

int main(){
	ll n; 
	cin >> n; 
	ll soma = ((1+n)*n)/2; 
	ll x; 
	ll res = 0; 
	n--; 

	while(n--){
		cin >> x; 
		res+=x; 
	}	
	cout << soma - res << endl;  
}
