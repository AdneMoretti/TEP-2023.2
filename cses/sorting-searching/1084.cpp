#include <bits/stdc++.h> 

using namespace std; 

int main(){
	long long n, m, k;
	cin >> n >> m >> k; 
	vector<int> people(n); 
	vector<int> apartments(m); 
	for(auto &i: people){
		cin >> i; 	
	}

	for(auto &j: apartments){
		cin >> j; 
	} 
	sort(people.begin(), people.end());
	sort(apartments.begin(), apartments.end()); 
	int cont = 0; 
	while(!people.empty() and !apartments.empty())
	{

		long long x = people.back(); 
		long long y = apartments.back(); 
		if(y > (x + k)){
			apartments.pop_back(); 
		}
		else if(y >= (x-k) and y <= (x+k)){
			cont++; 
			apartments.pop_back(); 
			people.pop_back(); 	
		
		}
		else{
			people.pop_back(); 
		}
	
	}
	cout << cont << endl; 



}
