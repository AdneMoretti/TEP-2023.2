#include <bits/stdc++.h> 

using namespace std; 
using ll = long long; 
int main(){
	ll x; 
	cin >> x; 
	vector<int> xs(x, 0); 
	for(auto &i: xs)
		cin >> i; 
	ll cont = 0;
	for(int i=1;i<x;i++){
		if(xs[i-1] > xs[i]){
			cont+=xs[i-1]-xs[i]; 
			xs[i] = xs[i-1]; 
		}
			
	
	}
	cout << cont << endl; 
}
