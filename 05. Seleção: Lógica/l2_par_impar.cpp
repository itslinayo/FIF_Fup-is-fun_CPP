#include <iostream>

using namespace std;

int main(){
    
    int p;
    int d_1;
    int d_2;
    cin >> p >> d_1 >> d_2;
    
    int soma = d_1 + d_2;
    
    if(p == 0 && soma % 2 == 0 || p == 1 && soma % 2 != 0 ){
        cout << "0" << endl;
    }else{
        cout << "1" << endl;
    }
    
    return 0;
}