#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    int cesta, banana, goiaba, manga;
    cin >> cesta >> banana >> goiaba >> manga;
    
    int total_frutas = banana + goiaba + manga;
    float min;
    if(total_frutas <= cesta){
        min = 1;
    }else{
        min = float(total_frutas) / cesta;
        min = ceil(min);
    }
    
    cout << min << endl;
    
    return 0;
}