#include <iostream>

using namespace std;

int main(){
    
    int n = 0;
    int d = 0;
    int q, r;
    
    cin >> n;
    cin >> d;
    
    r = n % d;
    q = (n - r) / d;
    
    cout << q << ' ';
    cout << r << endl;
    
    return 0;
}