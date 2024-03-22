#include <bits/stdc++.h> 

using namespace std; 

int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	int n; 
	cin >> n; 
	vector<int> q; 
	vector<int> cor(n+1); 
	int x, y; 
	for(int j=0;j<n;j++){
		cin >> x;
	        q.emplace_back(x); 	
		cor[x] = j; 
	}
	int queries; 
	cin >> queries; 
	for(int i=0;i<queries;i++){
		cin >> x >> y; 
		int menor = 100000; 
		//for(int k= min(cor[x], cor[y]); k <= max(cor[x], cor[y]); k++){
		//	if(q[k] < menor)
		//		menor = q[k];
		//}
		cout << q[min(cor[x], cor[y])] << endl; 
	
	}

}

