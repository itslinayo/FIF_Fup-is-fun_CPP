#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int a = 0;
    int b = 0;
    int soma, sub, mult, resto;
    float divi;
    
    cin >> a;
    cin >> b;
    
    soma = a + b;
    sub = a - b;
    mult = a * b;
    divi = static_cast<float>(a) / b;
    resto = a % b;
    
    cout << soma << endl;
    cout << sub << endl;
    cout << mult << endl;
    
    cout << fixed << setprecision (2);
    cout << divi << endl;
    
    cout << resto << endl;
    
    return 0;
}