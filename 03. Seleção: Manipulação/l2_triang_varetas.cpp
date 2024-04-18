#include <iostream>

using namespace std;

int main(){
    
    int v1{}, v2{}, v3{};
    cin >> v1 >> v2 >> v3;
    
    if(v1 >= v2 + v3 || v2 >= v1 + v3 || v3 >= v1 + v2){
        cout << "False" << endl;
    }else{
        cout << "True" << endl;
    }
    
    return 0;
}
