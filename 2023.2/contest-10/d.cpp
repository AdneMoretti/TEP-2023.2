
#include <bits/stdc++.h> 

using namespace std; 

int main(){
	int n, m;
	cin >> n >> m;

	vector<int> v(n);


	for ( auto &i : v)
		cin >> i;


	map<int, vector<int>> ma;

	for (auto i: v){

		int r = 0;
		while (i){
		r++;
		i/=2;

		}

		ma[r].push_back(i);
	}


	int res = 0;

	for ( auto [c, v] : ma)
		for (auto i : v)
			for ( auto j : v )
				if ( i != j)
					res += m/gcd(i, j);



	cout << res << endl;




}
