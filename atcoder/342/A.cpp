#include <bits/stdc++.h> 

using namespace std; 

int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	string s; 
	cin >> s; 
	int a = 0, b = 0; 
	char first = s[0]; 
	int index; 
	for(int i=0;i<s.size();i++){
		if(s[i]==first){
			a++; 
		}
		else{
			b++; 
			index = i + 1; 
		}
	
	}
	if(a == 1)
		cout << 1 << endl; 
	else
		cout << index << endl; 

}
