// Escreva um programa (main.cpp) que leia um texto fornecido como entrada. 
//Ao final imprima cada palavra uma vez, com uma contagem do número de vezes que ocorreu na entrada 
//e o percentual que essa palavra representa de todo o texto. Dica: utilize os TADs da STL para auxiliar nessa tarefa (map, vector, list). Dica: use um std::map<std::string, int>> para realizar a contagem.

// Para ler o arquivo palavra por palavra use a função:

#include <iomanip>
#include <iostream>
#include <string.h>
#include <map>


using namespace std;


string para_minuscula(string str){
  

}

int main (){
	cout.precision(2);

	map<string,int> indice;
	map<string,int>::iterator it;

	int total;
	string linha, palavra;
	while (getline(std::cin, linha)) {
		istringstream linha_stream(linha);
		while (getline(linha_stream, palavra, ' ')) {
			
			// palavra = para_minuscula(palavra);
			
			it = indice.find(palavra);
			if (it == indice.end()){
				indice[palavra] = 1;
				total++;
			}

			else{
				indice[palavra]++;
				total++;
			}
	  	}
	} 

	cout << total << endl;
	
	for(map<string,int>::const_iterator it = indice.begin(); it != indice.end(); ++it){
    	cout << it->first << " " << it->second << "\n";
	}

	return 0;
}




// Exemplo:
// input = Olha o sapo dentro do saco
// O saco com o sapo dentro
// O sapo batendo papo
// E o papo soltando o vento
// output = batendo 1 0.05
// com 1 0.05
// dentro 2 0.09
// do 1 0.05
// e 1 0.05
// o 6 0.27
// olha 1 0.05
// papo 2 0.09
// saco 2 0.09
// sapo 3 0.14
// soltando 1 0.05
// vento 1 0.05