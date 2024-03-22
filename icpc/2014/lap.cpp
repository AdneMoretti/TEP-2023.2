#include <bits/stdc++.h> 

using namespace std; 

int main(){
	int n, k; 
	cin >> n >> k; 
	int i=2; 
	while(1){
		int a = (n*i)/k + (k% (n*i) == 0? 0 : 1); 
	 	if(i > a){
			cout << i << endl;
			return 0; 
		}
		i++; 
	}

}
