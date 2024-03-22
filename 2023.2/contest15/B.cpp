#include <bits/stdc++.h> 

using namespace std; 
using ll = long long; 
int main(){
	ll a, b, c, d; 
	cin >> a >> b >> c >> d;
       long long response = max(max(max(a*c, a*d), b*c),b*d);  	
	cout << response  << endl; 

	return 0; 



}

