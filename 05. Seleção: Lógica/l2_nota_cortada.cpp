#include <iostream>

using namespace std;

int main(void)
{
	int B, T;

	cin >> B >> T;

	int metade_nota = (70*160)/2;
	int area_trap = (70*(B+T))/2;

	if(area_trap == metade_nota){
	    cout << "0" << endl;
	}else if(area_trap > metade_nota){
	    cout << "1" << endl;
	}else{
	    cout << "2" << endl;
	}
}

//No problema apresentado, o corte é sempre feito começando do lado esquerdo da nota e terminando no lado direito. Isso significa que a área à esquerda do corte é a área que está sendo avaliada para determinar quem fica com o pedaço que vale 100 reais.
//O corte é especificado pelas coordenadas B e T, onde B representa a distância do ponto inicial do corte na base (lado inferior) para o lado esquerdo da nota, e T representa a distância do ponto final do corte no topo (lado superior) para o lado esquerdo da nota.
//Portanto, a área à esquerda do corte é a área que você está considerando quando calcula a área do trapézio (a parte que fica com Felix) e compara com metade da área total da nota para determinar quem fica com o pedaço que vale 100 reais.