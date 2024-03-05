#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    
    float l1 = 0;
    float l2 = 0;
    float l3 = 0;
    float area, p;
    
    cin >> l1;
    cin >> l2;
    cin >> l3;
    
    p = (l1+l2+l3) / 2;
    area = sqrt(p*(p - l1)*(p - l2)*(p - l3));
    
    cout << fixed << setprecision(2); 
    cout << area << endl;
    
    return 0;
}