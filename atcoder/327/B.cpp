#include <bits/stdc++.h> 

using namespace std; 
using ll = long long; 
long long fast_exp(long long a, int n)
{
    if (n == 1)
        return a;

    auto x = fast_exp(a, n / 2);

    return x * x * (n % 2 ? a : 1);
}
int solve(ll B){
	for(int i=1;i*i<=B; i++){
		ll result = fast_exp(i, i);
		if(result == B)
			return i;
		if(result > B)
			return -1; 
	}
	return -1; 
}
int main(){
	ll B; 
	cin >> B; 
	if(B == 1){
		cout << "1" << endl; 
		return 0; 
	}
	cout << solve(B) << endl; 


}
