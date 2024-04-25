#include <iostream>

using namespace std;

int main(){
    
    float j1;
    char j2;
    float prod;
    cin >> j1 >> j2 >> prod;
    
    char direcao; 
    if(prod > j1){
        direcao = 'M';
    }else if(prod < j1){
        direcao = 'm';
    }
    
    if(j1 == prod || j2 != direcao){
        cout << "primeiro" << endl;
    }else{
        cout << "segundo" << endl;
    }
    
    return 0;
}