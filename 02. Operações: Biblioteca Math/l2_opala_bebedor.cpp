#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    int velMedia;
    int tMinutos;
    float conLitros;
    float dist, desemp;
    
    cin >> velMedia;
    cin >> tMinutos;
    cin >> conLitros;
    
    float tHoras = static_cast<float>(tMinutos) / 60;
    dist = static_cast<float>(velMedia) * tHoras;
    desemp = dist / conLitros;
    
    cout << fixed << setprecision(2);
    cout << desemp << endl;
    
    return 0;
}
