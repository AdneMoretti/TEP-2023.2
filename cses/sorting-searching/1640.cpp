#include <bits/stdc++.h> 

using namespace std; 
using ii = pair<int, int>; 

int binary_search(vector<ii> &xs, int l, int r, int x)
{
	while(l <= r)
	{
		int meio = (l + r)/2; 
	//	cout << meio <<" " << xs[meio] << " " <<  endl;	
//		cout << "l " << l << "r " << r; 
		if(xs[meio].first > x)
			r = meio - 1; 
		else if (xs[meio].first == x)
			return xs[meio].second; 
		else 
			l = meio + 1; 
	}
	return 0; 
}
int main(){
	int n, m; 
	cin >> n >> m; 
	vector<ii> xs(n); 
	
	for(auto i=1;i<=n;i++){
		cin >> xs[i-1].first; 
		xs[i-1].second = i; 
	}
	sort(xs.begin(), xs.end()); 
	for(auto i= 0; i<xs.size(); i++){
		int a = xs[i].first; 
		xs[i].first = -1; 
		//cout << m - xs[i].first << endl; 
		int response = binary_search(xs, 0, n, m - a); 
		xs[i].first = a; 
		if(!response or (xs[i].first > m)){
			continue;
		}
		if(response){
			cout << xs[i].second << " " << response << endl; 
			return 0; 
		}
	}
	cout << "IMPOSSIBLE" << endl; 
	return 0; 
}



