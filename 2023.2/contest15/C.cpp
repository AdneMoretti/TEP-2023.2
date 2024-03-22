#include <bits/stdc++.h> 

using namespace std; 
using ll = long long;
ll m = 1000000007; 
ll fast_exp(ll a, ll n){

a%=m; 	
    long long res = 1; 
    while(n>0){
	if( n & 1 )
    		res = res * a % m; 
	a = a * a % m; 
	n >>=1; 
    
    }    
    return (res); 
}

int main(){
	ll n;  
	cin >> n;
	//ll a = n-2; 
	ll a = n; 
	if(a<0){
		cout << 0 << endl; 
		return 0; 
	}
 ll response = (fast_exp(10, n) - 2 * fast_exp(9, n)+ fast_exp(8, n) );
	response %= m;  
       cout << (response < 0 ? response + m : response)  << endl;
	return 0; 

}


