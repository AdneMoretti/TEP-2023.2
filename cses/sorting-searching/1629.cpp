#include <bits/stdc++.h> 

using namespace std; 
using ii = pair<int, int>; 

int main(){
	ios_base::sync_with_stdio(0); 
	int n; 
	cin >> n; 
	vector<ii> movies; 
	for(int i=0;i<n;i++){
		int x, y; 
		cin >> x >> y; 
		movies.push_back(ii(y, x)); 
	
	}

	sort(movies.begin(), movies.end()); 
	int response = 0; 
	vector<int> time; 
	time.push_back(0); 
	for(auto i: movies){
		if(i.second >= time.back()){
			//cout << i.first << " " << time.back() << endl; 
			time.push_back(i.first); 
			response++; 
		} 
	}
	cout << response << endl; 
	
}
