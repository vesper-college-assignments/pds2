#ifndef LISTAENCADEADA_H_
#define LISTAENCADEADA_H_

/*
  usem a struct 'node_t' para criar o atributo nó da lista. Notem que ela possui um campo inteiro
  e um ponteiro para o próximo nó. A lista deve conter referências para o primeiro
  e último nós.
*/

struct node_t {
	int elemento;
	node_t *proximo;
	node_t *anterior;
    node_t(){
        proximo = nullptr;
        anterior = nullptr;
    }
};

struct ListaEncadeada {
    int size;
    node_t *primeiro;
    node_t *ultimo;

    ListaEncadeada(){
        size = 0;
        primeiro = nullptr;
        ultimo = nullptr;
    }
    void remove_consecutivos();
    int k_esimo(bool direcao, int position);
    bool checa_palindromo();
    void insere_elemento(int);
    void insere_primeiro(int);
    int get_iesimo(int);
    void remover_elemento();
    void remover_primeiro();
    void inserir_iesimo(int key, int position);
    void remover_iesimo(int);
    int tamanho();
    void print();
};




#endif /* LISTAENCADEADA_H_ */
