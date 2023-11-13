#include <bits/stdc++.h> 
using namespace std; 

multiset<int> numbers; 

int main(){
	int N, M, x; 
	cin >> N >> M; 
	for(int i=0;i<N;i++){
		cin >> x; 
		numbers.insert(x*(-1));
	
	}
	cout << *numbers.begin()<< endl; 


	return 0;
}

