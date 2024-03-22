#include <bits/stdc++.h> 

using namespace std; 

int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	int n, q; 
	string s; 
	cin >> n >> s >> q; 
	cout << " s "  << s << endl; 
	map<char, char> mapper; 
	map<char, char> last; 
	for(int i=0;i<q;i++){
		char x, y; 
		cin >> x >> y; 
		mapper[x] = y;
	        last[y] = x; 	
		if(last[x]){
			cout << x << endl; 
			cout << last[x] << endl; 
			mapper[last[x]] = y; 
		}

	}
	for(auto i: s){
		if(mapper[i])
			cout << mapper[i];
		else
			cout << i; 
	}
	
	cout << endl; 

	
}


