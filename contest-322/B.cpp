#include <bits/stdc++.h> 

using namespace std;
int N, M; 
int is_sufix(string S, string T){
	string temp =T.substr(M-N, M);
	if(temp.compare(S)==0)
		return 1; 
	else 
	 	return 0; 	
}
int is_prefix(string S, string T){
	string temp = T.substr(0, N); 
	if(temp.compare(S)==0)
		return 1; 
	else 
		return 0;
}
int main(){
	string S, T; 
	cin >> N >> M >> S >> T; 
	if(is_sufix(S, T) and not is_prefix(S, T))
		cout << "2" << endl; 
	else if(is_prefix(S, T) and not is_sufix(S, T)) 
		cout << "1" << endl; 
	else if(is_prefix(S, T) and is_sufix(S, T))
		cout << "0" << endl; 
	else 
		cout << "3" << endl; 
}
