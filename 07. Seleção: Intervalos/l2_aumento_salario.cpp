#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    float atual, novo;
    cin >> atual;
    
    if(atual <= 1000){
        novo = (0.2 * atual) + atual;
    }else if(atual > 1000 && atual <= 1500){
        novo = (0.15 * atual) + atual; 
    }else if(atual > 1500 && atual <= 2000){
        novo = (0.10 * atual) + atual; 
    }else{
        novo = (0.05 * atual) + atual;     
    }
    
    cout << fixed << setprecision(2);
    cout << novo << endl;
    
    return 0;
}