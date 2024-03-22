#include <bits/stdc++.h> 

using namespace std; 

int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	int N, M; 
	cin >> N >> M; 
       vector<int> result; 	
	for(int i=0;i<N;i++){
		int cont =0; 
		for(int j=0;j<M;j++){
			int x; 
			cin >> x; 
			if(x)
				cont++; 
		}
		if(cont==M)
			result.push_back(i); 

	}
	cout << result.size() << endl; 
}
