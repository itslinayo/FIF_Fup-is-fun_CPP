#include <iostream>

using namespace std;

int main(){
    
    int num;
    cin >> num;
    
    if(num > 0){
        cout << "+" << endl;
    }else if(num < 0){
        cout << "-" << endl;
    }else{
        cout << "0" << endl;
    }
    
    return 0;
}