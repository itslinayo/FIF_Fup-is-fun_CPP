#include <iostream>

using namespace std;

int main(){
    int menor, maior;
    cin >> menor >> maior;
    
    int a = menor, b = maior;
    cout << "[ ";
    while(b >= menor){
        cout << a << " " << b << " ";
        a++, b--;
    }
    cout << "]\n";
    
    return 0;
}