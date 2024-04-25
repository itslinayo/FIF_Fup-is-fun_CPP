#include <iostream>

using namespace std;

int main(){
    
    int j1;
    int j2;
    int j3;
    cin >> j1 >> j2 >> j3;
    
    if(j1 == j2 && j2 == j3){
        cout << "empate" << endl;
    }else if(j1 != j2 && j1 != j3){
        cout << "jog1" << endl;
    }else if(j2 != j1 && j2 != j3){
        cout << "jog2" << endl;
    }else{
        cout << "jog3" << endl;
    }
    
    return 0;
}