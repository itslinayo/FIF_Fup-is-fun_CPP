#include <iostream>

using namespace std;

int main(){
    
    string nome;
    int idade;
    getline(cin, nome); //lê o nome com espaços em branco
    cin >> idade;

    if (idade < 12)
    {
        cout << nome << " eh crianca" << endl;
    }
    else if (idade < 18)
    {
        cout << nome << " eh jovem" << endl;
    }
    else if (idade < 65)
    {
        cout << nome << " eh adulto" << endl;
    }
    else if (idade < 1000)
    {
        cout << nome << " eh idoso" << endl;
    }
    else
    {
        cout << nome << " eh mumia" << endl;
    }
   
    return 0;
}