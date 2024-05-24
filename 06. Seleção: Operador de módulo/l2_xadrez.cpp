#include <iostream>

using namespace std;

int main(){
    
    int linhas, colunas;
    cin >> linhas >> colunas;
    
    if(linhas % 2 == 0 && colunas % 2 == 0 || linhas % 2 != 0 && colunas % 2 != 0){
        cout << "1" << endl;
    }else{
        cout << "0" << endl;
    }
    
    return 0;
}