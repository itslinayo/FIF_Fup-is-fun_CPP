#include <iostream>

using namespace std;

int main(){
    
    int num;
    cin >> num;
    
    if(num % 7 == 0){
        cout << "SIM" << endl;
    }else{
        cout << "NAO" << endl;
    }
    
    return 0;
}