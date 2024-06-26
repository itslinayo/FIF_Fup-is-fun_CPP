#include <iostream>

using namespace std;

int main(){
    
    cout << "1 - A que casa pertencia Harry Potter e seus amigos?" << endl;
    cout << "a) Hufflepuff" << endl;
    cout << "b) Ravenclaw" << endl;
    cout << "c) Slytherin" << endl;
    cout << "d) Gryffindor" << endl;

    int acertos{};
    char resp;
    cin >> resp;
    if (resp == 'd')
    {
        acertos +=1;
    }
    else
    {
        acertos += 0;
    }
    
    cout << "2 - Qual o nome verdadeiro do personagem o qual é conhecido por aquele que não deve ser nomeado ?" << endl;
    cout << "a) Tom Riddle" << endl;
    cout << "b) Draco Malfoy" << endl;
    cout << "c) Bellatrix Lestrange" << endl;
    cout << "d) Pedro Pettigrew" << endl;

    cin >> resp;
    if (resp == 'a')
    {
        acertos +=1;
    }
    else
    {
        acertos += 0;
    }

    cout << "3 - Quais dessa opções não é uma Relíquia da Morte ?" << endl;
    cout << "a) A varinha de sabugueiro" << endl;
    cout << "b) A pedra da ressurreição" << endl;
    cout << "c) A pedra filosofal" << endl;
    cout << "d) A capa de invisibilidade" << endl;

    cin >> resp;
    if (resp == 'c')
    {
        acertos += 1;
    }
    else
    {
        acertos += 0;
    }
    
    cout << "4 - O ministério da magia proibiu o uso de três feitiços, conhecidos como as maldições imperdoáveis, por ela possuírem caráter maligno e o objetivo cruel. Marque opção abaixo que não corresponde a umas das maldições imperdoáveis:" << endl;
    cout << "a) Crucio" << endl;
    cout << "b) Imperio" << endl;
    cout << "c) Avada Kedavra" << endl;
    cout << "d) Expecto Patronum" << endl;

    cin >> resp;
    if (resp == 'd')
    {
        acertos += 1;
    }
    else
    {
        acertos += 0;
    }
    
    //De acordo com o número de acertos a saída é:
    if (acertos == 0)
    {
        cout << "Nunca assistiu" << endl;
    }
    else if (acertos == 1)
    {
        cout << "Ja ouviu falar" << endl;
    }
    else if (acertos == 2)
    {
        cout << "Interessado no assunto" << endl;
    }
    else if (acertos == 3)
    {
        cout << "Fa" << endl;
    }
    else
    {
        cout << "Super Fa" << endl;
    }
    
    return 0;
}