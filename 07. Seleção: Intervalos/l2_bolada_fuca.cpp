#include <iostream>

using namespace std;

int main(){
    
    char tipo;
    int poder, forca, forca_tipo;
    cin >> tipo >> forca;
    
    if(tipo == 'b'){
        forca_tipo = 20;
    }else if(tipo == 'c'){
        forca_tipo = 18;
    }else{
        cout << "opcao invalida" << endl;
        return 1;
    }

    
    poder = ((forca * forca_tipo) - 80) / 10;
    
    if(poder < 150){
        cout << "Fraco, nem passou" << endl;
    }else if(poder >= 150 && poder < 180){
        cout << "Perfeito" << endl;
    }else if(poder >= 180 && poder <= 210){
        cout << "Satisfeito" << endl;
    }else{
        cout << "Muito forte, bola fora" << endl;
    }
    
    return 0;
}