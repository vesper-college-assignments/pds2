#include <iostream>
#include <cstring>
#include <string>
//se a letra for maiúscula, deve-se subtrair o primeiro dígito do segundo.
// Se a letra for minúscula, deve-se somar ambos os dígitos e

// se os DÍGITOS forem iguais, deve-se desconsiderar a letra e mostrar o produto entre os dois dígitos.
using namespace std;

bool verifica_caracter_maiusculo(char c){
    if (c>=65 && c<=90)
        return true;
    return false;
}

int main(){

	long long int n, solucao=0;
	string sequencia;
	cin >> n;
	
	for(long long int i=0; i<n; i++){

		cin >> sequencia;
//        cout << sequencia << endl;
        int digito1 = (int)sequencia[0]-48;
        int digito2 = (int)sequencia[2]-48;


        if (digito1 == digito2) {
			solucao = (digito1) * (digito2);
		} else if (verifica_caracter_maiusculo(sequencia[1])) {
		    solucao = (digito2) - (digito1);
		} else {
			solucao = (digito1) + (digito2);
		}

		cout << solucao << endl;

	}

	

	return 0;
}