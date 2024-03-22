#include <bits/stdc++.h> 

using namespace std; 

int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	int N; 
	cin >> N;
	string response = "";
        int valido = 0; 	
        set<string> s; 
	vector<string> n; 	
	for(int i=0;i<N;i++){
		string x; 
		cin >> x; 
		s.insert(x); 
		n.push_back(x); 
		//if(x[0] == '!'){
			//if(s.count(x)){
			//	response = x.substr(1, x.size()-1);  
			//	valido = 1;
			//}
		//	s.insert(x); 
		//}
		//else{
			//if(s.count("!"+x)){
			//	response = x; 
			//	valido =1; 
			//}
		//	s.insert(x); 
		//}
	
	}
	for(auto i: n){
		if(i[0] != '!')
			if(s.count("!"+i)){
				response = i; 
				valido = 1; 
			}
	}
	cout << (valido ? response : "satisfiable") << endl; 
	return 0; 
}

