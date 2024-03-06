#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int quantProd1, quantProd2, quantProd3;
    float valorProd1, valorProd2, valorProd3;
    float dinheiro;
    
    cin >> quantProd1;
    cin >> quantProd2;
    cin >> quantProd3;
    cin >> valorProd1;
    cin >> valorProd2;
    cin >> valorProd3;
    cin >> dinheiro;
    
    float totalProd1, totalProd2, totalProd3;
    totalProd1 = static_cast<float>(quantProd1) * valorProd1;
    totalProd2 = static_cast<float>(quantProd2) * valorProd2;
    totalProd3 = static_cast<float>(quantProd3) * valorProd3;
    
    float troco;
    troco = dinheiro - (totalProd1 + totalProd2 + totalProd3);
    
    cout << fixed << setprecision(2);
    cout << troco << endl;
    
    return 0;
}