#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int n1 = 0;
    int n2 = 0;
    
    cin >> n1;
    cin >> n2;
    
    float mediaArit;
    mediaArit = static_cast<float>(n1 + n2) / 2;
    
    cout << fixed << setprecision(1);
    cout << mediaArit << endl;
    
    return 0;
}