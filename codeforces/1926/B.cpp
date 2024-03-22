#include <bits/stdc++.h> 


using namespace std;
using ii = pair<int, int>;
string is_square(ii coord, vector<vector<char>> quadro, int n){
  int i = coord.first; 
  int j = coord.second; 
  
  while(j+1 < n and quadro[i][j+1]=='1'){
   j++; 
  }
  int soma = j - coord.second; 
  if(coord.first + soma >= n or coord.second + soma >=n or soma == 0)
    return "TRIANGLE"; 
  if(quadro[coord.first + soma][coord.second]=='1' and quadro[coord.first][coord.second+soma]=='1' and quadro[coord.first+soma][coord.second+soma]=='1')  
    return "SQUARE"; 

  return "TRIANGLE"; 
}
int main(){
  int t; 
  cin >> t; 
  while(t--){
    int n;
   cin >> n; 
   vector<vector<char>> quadro(n+1);
   ii first; 
   int is_first = 1;
   for(int i=0; i<n; i++){
     for(int j=0;j<n;j++){
      char x; 
      cin >> x; 
      quadro[i].push_back(x); 
      if(x=='1' and is_first){
        first = ii(i, j); 
        is_first = 0; 
      }
     } 

   }
 cout << is_square(first, quadro, n ) << endl;  
 }
}

