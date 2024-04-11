#include <iostream>

using namespace std;

// Resultado da operação em inteiro. Nunca haverá divisão por 0.
int main(){
    
    char simb;
    int n1, n2, res;
    
    cin >> n1;
    cin >> n2;
    cin >> simb;
    
    if(simb == '+'){
        res = n1 + n2;
    }else if(simb == '-'){
        res = n1 - n2;
    }else if(simb == '*'){
        res = n1 * n2;
    }else{
        res = n1 / n2;
    }
    
    cout << res << endl;
    
    return 0;
}