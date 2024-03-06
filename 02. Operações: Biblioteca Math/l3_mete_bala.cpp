#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    
    float x1, y1, x2, y2;
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
    
    float dist;
    dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    cout << fixed << setprecision(2);
    cout << dist << endl;
    
    return 0;
}