#include <bits/stdc++.h> 

using namespace std;



int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	int T, A, B, C; 
	vector<int> n; 
       cin >> T; 	
	while(T--){
		 cin >> A >> B >> C ; 

		int ra =1 , rb=1, rc=1; 	
		 int menor_a = min(B, C); 
		int  menor_b = min(C, A); 
		int  menor_c = min(B, A); 
		int  maior_a = max(B, C); 
		int  maior_b = max(C, A); 
		int  maior_c = max(B, A); 

		 if((B != C and  A - (maior_a - menor_a) <=  A - maior_a) or A < maior_a)
			 ra = 0; 

		  if((A != C  and  B - (maior_b - menor_b) <=  B - maior_b) or B < maior_b)
			 rb = 0; 

		 if((A != B and  C - (maior_c - menor_c) <=  C - maior_c) or C < maior_c)
			 rc = 0; 
		cout << ra << " " <<  rb << " " <<  rc << endl; 
	}	

}

