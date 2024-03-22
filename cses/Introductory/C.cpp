#include <bits/stdc++.h> 

using namespace std; 

int main(){
	string s; 
	cin >> s; 
	int maior = 1;
	int cont = 1; 
	for(int i=1;i<s.size();i++){
		if(s[i] == s[i-1]){
			cont++; 
			maior = max(cont, maior); 
		}
		else{
			cont = 1 ; 
		}
	}
	cout << maior << endl; 
}
