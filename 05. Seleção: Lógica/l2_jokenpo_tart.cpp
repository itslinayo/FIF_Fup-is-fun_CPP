#include <iostream>

using namespace std;

int main(){
    
    char j1;
    char j2;
    cin >> j1 >> j2;
    
    if(j1 == j2){
        cout << "empate" << endl;
    }else if(j1 == 'R' && j2 == 'S' || j1 == 'P' && j2 == 'R' || j1 == 'S' && j2 == 'P'){
        cout << "jog1" << endl;
    }else{
        cout << "jog2" << endl;
    }
    
    return 0;
}