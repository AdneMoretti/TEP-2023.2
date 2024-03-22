#include <bits/stdc++.h> 

using namespace std; 
using ll = long long; 
int has_7(int x){
	int w = x, y = x; 
	while(w>0 or y>0){
		int z = w%8;
	        int j = y%10; 	
		if(z == 7 or j==7){
			return 1; 
		}
		w = w/8; 
		y = y/10; 
	}
	return 0; 

}
int solve(int N){
	int cont = 0;
	for(int i=6;i<=N;i++){
		if(has_7(i))
			cont++; 
	}
	return cont;

}
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	int N;
       cin >> N; 
       int a; 
       vector<int> some (N+1, 0); 
       cin >> a; 
       some[0] = a; 
       int antigo = a; 
       for(int i=1;i<N;i++){
       	   cin >> a; 
	   if(i==1)
		   some[i] = abs(antigo - a); 
	   else 
		   some[i] = some[i-1] + abs((some[i-1] + (i * antigo) - a));  
	   antigo = a; 
       }
       ll all_some = 0;
       for(auto i: some){
       	   cout << i << endl; 
       }
       cout << some[N-1] << endl; 
}



