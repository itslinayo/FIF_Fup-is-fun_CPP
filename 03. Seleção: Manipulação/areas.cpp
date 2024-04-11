#include <iostream>

using namespace std;

int main(){
    
    int length1;
    int width1;
    int length2;
    int width2;

    cin >> length1 >> width1;
    cin >> length2 >> width2;

    int area1 = length1 * width1;
    int area2 = length2 * width2;

    if(area1 >= area2){
        cout << area1 << endl;
    }else if (area2 > area1){
        cout << area2 << endl;
    }

    return 0;
}