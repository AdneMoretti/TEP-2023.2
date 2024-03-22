#include <bits/stdc++.h> 

using namespace std; 

int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	int H, W; 
	cin >> H >> W; 
	vector<int> numbers; 
	int menor = 1000; 
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			int x; 
			cin >> x;
		        numbers.push_back(x); 	
			if(x < menor)
				menor = x; 
		}
	
	}
	int soma = 0; 
	for(auto i: numbers){
		soma+=i-menor; 
	}
	cout << soma << endl; 

}

