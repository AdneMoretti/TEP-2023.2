#include <bits/stdc++.h> 

using namespace std; 
using ll = long long; 
using ii = pair<ll, ll>; 

int main(){
	int n, m; 
	cin >> n >> m; 
	set<ll> tickets(n); 
	vector<ii> costumers;
       for(auto &i: tickets){
       	 cin >> i; 
       }	

       int x; 
       set<ll>::iterator upper; 
       vector<ll> response(m, -1); 
       for(int j=0;j<m;j++){
       		cin >> x; 
		if(x < tickets[0])
			continue; 
		upper = upper_bound(tickets.begin(), tickets.end(), x); 
		if(!tickets.empty() and upper==tickets.end()){
			response[j] = tickets.back(); 
			tickets.pop_back(); 
		}	
		else if(!tickets.empty() and (upper - tickets.begin()) !=0){
			int iterador = upper - tickets.begin();
			response[j] = tickets[iterador-1]; 
			//tickets.erase(upper-1); 

		}
       }
       
       for(auto i: response) 
	       cout << i << endl; 
}
