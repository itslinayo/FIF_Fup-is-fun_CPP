#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    
    float a;
    float b;
    float c;
    cin >> a >> b >> c;
    
    float delta = sqrt(pow(b, 2) - 4*a*c);
    
    if(delta > 0){
        float r1 = (-b + delta) / (2*a);
        float r2 = (-b - delta) / (2*a);
        cout << fixed << setprecision(2);
        cout << r1 << endl << r2 << endl;
    }else if(delta == 0){
        float r1 = (-b + delta) / (2*a);
        cout << fixed << setprecision(2);
        cout << r1 << endl;
    }else{
        cout << "nao ha raiz real" << endl;
    }
    
    return 0;
}