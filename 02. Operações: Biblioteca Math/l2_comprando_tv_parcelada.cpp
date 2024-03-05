#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    float valorTv, juros;
    int quantParc;
    
    cin >> valorTv;
    cin >> quantParc;
    
    switch(quantParc){
        case 1: juros = 0;
        break;
        case 2: juros = 0.05;
        break;
        case 3: juros = 0.10;
        break;
        case 4: juros = 0.15;
        break;
        case 5: juros = 0.20;
        break;
        case 6: juros = 0.25;
        break;
        case 7: juros = 0.30;
        break;
        case 8: juros = 0.35;
        break;
        case 9: juros = 0.40;
        break;
        case 10: juros = 0.45;
        break;
        default: return 1;
    }
    
    float valorParc = (valorTv / quantParc);
    float jurosFinal = juros * valorParc;
    valorParc += jurosFinal;
    float valorTotal = valorParc * quantParc;
    
    cout << fixed << setprecision(2);
    cout << valorParc << endl;
    cout << valorTotal << endl;
    
    return 0;
}