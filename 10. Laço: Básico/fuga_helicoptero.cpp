#include <iostream>
using namespace std;

int main() {
    int H, P, F, D;
    cin >> H >> P >> F >> D;

    bool escapou = true; 

    if(D == -1){
        
        while(F != H){
            if(F == P){
                escapou = false;
                break;
            }
            //move o fugitivo uma posição no sentido horário garantindo o intervalo [0,15]
            F = (F + 15) % 16; 
        }
        
    }else if(D == 1){ 
        
        while(F != H){
            if(F == P){
                escapou = false; 
                break;
            }
            //move o fugitivo uma posição no sentido anti-horário garantindo o intervalo [0,15]
            F = (F + 1) % 16;
        }
        
    }

    if(escapou){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }

    return 0;
}
