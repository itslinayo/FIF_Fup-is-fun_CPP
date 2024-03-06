#include <iostream>

using namespace std;

int main(){
    
    int s1;
    cin >> s1;
    
    int m = 0, h = 0;
    h = s1 / 3600;
    
    int restoTempo1;
    restoTempo1 = s1 % 3600;
    m = restoTempo1 / 60;
    
    int restoTempo2, s2;
    restoTempo2 = restoTempo1 % 60;
    s2 = restoTempo2;
    
    cout << h << ':' << m << ':' << s2 <<endl;
    
    return 0;
}