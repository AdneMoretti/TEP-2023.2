#include <bits/stdc++.h> 

using namespace std; 

int solve(vector<int> numbers, int N){
	vector<int> players(2, 0); 
	int aux = 0; 
	int maior = 0; 
	while(N--){
		if(N>1 or N==0){
			if(numbers[N] > numbers[1] and numbers[N-1]+numbers[0] > numbers[N] ){
				maior = numbers[0]; 
				numbers.erase(numbers.begin()); 	
			}
			else{
				maior = numbers[N]; 
				numbers.pop_back(); 
			}
		}else{
			if(numbers[0] > numbers[1]){
				maior = numbers[0]; 
				numbers.erase(numbers.begin()); 		
			}
			else{
				maior = numbers[N]; 
				numbers.pop_back(); 
			}
		}
	       	cout << maior << " " << "jogador" << aux << endl; 	
		players[aux] += maior;
	       	aux = 1 -aux;  
		for(auto i: numbers)
			cout << i << " "; 	
		
	}

	return players[0]; 
}
int main(){
	int N; 
	while(cin >> N){
		vector<int> numbers; 
		for(int i=0;i<N;i++){
			int x; 
			cin >> x; 
			numbers.push_back(x); 
		}
		cout << solve(numbers, N) << endl; 

	
	}


}
