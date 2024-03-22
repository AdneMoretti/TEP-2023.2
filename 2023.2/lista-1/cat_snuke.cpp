#include <bits/stdc++.h>

using namespace std;

int adj[200001];
int possible =0;
void solve(int x, int y, int N){
    if(x==N or x==1){
        if(!adj[y]){
            adj[y]++;
        }
        else{
            possible = 1;
            return;
        }
    }
    else if(y==N or y==1){
            if(!adj[x]){
                adj[x]++;
            }
            else{
                possible = 1;
                return;
            }
        }        

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N, M, x, y; 
    cin >> N >> M;
    for(int i=0;i<M;i++){
        cin >> x >> y; 
        solve(x, y, N);
    }
    if(possible)
        cout << "POSSIBLE" << "\n";
    else
        cout << "IMPOSSIBLE" << "\n";

}