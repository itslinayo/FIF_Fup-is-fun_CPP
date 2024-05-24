#include <iostream>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    
    int total_pecas = ((n+1)*(n+2)) / 2;
    cout << total_pecas << endl;
    
    return 0;
}