#include "doctest.h"
#include "listaencadeada.h"
#include <cstddef>

TEST_CASE("01 - Testando o construtor vazio da lista") {
CHECK_NOTHROW(ListaEncadeada());
}
TEST_CASE("02 - Testando a inserção de nós na lista e a busca por elementos") {
ListaEncadeada lista;     //chamando lista via construtor vazio
lista.insere_elemento(4);
lista.insere_elemento(5);
lista.insere_elemento(1);
lista.insere_elemento(8);

int element1 = lista.get_iesimo(0);
int element2 = lista.get_iesimo(1);
int element3 = lista.get_iesimo(2);
int element4 = lista.get_iesimo(3);

CHECK(element1 == 4);
CHECK(element2 == 5);
CHECK(element3 == 1);
CHECK(element4 == 8);

}
TEST_CASE("03 - Testando a inserção de um novo nó como primeiro da lista") {
ListaEncadeada lista; //chamando lista via construtor vazio
lista.insere_elemento(4);
lista.insere_elemento(5);
lista.insere_elemento(1);
lista.insere_primeiro(8);

int element = lista.get_iesimo(0);

CHECK(element == 8);
}

TEST_CASE("04 - Testando a remoção de elementos do fim da lista") {
ListaEncadeada lista; //chamando lista via construtor vazio
lista.insere_elemento(4);
lista.insere_elemento(5);
lista.insere_elemento(1);
lista.insere_primeiro(8);


lista.remover_elemento();
int element = lista.get_iesimo(2);

CHECK(element == 5);
}
TEST_CASE("05 - Testando a inserção de elemento em uma posição específica") {
ListaEncadeada lista;     // chamando lista via construtor vazio
lista.insere_elemento(4);
lista.insere_elemento(5);
lista.insere_elemento(3);
lista.inserir_iesimo(4, 1);

int elemento = lista.get_iesimo(1);

CHECK(elemento == 4);
}
TEST_CASE("06 - Testando a remoção de um i-ésimo elemento") {
ListaEncadeada lista;     // chamando lista via construtor vazio
lista.insere_elemento(4);
lista.insere_elemento(5);
lista.insere_elemento(3);
lista.remover_iesimo(1);

int elemento = lista.get_iesimo(1);

CHECK(elemento == 3);
}
TEST_CASE("07 - Testando a remoção de um i-ésimo elemento caso especial") {
ListaEncadeada lista;     // chamando lista via construtor vazio
lista.insere_elemento(4);
lista.insere_elemento(5);
lista.insere_elemento(3);
lista.remover_iesimo(0);
lista.remover_iesimo(0);
lista.remover_iesimo(0);

CHECK(lista.tamanho() == 0);
}
TEST_CASE("08 - Testando a remoção de um i-ésimo elemento caso especial 2") {
ListaEncadeada lista;     // chamando lista via construtor vazio
lista.insere_elemento(4);
lista.insere_elemento(5);
lista.insere_elemento(3);
lista.remover_iesimo(2);
lista.remover_iesimo(1);
lista.remover_iesimo(0);

CHECK(lista.tamanho() == 0);
}