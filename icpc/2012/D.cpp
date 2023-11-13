#include <bits/stdc++.h> 

using namespace std; 

int main(){
	int N;
      	
	while(cin >> N){
	        int menor, maior; 	 
	        int media = 0; 
		vector<int> coral; 
		for(int i=0;i<N;i++){
			int x; 
			cin >> x;
		       	media+=x; 
			coral.push_back(x); 
	       	}
		if(media%N != 0){
			cout << "-1" << endl; 
			continue; 
		} 
		media/=N;
		int soma=0; 
		for(auto i: coral){
			if(i-media >0){
				soma+=i-media; 
			}
		}
		cout << soma+1 << endl; 
	}
}
