#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    int arredondado;
    char op;
    float nota;
    cin >> op >> nota;
    
    if(op == 'r'){
        arredondado = round(nota);
    }else if(op == 'f'){
        arredondado = floor(nota);
    }else if(op == 'c'){
        arredondado = ceil(nota);
    }else{
        cout << "Digite uma operacao valida!" << endl;
    }
    
    cout << arredondado << endl;
    
    return 0;
}
