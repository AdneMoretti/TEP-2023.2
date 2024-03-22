#include <bits/stdc++.h> 

using namespace std; 

int main(){
	int N, x; 
	char c; 
	string std, s; 
	
	do{
		cin >> N; 
		cout.flush(); 
		getline(cin, s); 
		cout << s << endl; 
		stringstream ss(s); 
		do{
			while(getline(ss, std, ' '))
			       cout << std << endl; 

		
		}while(x!=0);
	
	} while(N!=0); 

	return 0;
}
