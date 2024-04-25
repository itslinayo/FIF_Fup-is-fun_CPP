#include <iostream>

using namespace std;

int main(){
    
    //A entrada é composta por uma linha contendo quatro números reais com precisão de duas casas decimais A, G, Ra e Rg , representando respectivamente o preço por litro do álcool, o preço por litro da gasolina, o rendimento (km/l) do carro utilizando álcool e o rendimento (km/l) do carro utilizando gasolina. 
    float a,g,ra,rg;
    cin >> a >> g >> ra >> rg;
    
    float alcool = a / ra;
    float gasolina = g / rg;
    
    if(alcool < gasolina){
        cout << "A" << endl;
    }else{
        cout << "G" << endl;
    }
    
    return 0;
}