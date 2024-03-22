#include <bits/stdc++.h> 

using namespace std; 

int main(){
	int N, Q; 
	cin >> N >> Q; 
	string s; 
	cin >> s;
	vector<int> pre (N, 0); 
	for(int i=1;i<s.size();i+=1){
		if(s[i]==s[i-1])
			pre[i] = pre[i-1]+1; 
		else
			pre[i] = pre[i-1]; 
	}
	for(int i=0;i<Q;i++){
		int x, y; 
		cin >> x >> y;
		int cont = 0;	
		cout << pre[y-1] - pre[x-1] << endl; 
	}

}
