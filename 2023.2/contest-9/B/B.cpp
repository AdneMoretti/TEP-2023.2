#include <bits/stdc++.h> 

using namespace std; 
using ii = pair<int, int>; 
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	int N, x, y; 
	cin >> N; 
	vector<ii> points; 
	int cont = 0; 
	for(int i=0;i<N;i++){
		cin >> x >> y;	
		for(auto [i, j]: points){
			float a = (float) (j-y)/(i-x);
			if( a <= 1 and a >= -1){
				cont++; 
			}
		}	
		points.emplace_back(ii(x, y)); 
	}
	cout << cont << endl; 
	return 0; 
}

