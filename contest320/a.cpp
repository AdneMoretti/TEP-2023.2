#include <bits/stdc++.h> 

using namespace std; 

int main(){
    int A, B; 
    cin >> A >> B; 
    int res = A ** B + B ** A;
    cout << res << "\n";
    return 0; 
}