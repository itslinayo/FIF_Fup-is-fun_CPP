#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    double celsius;
    cin >> celsius;
    
    double fahrenheit;
    fahrenheit = (1.8 * celsius) + 32;
    
    cout << fixed << setprecision(6);
    cout << fahrenheit << endl;
    
    return 0;
}