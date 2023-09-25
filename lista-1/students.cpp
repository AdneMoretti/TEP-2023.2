#include <bits/stdc++.h>

using namespace std;
int N;
vector<int> obs[1000];
vector<int> retirados;
int aux[101];
int qtdRetirados = 0;
int solve(int M, int N){
    int count = 0;
    while(1){
        retirados.clear();
        for(int i=1;i<=N;i++){
            if(aux[i]==1){
                aux[i]--;
                retirados.push_back(i);
            }
        }
        if(!retirados.size())
            return count;
        count++;
        for(auto a: retirados){
            for(auto b: obs[a]){
                if(aux[b]>0){
                    aux[b]--;
                }
            }
            
        }

    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int M; 
    cin >> N >> M;
    for(int i=0;i<M;i++){
        int x, y; 
        cin >> x >> y;
        obs[x].push_back(y);
        obs[y].push_back(x);
        aux[x]++;
        aux[y]++;
    }
    cout << solve(M, N)<<"\n";
}