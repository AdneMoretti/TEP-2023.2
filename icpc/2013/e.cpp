#include <bits/stdc++.h> 

using namespace std;

int main(){
	int N, Q; 
	set<int> n; 
	cin >> N >> Q; 
	for(int i=1;i<=N;i++){
		n.insert(i);  
	}
	while(Q--){
		int x; 
		cin >> x; 
		n.erase(x); 
	}
	if(n.size() == 0){
		cout << "*" << endl; 
		return 0; 
	}
	for(auto i: n)
		cout << i << " "; 

	cout << endl; 
	return 0; 
}
