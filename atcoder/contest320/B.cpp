#include <bits/stdc++.h> 

using namespace std; 
string s;
int solve(int x, int y){
    if(s[x]!=s[y])
        return 0;

    while(y>x){
        if(s[x]!=s[y]){
            return 0;
        }
        y--;
        x++;
    }
    
    return 1; 
}
int main(){ 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> s; 
    int res = 1;
    for(int i=s.size()-1;i>0;i--){
        for(int j=0;j<i;j++){
            if(solve(j, i)){
                if(i-j+1>res){
                    res = i-j+1;
                }
        }
        }
    }
    cout << res << "\n";
    return 0;
}