#include <bits/stdc++.h> 

using namespace std; 

int main(){
    int T, C, R, S; 
    cin >> T; 
    for(int i=0;i<T;i++){
        cin >> C >> R >> S;
        int best = C/S; 
        if(C%S > 0 and R==0){
            best++;
        }
        int resultado = C / (S-1);
        int worst;
        if(resultado < R)
            worst = 0;
        else {
             //worst = (C - ((resultado -R)*(S-1)))/S;
             //cout << "pior" << worst << endl;
            // worst = (resultado-R) / S;
            // cout << " " << (C % S-1) % S << endl;
            int sobra = C - (R *(S-1));
            worst = sobra/S;
            if(sobra % S > 0)
                worst++;
        }
        cout << best << " " << worst << endl;
    }
}