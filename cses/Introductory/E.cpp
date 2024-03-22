#include <bits/stdc++.h> 

using namespace std; 
int n; 
int metade; 
vector<int> response; 
int solve(vector<int> &xs){
	int i, j; 
	i = 0; 
	j = metade;
	while(i<metade and j<n){
	        if(!response.empty() and response.back() - xs[i] ==  1)
	       		return 0; 	       

		response.push_back(xs[i]);
		if(xs[j] - response.back() == 1)
			return 0; 

		response.push_back(xs[j]); 
		i++; 
		j++;
	}
	while(i<metade){
		if(response.back() - xs[i] == 1 )
	       		return 0; 

		response.push_back(xs[i]); 
		i++; 
	}
	while(j< n){
		if(xs[j] - response.back() == 1)
			return 0; 
		response.push_back(xs[j]); 
		j++; 
	}
	return 1; 

}

int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	cin >> n; 
	vector<int> xs(n); 
	iota(xs.begin(), xs.end(), 1); 
	metade = n/2; 
	if(n%2) 
		metade++; 

	if(!solve(xs))
	       cout << "NO SOLUTION" << endl; 
	else 
		for(int i=0;i<n;i++){
			cout << response[i] <<  (i==n-1 ? "\n":  " "); 
		}	
	


}
