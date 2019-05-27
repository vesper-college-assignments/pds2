#include "doctest.h"
#include "listaencadeada.h"
#include <cstddef>

TEST_CASE("01 - Testando função para reconhecer se lista é um palíndromo") {
ListaEncadeada lista; //chamando lista via construtor vazio
lista.insere_elemento(1);
lista.insere_elemento(2);
lista.insere_elemento(3);
lista.insere_elemento(4);
lista.insere_elemento(3);
lista.insere_elemento(2);
lista.insere_elemento(1);

CHECK(lista.checa_palindromo());

//removendo elemento do meio, mas lista continua um palíndromo
lista.remover_iesimo(3);
CHECK(lista.checa_palindromo());

//removendo os dois elementos com valor 3 e lista continua sendo um palíndromo
lista.remover_iesimo(2);
lista.remover_iesimo(2);
CHECK(lista.checa_palindromo());

//inserindo elemento pra que lista deixe de ser um palíndromo
lista.insere_elemento(4);
CHECK(!lista.checa_palindromo());
}