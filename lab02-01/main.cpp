#include <iostream>
#include "listaencadeada.h"

using namespace std;

int main(){
    ListaEncadeada lista;
    lista.print();
    for (int i = 4; i<11; i++)
        lista.insere_elemento(i);

    lista.print();
    lista.insere_primeiro(3);
    lista.insere_primeiro(2);
    lista.insere_primeiro(1);
    lista.print();
    cout << "tamanho: " << lista.tamanho()<<endl;
    cout << "0º elemento: " << lista.get_iesimo(0)<<endl;
    cout << "1º elemento: " << lista.get_iesimo(1)<<endl;
    cout << "2º elemento: " << lista.get_iesimo(2)<<endl;
    lista.remover_elemento();
    cout << lista.tamanho() << endl;
    lista.remover_primeiro();
    lista.print();
    lista.inserir_iesimo(99, 0);
    lista.inserir_iesimo(99, 2);
    lista.print();
    lista.inserir_iesimo(99, 8);
    lista.print();
    cout << "Elemento 8: " << lista.get_iesimo(8)<<endl;

    return 0;
}