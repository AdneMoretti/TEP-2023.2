#include <bits/stdc++.h> 
using namespace std;  
using ii = pair<int, int>; 
set<ii> visited; 
vector<string> matrix;
int res[10000]; 
map<ii, vector<ii>> adj;
vector<ii> direction{{-1,1}, {1, -1}, {1, 1}, {-1,-1}};
int H, W, cont; 

vector<ii> valid_arestas(ii par){
    int x1 = par.first; int y1 = par.second;
    vector<ii> valid; 
    for(auto [x, y]: direction){
	    if(x1+x < H  and x1+x>=0 and y1+y < W and y1+y >= 0 and matrix[x1+x][y1+y] == '#'){
            valid.emplace_back(ii(x1+x, y1+y)); 
        }
    }
    return valid; 
}

void dfs(ii s){
    if(visited.find(s)!= visited.end())
       return; 
    cont++; 
    visited.insert(s); 
    adj[s] = valid_arestas(s); 
    //cout << " " << s.first << " " << s.second << " " << arestas.size() << endl; 
    for(auto u: adj[s]){
	return dfs(u);
    }
}


int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
	cin >> H >> W;
	
	for(int i=0;i<H;i++){
		string s; 
		cin >> s; 
		matrix.push_back(s); 
	}
	
	for(int i=0;i<H;i++){
	    for(int j=0;j<W;j++){
	        if(visited.find(ii(i, j))== visited.end() and matrix[i][j]=='#')		{
	            cont = 0; 
	            dfs(ii(i, j)); 
	            cout << cont << " " << (cont-1)/4<< endl; 
		    res[(cont-1)/4-1]++; 
	    
		}	
	    }
	}
	
	for(int k=0;k<H;k++){
		k==H-1 ? cout << res[k] << endl : cout << res[k] << " "; 
	}
}
