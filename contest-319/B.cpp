#include <bits/stdc++.h> 

using namespace std; 

string res = "";
int verifica(int i, int N){
    for(int j=1;j<=9;j++){
        if((N%j)==0 and (i%(N/j)==0)){
            string s = to_string(j);
            // string s = "";
            res+=s;
            return j; 
        }
    }
    res+="-";
    return 0; 
}
int main(){
    int N; 
    cin >> N; 
    for(int i=0;i<N+1;i++){
        verifica(i, N);
    }
    cout << res << "\n";
    return 0; 
}