#include <bits/stdc++.h> 

using namespace std; 

int main(){
	int N, M; 
	cin >> N >> M; 
	int A; 
	vector<int> days; 
	for(int i=0;i<M;i++){
		cin >> A; 
		days.push_back(A); 
	}
	sort(days.begin(), days.end()); 

	for(int i=0;i<N;i++){
		vector<int>::iterator upper = lower_bound(days.begin(), days.end(), i+1);
		cout << days[upper-days.begin()] - (i+1) << endl; 
	}

} 	
