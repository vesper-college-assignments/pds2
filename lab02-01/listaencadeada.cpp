#include <iostream>
#include "listaencadeada.h"

using namespace std;
void ListaEncadeada::insere_elemento(int key){
    //Insere um elemento no fim da lista
    node_t *aux = new node_t;
    aux->elemento = key;
    aux->anterior = ultimo;
    if(ultimo != nullptr)
        ultimo->proximo = aux;
    ultimo = aux;
    if (primeiro == nullptr)
        primeiro = aux;
    size++;
}

void ListaEncadeada::insere_primeiro(int key) {
    node_t *aux = new node_t;
    aux->elemento = key;
    if (primeiro == nullptr) {
        primeiro = aux;
        ultimo = aux;
        return;
    }
    aux->proximo = primeiro; //funciona mesmo se for o primeiro no
    primeiro->anterior = aux;
    primeiro = aux;
    size++;
}

void ListaEncadeada::print(){
    if(primeiro == nullptr){
        cout << "List empty, nothing to print"<< endl;
        return;
    }
    node_t *crawler;
    crawler = primeiro;

    cout << "Lista";
    while(crawler != nullptr){
        cout << " -> "<<crawler->elemento;
        crawler = crawler->proximo;
    }
    cout << endl;
}

int ListaEncadeada::get_iesimo(int position){
    if (tamanho() < position){
        cout << "The position does not exist within list."<<endl;
        return 0;
    }
    node_t *crawler = primeiro;
    for (int i = 1; i <= position; ++i) {
        crawler = crawler->proximo;
    }
    return crawler->elemento;
}

int ListaEncadeada::tamanho(){
    return size;
}

void ListaEncadeada::remover_elemento(){
    // Remove um elemento no fim da lista.
    if (ultimo == nullptr){
        cout << "List is empty"<<endl;
        return;
    }
    node_t *to_be_deleted = ultimo;
    ultimo = ultimo->anterior;
    ultimo->proximo = nullptr;
    to_be_deleted->anterior = nullptr;
    delete (to_be_deleted);
    size--;
}

void ListaEncadeada::remover_primeiro(){
    if (primeiro == nullptr){
        cout << "Sorry, a lista é vazia"<< endl;
        return;
    }
    node_t *crawler = primeiro;
    if(size > 1) {
        primeiro = crawler->proximo;
        primeiro->anterior = nullptr;
    }
    else if (size == 1){
        primeiro = nullptr;
    }
    delete(crawler);
    size--;

}

void ListaEncadeada::inserir_iesimo(int key, int position){
    if(position == 0){
        insere_primeiro(key);
        return;
    }
    node_t *aux = new node_t;
    aux->elemento = key;
    node_t *crawler;

    if( (size - position) >= size/2){
        crawler = primeiro;
        for (int i = 0; i < position-1; ++i)
            crawler = crawler->proximo;
        aux->proximo = crawler->proximo;
        crawler->proximo->anterior = aux;
        crawler->proximo = aux;
        aux->anterior = crawler;
    }
    else{
        crawler = ultimo;
        for (int i = size-1; i >= position ; --i)
            crawler = crawler->anterior;
        aux->proximo = crawler->proximo;
        crawler->proximo->anterior = aux;
        crawler->proximo = aux;
        aux->anterior = crawler;
    }
    size++;
}

void ListaEncadeada::remover_iesimo(int position){
    if(position > (size-1)){
        cout << "Position not whithin list" << endl;
        return;
    }
    if(primeiro == nullptr){
        cout << "List is empty" << endl;
        return;
    }
    if (position == 0) {
        remover_primeiro();
        return;
    }
    if (position == (size-1)) {
        remover_elemento();
        return;
    }
    if (size ==1){

        remover_elemento();
        return;
    }

    node_t *crawler;

    if( (size - position) >= size/2){
        crawler = primeiro;
        for (int i = 0; i < position; ++i)
            crawler = crawler->proximo;
        crawler->anterior->proximo = crawler->proximo;
        crawler->proximo->anterior = crawler->anterior;
    }
    else{
        crawler = ultimo;
        for (int i = size-1; i > position ; --i)
            crawler = crawler->anterior;
        crawler->anterior->proximo = crawler->proximo;
        crawler->proximo->anterior = crawler->anterior;
    }
    size--;

}

