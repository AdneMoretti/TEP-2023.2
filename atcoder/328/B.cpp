#include <bits/stdc++.h> 

using namespace std; 

int solve(int i, int x){
	int digit = i%10; 
	while(i!=0 or x!=0){
		if(i>0 and i%10 != digit)
			return 0; 
		if(x>0 and x%10 != digit)
			return 0; 
		i = i/10; 
		x = x/10; 
	}
	return 1;
}

int main(){
	int N; 
	cin >> N; 
	int soma=0; 
	for(int i=1;i<=N;i++){
		int x; 
		cin >> x;	
		for(int j=1;j<=x;j++){
			if(solve(i, j)){
				soma++; 
				//cout << "i " << i << " j " << j << endl; 
			}
		}
	}
	cout << soma << endl; 

}
