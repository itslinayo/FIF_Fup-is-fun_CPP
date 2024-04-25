#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    int prod;
    int j1;
    int j2;
    cin >> prod >> j1 >> j2;
    
    //diferença absoluta dos jogadores
    int d_j1 = abs(prod - j1);
    int d_j2 = abs(prod - j2);

    
    if(d_j1 > d_j2){
        cout << "segundo" << endl;
    }else if(d_j2 > d_j1){
        cout << "primeiro" << endl;
    }else{
        cout << "empate" << endl;
    }
    
    return 0;
}