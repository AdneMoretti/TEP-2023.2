#include <bits/stdc++.h>

using namespace std;

int N, X;
vector<int> number;  
int solve(){
    int soma = 0;
    for(int i=0;i<N-2;i++){
        soma += number[i];
    }
    if(soma<X){
        soma -= number[0];
        int response = X - soma;
        if(response > number[0] and response <=number[N-2]){
            return response;
        }
        else{
            int soma2 = 0;
            for(int i=1;i<N;i++){
                soma2 += number[i];
            }
            if (soma2 < X)
                return -1;
            else 
                return number[N-1];
        }

    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);
    int y; 
    cin >> N >> X;
    for(int i=0;i<N-1;i++){
        cin >> y;
        number.emplace_back(y);
    } 
    sort(number.begin(), number.end());
    cout << solve() << endl;
    
    return 0;
}