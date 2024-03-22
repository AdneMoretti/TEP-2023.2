
#include <bits/stdc++.h> 

using namespace std; 

int main(){
  int n;
  cin >> n;

  vector<int> a(n), b(n);


  for (auto &i : a)
    cin >> i;

  for (auto &i : b)
    cin >> i;

  vector<int> ps(n);

  iota(ps.begin(), ps.end(), 1);

  int ai,bi, i = 0;

  do {


    if (a == ps)
      ai = i;

    if (b == ps)
      bi = i;

    i++;
  }while(next_permutation(ps.begin(), ps.end()));


  cout << abs(ai - bi) << endl;

}
