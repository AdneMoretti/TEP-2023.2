#include<bits/stdc++.h> 

using namespace std; 

int main(){
	int K, G, M; 
	cin >> K >> G >> M;  
	int qm = 0, qg = 0; 
	while(K--){
		if(qg == G){
			qg = 0;
		}	
		else if(qm==0 and qg!=G){
			qm = M;
		}	
		else{
			if(G - qg >= qm){
				qg += qm;
			       qm =0;
			}	       
			else {
				qm -= G-qg; 
				qg += G - qg; 

			}

		}
	}
	cout << qg << " " <<  qm  << endl; 


	return 0;
}

