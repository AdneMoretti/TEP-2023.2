#include <bits/stdc++.h> 

using namespace std; 
using ll = long long; 

int main(){
	ll n, k; 
	ll soma = 0; 
	cin >> n >> k; 
	list<ll> xs(n, 0); 
	for(auto &i: xs){
		cin >> i; 
	}
	//sort(xs.begin(), xs.end()); 
	xs.sort();
	while(xs.size() > 1 ){
		ll last = xs.back(); 
		ll begin = xs.front(); 
		if((last + begin) <= k){
			soma++; 
			xs.pop_back(); 
			xs.pop_front(); 
		}	
		else{
			soma++; 
			xs.pop_back(); 
		}
	}
	if(!xs.empty()) 
		soma++; 

	cout << soma << endl; 

}
